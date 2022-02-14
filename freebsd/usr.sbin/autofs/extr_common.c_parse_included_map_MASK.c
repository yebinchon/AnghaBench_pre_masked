
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (struct node*) ;
 int FUNC_6 (struct node*,int) ;
 int FUNC_7 (struct node*,char const*,int *) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct node *VAR_3, const char *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4[0] != '-');
 FUNC_1(VAR_4[0] != '/');

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5 != 0) {
  FUNC_4(1, "directory services not configured;"
      " %s does not exist", VAR_0);
 }

 VAR_2 = FUNC_3(VAR_0, VAR_4, ((void*)0));
 FUNC_1(VAR_2 != ((void*)0));

 FUNC_7(VAR_3, VAR_4, ((void*)0));

 VAR_5 = FUNC_2(VAR_2);
 VAR_2 = ((void*)0);
 if (VAR_5 != 0)
  FUNC_4(1, "failed to handle remote map \"%s\"", VAR_4);

 FUNC_6(VAR_3, 0);
 FUNC_5(VAR_3);
}
