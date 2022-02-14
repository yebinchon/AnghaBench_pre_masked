
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static struct mrb_io *
FUNC_2(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct mrb_io *VAR_4;

  VAR_4 = (struct mrb_io *)FUNC_0(VAR_2, VAR_3, &VAR_1);
  if (VAR_4 == ((void*)0)) {
    FUNC_1(VAR_2, VAR_0, "uninitialized stream.");
  }
  if (VAR_4->fd < 0) {
    FUNC_1(VAR_2, VAR_0, "closed stream.");
  }
  return VAR_4;
}
