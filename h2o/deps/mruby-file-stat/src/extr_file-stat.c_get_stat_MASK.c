
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static struct stat *
FUNC_2(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct stat *VAR_4;

  VAR_4 = (struct stat *)FUNC_0(VAR_2, VAR_3, &VAR_1);
  if (!VAR_4) FUNC_1(VAR_2, VAR_0, "uninitialized File::Stat");
  return VAR_4;
}
