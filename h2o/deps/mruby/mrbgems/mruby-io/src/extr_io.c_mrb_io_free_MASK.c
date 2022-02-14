
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int dummy; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mrb_io*,int ) ;
 int FUNC_1 (int *,struct mrb_io*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_1, void *VAR_2)
{
  struct mrb_io *VAR_3 = (struct mrb_io *)VAR_2;
  if (VAR_3 != ((void*)0)) {
    FUNC_0(VAR_1, VAR_3, VAR_0);
    FUNC_1(VAR_1, VAR_3);
  }
}
