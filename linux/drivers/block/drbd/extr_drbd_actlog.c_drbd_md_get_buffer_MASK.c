
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* current_use; int page; scalar_t__ start_jif; scalar_t__ submit_jif; int in_use; } ;
struct TYPE_3__ {scalar_t__ disk; } ;
struct drbd_device {TYPE_2__ md_io; TYPE_1__ state; int misc_wait; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void *FUNC_3(struct drbd_device *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2->misc_wait,
     (VAR_4 = FUNC_0(&VAR_2->md_io.in_use, 0, 1)) == 0 ||
     VAR_2->state.disk <= VAR_0);

 if (VAR_4)
  return ((void*)0);

 VAR_2->md_io.current_use = VAR_3;
 VAR_2->md_io.start_jif = VAR_1;
 VAR_2->md_io.submit_jif = VAR_2->md_io.start_jif - 1;
 return FUNC_1(VAR_2->md_io.page);
}
