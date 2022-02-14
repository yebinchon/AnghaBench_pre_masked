
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int block_dev_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 char VAR_5[VAR_0];
 block_dev_desc_t *VAR_6 = ((void*)0);
 int VAR_7 = VAR_1;
 int VAR_8 = VAR_4;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_3, VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_5("Failed to find %s%d\n",
   VAR_3, VAR_7);
  FUNC_6(((void*)0));
  return;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_5("Failed to register %s%d:%d\n",
   VAR_3, VAR_7, VAR_8);
  FUNC_6(((void*)0));
  return;
 }

 VAR_9 = FUNC_1(VAR_2, (uchar *)&VAR_5, 0, VAR_0);
 FUNC_3();

 if (VAR_9 == -1) {
  FUNC_5("\n** Unable to read \"%s\" from %s%d:%d **\n",
   VAR_2, VAR_3, VAR_7, VAR_8);
  FUNC_6(((void*)0));
  return;
 }

 FUNC_0(VAR_5, 1);
}
