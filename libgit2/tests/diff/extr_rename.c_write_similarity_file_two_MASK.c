
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char const*,int,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_3, size_t VAR_4)
{
 git_buf VAR_5 = VAR_0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_2(&VAR_5, "%02d - bbbbb\r\n", (int)(VAR_6+1));

 for (VAR_6 = VAR_4; VAR_6 < 50; VAR_6++)
  FUNC_2(&VAR_5, "%02d - aaaaa%s", (int)(VAR_6+1), (VAR_6 == 49 ? "" : "\r\n"));

 FUNC_0(
  FUNC_3(&VAR_5, VAR_3, VAR_2|VAR_1, 0777));

 FUNC_1(&VAR_5);
}
