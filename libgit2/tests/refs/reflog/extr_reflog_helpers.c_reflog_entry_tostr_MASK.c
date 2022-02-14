
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog_entry ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*,char*,char*,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static int FUNC_6(git_buf *VAR_1, const git_reflog_entry *VAR_2)
{
 char VAR_3[VAR_0], VAR_4[VAR_0];

 FUNC_0(VAR_1 && VAR_2);

 FUNC_2((char *)&VAR_3, VAR_0, FUNC_4(VAR_2));
 FUNC_2((char *)&VAR_4, VAR_0, FUNC_3(VAR_2));

 return FUNC_1(VAR_1, "%s %s %s %s", VAR_3, VAR_4, "somesig", FUNC_5(VAR_2));
}
