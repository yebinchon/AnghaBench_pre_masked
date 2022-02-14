
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,char,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct node*) ;
 int FUNC_7 (struct node*,int *) ;
 int FUNC_8 (struct node*) ;
 int FUNC_9 (struct node*) ;
 struct node* FUNC_10 () ;
 int FUNC_11 (struct node*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_12 (struct node*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_3, char **VAR_4)
{
 struct node *VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 bool VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;





 FUNC_1();

 while ((VAR_6 = FUNC_4(VAR_3, VAR_4, "D:Lfco:uv")) != -1) {
  switch (VAR_6) {
  case 'D':
   FUNC_2(VAR_1);
   break;
  case 'L':
   VAR_8++;
   break;
  case 'c':
   VAR_12 = 1;
   break;
  case 'f':
   VAR_11 = 1;
   break;
  case 'o':
   VAR_9 = FUNC_0(VAR_9, ',', VAR_1);
   break;
  case 'u':
   VAR_10 = 1;
   break;
  case 'v':
   VAR_7++;
   break;
  case '?':
  default:
   FUNC_14();
  }
 }
 VAR_3 -= VAR_2;
 if (VAR_3 != 0)
  FUNC_14();

 if (VAR_11 && !VAR_10)
  FUNC_14();

 FUNC_5(VAR_7);

 if (VAR_12) {
  FUNC_3();
  return (0);
 }

 if (VAR_10) {
  FUNC_13(VAR_11);
  return (0);
 }

 VAR_5 = FUNC_10();
 FUNC_12(VAR_5, VAR_0);

 if (VAR_8) {
  if (VAR_8 > 1) {
   FUNC_9(VAR_5);
   FUNC_7(VAR_5, ((void*)0));
  }
  FUNC_8(VAR_5);
  FUNC_11(VAR_5, VAR_9);
  return (0);
 }

 FUNC_6(VAR_5);

 return (0);
}
