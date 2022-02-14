
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_size_t ;
typedef void* vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct mem_region {void* mr_size; void* mr_start; } ;
typedef int phandle_t ;
typedef int lmb_size ;
typedef int cell_t ;
typedef int arr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(struct mem_region *VAR_0, int *VAR_1,
      struct mem_region *VAR_2, int *VAR_3)
{
 phandle_t VAR_4;
 vm_offset_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13[2];
 uint32_t *VAR_14;

 VAR_10 = *VAR_1;
 VAR_9 = *VAR_3;

 VAR_4 = FUNC_0("/ibm,dynamic-reconfiguration-memory");
 if (VAR_4 == -1)

  return (0);

 VAR_11 = FUNC_1(VAR_4, "ibm,lmb-size", VAR_13,
     sizeof(VAR_13));
 if (VAR_11 == -1)
  return (0);
 FUNC_3("Logical Memory Block size: %d MB\n", VAR_13[1] >> 20);
 VAR_8 = FUNC_2(VAR_4, "ibm,dynamic-memory");
 if (VAR_8 > 0) {




  cell_t VAR_15[VAR_8/sizeof(cell_t)];

  VAR_11 = FUNC_1(VAR_4, "ibm,dynamic-memory", VAR_15,
      sizeof(VAR_15));
  if (VAR_11 == -1)
   return (0);


  VAR_7 = VAR_15[0];


  VAR_14 = &VAR_15[1];

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   VAR_5 = ((uint64_t)VAR_14[0] << 32) + VAR_14[1];
   VAR_14 += 4;
   VAR_12 = VAR_14[1];

   if ((VAR_12 & 0x8) && !(VAR_12 & 0x80)) {
    VAR_0[VAR_10].mr_start = VAR_5;
    VAR_0[VAR_10].mr_size = (vm_size_t)VAR_13[1];
    VAR_2[VAR_9].mr_start = VAR_5;
    VAR_2[VAR_9].mr_size = (vm_size_t)VAR_13[1];
    VAR_10++;
    VAR_9++;
   }
   VAR_14 += 2;
  }
 }

 *VAR_1 = VAR_10;
 *VAR_3 = VAR_9;

 return (1);
}
