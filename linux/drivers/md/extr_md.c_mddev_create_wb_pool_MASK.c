
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_write_behind; } ;
struct mddev {int * wb_info_pool; TYPE_1__ bitmap_info; } ;
struct md_rdev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct md_rdev*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct mddev *VAR_2, struct md_rdev *VAR_3,
     bool VAR_4)
{
 if (VAR_2->bitmap_info.max_write_behind == 0)
  return;

 if (!FUNC_7(VAR_1, &VAR_3->flags) || !FUNC_6(VAR_3))
  return;

 if (VAR_2->wb_info_pool == ((void*)0)) {
  unsigned int VAR_5;

  if (!VAR_4)
   FUNC_1(VAR_2);
  VAR_5 = FUNC_3();
  VAR_2->wb_info_pool = FUNC_4(VAR_0,
       sizeof(struct wb_info));
  FUNC_2(VAR_5);
  if (!VAR_2->wb_info_pool)
   FUNC_5("can't alloc memory pool for writemostly\n");
  if (!VAR_4)
   FUNC_0(VAR_2);
 }
}
