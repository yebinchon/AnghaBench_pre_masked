
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef int register_t ;
typedef int prop ;
typedef int platform_t ;
typedef scalar_t__ phandle_t ;
typedef void* pcell_t ;
typedef unsigned long long int32_t ;
typedef int cell_t ;
typedef int buf ;
typedef int arr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**,int) ;
 int FUNC_2 (scalar_t__,char*,char*,int) ;
 int FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 () ;
 int VAR_11 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 void* VAR_12 ;
 unsigned long long VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 void* VAR_14 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(platform_t VAR_17)
{
 uint32_t VAR_18, VAR_19 = 0, VAR_20 = 0;
 int32_t VAR_21, VAR_22;
 char VAR_23[255];
 pcell_t VAR_24;
 phandle_t VAR_25;
 int VAR_26, VAR_27, VAR_28;
 register_t VAR_29;


 FUNC_11();


 FUNC_10(VAR_1, 2 );




       if (VAR_10 == ((void*)0))
                VAR_10 = VAR_16;

 VAR_15 = FUNC_7(VAR_8);


 VAR_29 = FUNC_6();
 FUNC_8(VAR_29 & ~(VAR_3 | VAR_4));


 FUNC_9(VAR_7, 0);
 FUNC_5();

 if (VAR_9 & VAR_2)
  VAR_11 |= VAR_0;

 FUNC_9(VAR_6, VAR_11);
 FUNC_5();

 FUNC_8(VAR_29);

 FUNC_13();


 VAR_25 = FUNC_4(0);
 VAR_25 = FUNC_0(VAR_25);
 while (VAR_25 != 0) {
  VAR_26 = FUNC_2(VAR_25, "name", VAR_23, sizeof(VAR_23));
  if (VAR_26 > 0 && FUNC_14(VAR_23, "cpus") == 0)
   break;
  VAR_25 = FUNC_4(VAR_25);
 }
 if (VAR_25 == 0)
  goto out;

 VAR_25 = FUNC_0(VAR_25);
 while (VAR_25 != 0) {
  VAR_26 = FUNC_2(VAR_25, "device_type", VAR_23, sizeof(VAR_23));
  if (VAR_26 > 0 && FUNC_14(VAR_23, "cpu") == 0)
   break;
  VAR_25 = FUNC_4(VAR_25);
 }
 if (VAR_25 == 0)
  goto out;

 VAR_26 = FUNC_1(VAR_25, "ibm,slb-size", &VAR_24, sizeof(VAR_24));
 if (VAR_26 > 0)
  VAR_14 = VAR_24;







 VAR_27 = FUNC_3(VAR_25, "ibm,segment-page-sizes");
 if (VAR_27 > 0) {




  pcell_t VAR_30[VAR_27/sizeof(cell_t)];
  VAR_26 = FUNC_1(VAR_25, "ibm,segment-page-sizes", VAR_30,
      sizeof(VAR_30));
  VAR_27 /= 4;
  VAR_28 = 0;
  while (VAR_27 > 0) {
   VAR_19 = VAR_30[VAR_28];
   VAR_20 = VAR_30[VAR_28 + 1];
   VAR_18 = VAR_30[VAR_28 + 2];
   VAR_28 += 3;
   VAR_27 -= 3;
   while (VAR_27 > 0 && VAR_18) {
    VAR_21 = VAR_30[VAR_28];
    VAR_22 = VAR_30[VAR_28+1];
    if (VAR_20 == VAR_5 && VAR_22 == 0)
     break;

    VAR_28 += 2;
    VAR_27 -= 2;
    VAR_18--;
   }
   if (VAR_18 && VAR_20 == VAR_5 && VAR_22 == 0)
    break;
  }

  if (VAR_27 == 0)
   FUNC_12("Standard large pages (SLB[L] = 1, PTE[LP] = 0) "
       "not supported by this system.");

  VAR_12 = VAR_19;
  VAR_13 = 1ULL << VAR_21;
 }

out:
 return (0);
}
