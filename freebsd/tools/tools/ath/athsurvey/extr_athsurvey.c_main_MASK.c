
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hs ;
typedef int HAL_CHANNEL_SURVEY ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,char const*,int *) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int *,char,int) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 char* VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_6, char *VAR_7[])
{
 FILE *VAR_8 = ((void*)0);
 const char *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_8(VAR_0, VAR_2, 0);
 if (VAR_11 < 0)
  FUNC_0(1, "socket");
 VAR_9 = FUNC_2("ATH");
 if (!VAR_9)
  VAR_9 = VAR_1;

 VAR_5 = VAR_7[0];
 while ((VAR_10 = FUNC_3(VAR_6, VAR_7, "i:")) != -1)
  switch (VAR_10) {
  case 'i':
   VAR_9 = VAR_3;
   break;
  default:
   FUNC_9();

  }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;


 while (1) {
  HAL_CHANNEL_SURVEY VAR_13;
  FUNC_4(&VAR_13, '\0', sizeof(VAR_13));
  if (FUNC_1(VAR_11, VAR_9, &VAR_13) == 0)
   break;

  if (VAR_12 % 23 == 0) {
   FUNC_5("         "
       "min                   "
       "avg                   "
       "max\n");
   FUNC_5("  tx%%  rx%%  bc%%  ec%%  ");
   FUNC_5("  tx%%  rx%%  bc%%  ec%%  ");
   FUNC_5("  tx%%  rx%%  bc%%  ec%%\n");
  }
  FUNC_6(&VAR_13);
  FUNC_7(1);
  VAR_12++;
 }

 return (0);
}
