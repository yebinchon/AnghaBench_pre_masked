
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oidstr ;
typedef int git_tree_entry ;
typedef int git_tree ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 char* FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(const git_tree *VAR_1)
{
 size_t VAR_2, VAR_3 = (int)FUNC_7(VAR_1);
 char VAR_4[VAR_0 + 1];
 const git_tree_entry *VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  VAR_5 = FUNC_2(VAR_1, VAR_2);

  FUNC_1(VAR_4, sizeof(VAR_4), FUNC_4(VAR_5));

  FUNC_8("%06o %s %s\t%s\n",
   FUNC_3(VAR_5),
   FUNC_0(FUNC_6(VAR_5)),
   VAR_4, FUNC_5(VAR_5));
 }
}
