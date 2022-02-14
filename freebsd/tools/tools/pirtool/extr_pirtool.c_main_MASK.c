
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pir_table_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,char**,char*) ;
 void* FUNC_8 (int *,int ,int ,int ,int,int ) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_12, char *VAR_13[])
{
 int VAR_14, VAR_15;
 int VAR_16 = -1;
 int VAR_17 = -1;
 pir_table_t *VAR_18 = ((void*)0);
 void *VAR_19 = VAR_2;
 char *VAR_20;

 VAR_10 = FUNC_1(VAR_13[0]);
 while ((VAR_14 = FUNC_7(VAR_12, VAR_13, "h")) != -1)
  switch (VAR_14) {
  case 'h':
  default:
   FUNC_12();
 }
 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;

 if (VAR_12 > 0)
  FUNC_12();

 FUNC_0();



 if ((VAR_17 = FUNC_10(VAR_8, VAR_4)) == -1) {
  FUNC_11("open");
  goto cleanup;
 }
 VAR_19 = FUNC_8(((void*)0), VAR_6, VAR_7, VAR_3, VAR_17,
     VAR_5);
 if (VAR_19 == VAR_2) {
  FUNC_11("mmap");
  goto cleanup;
 }



 if ((VAR_18 = FUNC_5(VAR_19)) == ((void*)0)) {
  FUNC_6(VAR_11, "PIR table signature not found.\r\n");
 } else {
  FUNC_3(VAR_18, VAR_19);
  VAR_16 = 0;
 }

cleanup:
 if (VAR_19 != VAR_2)
  FUNC_9(VAR_19, VAR_6);
 if (VAR_17 != -1)
  FUNC_2(VAR_17);

 FUNC_4 ((VAR_16 == 0) ? VAR_1 : VAR_0);
}
