
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwnstats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ FUNC_4 (struct iwnstats*) ;
 int FUNC_5 (struct iwnstats*) ;
 struct iwnstats* FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

int
FUNC_10(int VAR_3, char *VAR_4[])
{
 struct iwnstats *VAR_5;
 int VAR_6;
 char *VAR_7;
 bool VAR_8;
 char *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_7 = FUNC_7(VAR_0);


 while ((VAR_6 = FUNC_3(VAR_3, VAR_4,
     "hi:")) != -1) {
  switch (VAR_6) {
  case 'i':
   if (VAR_7)
    FUNC_2(VAR_7);
   VAR_7 = FUNC_7(VAR_1);
   break;
  default:
  case '?':
  case 'h':
   FUNC_8();
   FUNC_0(1);
  }
 }

 VAR_5 = FUNC_6(VAR_7);

 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_2, "%s: couldn't allocate new stats structure\n",
      VAR_4[0]);
  FUNC_0(127);
 }


 VAR_8 = 1;
 while (1) {
  if (FUNC_4(VAR_5) != 0) {
   FUNC_1(VAR_2, "%s: fetch failed\n", VAR_4[0]);
   if (VAR_8)
    return 1;
   goto next;
  }

  FUNC_5(VAR_5);

 next:
  FUNC_9(100 * 1000);
  VAR_8 = 0;
 }

 FUNC_0(0);
}
