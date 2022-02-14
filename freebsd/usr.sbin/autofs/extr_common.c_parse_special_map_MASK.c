
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char const*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,char const*) ;
 int FUNC_7 (struct node*) ;
 int FUNC_8 (struct node*,int) ;
 int FUNC_9 (struct node*,char const*) ;
 int FUNC_10 (struct node*,char const*,char const*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_11(struct node *VAR_2, const char *VAR_3, const char *VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(VAR_3[0] == '-');




 VAR_7 = FUNC_0(&VAR_5, "%d/special_%s", VAR_0, VAR_3 + 1);
 if (VAR_7 < 0)
  FUNC_5(1, "asprintf");

 VAR_1 = FUNC_3(VAR_5, VAR_4, ((void*)0));
 FUNC_1(VAR_1 != ((void*)0));

 if (VAR_4 == ((void*)0)) {
  FUNC_9(VAR_2, VAR_3);
 } else {
  FUNC_10(VAR_2, VAR_3, VAR_4);
 }

 VAR_6 = FUNC_2(VAR_1);
 VAR_1 = ((void*)0);
 if (VAR_6 != 0)
  FUNC_6(1, "failed to handle special map \"%s\"", VAR_3);

 FUNC_8(VAR_2, 0);
 FUNC_7(VAR_2);

 FUNC_4(VAR_5);
}
