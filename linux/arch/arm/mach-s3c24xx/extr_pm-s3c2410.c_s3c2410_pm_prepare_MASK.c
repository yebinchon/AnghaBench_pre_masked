
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (char*,scalar_t__) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (unsigned long,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 void* FUNC_12 (int ) ;
 int VAR_6 ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(void)
{


 FUNC_5(FUNC_3(VAR_6), VAR_4);

 FUNC_2("GSTATUS3 0x%08x\n", FUNC_4(VAR_4));
 FUNC_2("GSTATUS4 0x%08x\n", FUNC_4(VAR_5));

 if (FUNC_9()) {
  void *VAR_7 = FUNC_12(VAR_1);
  unsigned long VAR_8;
  unsigned long VAR_9 = 0;



  for (VAR_8 = 0; VAR_8 < 0x40000; VAR_8 += 0x400)
   VAR_9 += FUNC_4(VAR_7+VAR_8);

  FUNC_5(VAR_9, FUNC_12(VAR_2));
 }




 if (FUNC_11() || FUNC_10()) {
  void *VAR_10 = FUNC_12(VAR_1);
  unsigned long VAR_11;
  unsigned long VAR_12 = 0;



  for (VAR_11 = 0; VAR_11 < 0x40000; VAR_11 += 0x4)
   VAR_12 += FUNC_4(VAR_10+VAR_11);

  FUNC_5(VAR_12, FUNC_12(VAR_2));
 }

 if (FUNC_8()) {
  FUNC_7(FUNC_0(2), VAR_0, ((void*)0));
  FUNC_6(FUNC_0(2));
 }

 if (FUNC_10()) {






  FUNC_13(FUNC_1(13), VAR_3);
  FUNC_13(FUNC_1(14), VAR_3);
  FUNC_13(FUNC_1(15), VAR_3);
 }
}
