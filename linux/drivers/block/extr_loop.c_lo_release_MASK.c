
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_flags; scalar_t__ lo_state; int lo_queue; int lo_refcnt; } ;
struct gendisk {struct loop_device* private_data; } ;
typedef int fmode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct loop_device*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gendisk *VAR_4, fmode_t VAR_5)
{
 struct loop_device *VAR_6;

 FUNC_4(&VAR_3);
 VAR_6 = VAR_4->private_data;
 if (FUNC_1(&VAR_6->lo_refcnt))
  goto out_unlock;

 if (VAR_6->lo_flags & VAR_0) {
  if (VAR_6->lo_state != VAR_1)
   goto out_unlock;
  VAR_6->lo_state = VAR_2;
  FUNC_5(&VAR_3);




  FUNC_0(VAR_6, 1);
  return;
 } else if (VAR_6->lo_state == VAR_1) {




  FUNC_2(VAR_6->lo_queue);
  FUNC_3(VAR_6->lo_queue);
 }

out_unlock:
 FUNC_5(&VAR_3);
}
