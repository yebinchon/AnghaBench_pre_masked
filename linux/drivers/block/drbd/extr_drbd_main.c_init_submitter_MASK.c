
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writes; int worker; int wq; } ;
struct drbd_device {TYPE_1__ submit; int minor; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct drbd_device *VAR_3)
{


 VAR_3->submit.wq =
  FUNC_2("drbd%u_submit", VAR_1, VAR_3->minor);
 if (!VAR_3->submit.wq)
  return -VAR_0;

 FUNC_1(&VAR_3->submit.worker, VAR_2);
 FUNC_0(&VAR_3->submit.writes);
 return 0;
}
