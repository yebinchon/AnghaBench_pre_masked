
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oidstr ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (int const*,unsigned int) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(const git_commit *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 char VAR_4[VAR_0 + 1];

 FUNC_6(VAR_4, sizeof(VAR_4), FUNC_5(VAR_1));
 FUNC_8("tree %s\n", VAR_4);

 VAR_3 = (unsigned int)FUNC_4(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  FUNC_6(VAR_4, sizeof(VAR_4), FUNC_3(VAR_1, VAR_2));
  FUNC_8("parent %s\n", VAR_4);
 }

 FUNC_7("author", FUNC_0(VAR_1));
 FUNC_7("committer", FUNC_1(VAR_1));

 if (FUNC_2(VAR_1))
  FUNC_8("\n%s\n", FUNC_2(VAR_1));
}
