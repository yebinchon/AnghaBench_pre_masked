
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (int ,struct stat*) ;

mode_t FUNC_5(const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 struct stat VAR_5;
 mode_t VAR_6;

 FUNC_3(&VAR_4, "testrepo", VAR_3);
 FUNC_1(FUNC_4(VAR_4.ptr, &VAR_5));

 VAR_6 = FUNC_0(VAR_5.st_mode) ?
  VAR_2 : VAR_1;

 FUNC_2(&VAR_4);

 return VAR_6;
}
