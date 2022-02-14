
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; int st_mode; int st_gid; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stat* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_3, mrb_value VAR_4)
{
  struct stat *VAR_5;





  VAR_5 = FUNC_0(VAR_3, VAR_4);
  return FUNC_4();
}
