
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oidhex ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_1 ;

int FUNC_3(git_oid *VAR_2, git_buf *VAR_3)
{
 char VAR_4[VAR_0 + 1];

 FUNC_2(VAR_4, 0x0, sizeof(VAR_4));
 FUNC_1(VAR_4, VAR_2);
 return FUNC_0(VAR_3, "%s%s\n", VAR_1, VAR_4);
}
