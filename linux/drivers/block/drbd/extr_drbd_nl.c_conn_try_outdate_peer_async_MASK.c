
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct drbd_connection {int kref; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drbd_connection*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct task_struct* FUNC_5 (int ,struct drbd_connection*,char*) ;

void FUNC_6(struct drbd_connection *VAR_3)
{
 struct task_struct *VAR_4;

 FUNC_3(&VAR_3->kref);





 FUNC_2(VAR_1);
 VAR_4 = FUNC_5(VAR_0, VAR_3, "drbd_async_h");
 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_3, "out of mem, failed to invoke fence-peer helper\n");
  FUNC_4(&VAR_3->kref, VAR_2);
 }
}
