
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_buf ;


 scalar_t__ FUNC_0 (int *,char) ;
 int FUNC_1 (int *,size_t) ;

void FUNC_2(git_buf *VAR_0, char VAR_1)
{
 ssize_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2 < 0 ? 0 : (size_t)VAR_2);
}
