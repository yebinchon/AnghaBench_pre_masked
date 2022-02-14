
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mytree {int top; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct mytree* FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
 struct mytree *VAR_5, *VAR_6;
 int VAR_7;

 VAR_0 = FUNC_3("_.subs", "w");
 FUNC_4(VAR_2, ((void*)0));
 FUNC_4(VAR_1, ((void*)0));
 if (VAR_3 != 3)
  FUNC_2(1, "usage: %s file1 file2", VAR_4[0]);

 VAR_5 = FUNC_1(VAR_4[1]);
 if (VAR_5 == ((void*)0))
  FUNC_2(2, "XML parser error on file %s", VAR_4[1]);
 FUNC_5(VAR_5->top);
 VAR_6 = FUNC_1(VAR_4[2]);
 if (VAR_6 == ((void*)0))
  FUNC_2(2, "XML parser error on file %s", VAR_4[2]);
 FUNC_5(VAR_6->top);
 VAR_7 = FUNC_0(VAR_5->top, VAR_6->top, 0);
 return (VAR_7);
}
