
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long*,long*,long*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

void FUNC_4(void)
{
 long VAR_4[8], VAR_5[8], VAR_6[8];
 int VAR_7, VAR_8, VAR_9;

 FUNC_3("Checking for the multiply/shift bug... ");
 FUNC_0(&VAR_4[0], &VAR_5[0], &VAR_6[0], 32, 0);
 FUNC_0(&VAR_4[1], &VAR_5[1], &VAR_6[1], 32, 1);
 FUNC_0(&VAR_4[2], &VAR_5[2], &VAR_6[2], 32, 2);
 FUNC_0(&VAR_4[3], &VAR_5[3], &VAR_6[3], 32, 3);
 FUNC_0(&VAR_4[4], &VAR_5[4], &VAR_6[4], 32, 4);
 FUNC_0(&VAR_4[5], &VAR_5[5], &VAR_6[5], 32, 5);
 FUNC_0(&VAR_4[6], &VAR_5[6], &VAR_6[6], 32, 6);
 FUNC_0(&VAR_4[7], &VAR_5[7], &VAR_6[7], 32, 7);

 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
  if (VAR_4[VAR_9] != VAR_6[VAR_9])
   VAR_7 = 1;

 if (VAR_7 == 0) {
  FUNC_2("no.\n");
  return;
 }

 FUNC_2("yes, workaround... ");

 VAR_8 = 1;
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
  if (VAR_5[VAR_9] != VAR_6[VAR_9])
   VAR_8 = 0;

 if (VAR_8 == 1) {
  FUNC_2("yes.\n");
  return;
 }

 FUNC_2("no.\n");
 FUNC_1(VAR_1, !VAR_0 ? VAR_3 : VAR_2);
}
