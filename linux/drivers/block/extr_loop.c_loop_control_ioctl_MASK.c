
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {int lo_number; TYPE_1__* lo_disk; int lo_refcnt; int lo_state; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct loop_device**,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct loop_device**,int) ;
 int FUNC_4 (struct loop_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_6, unsigned int VAR_7,
          unsigned long VAR_8)
{
 struct loop_device *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(&VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = -VAR_2;
 switch (VAR_7) {
 case 130:
  VAR_10 = FUNC_3(&VAR_9, VAR_8);
  if (VAR_10 >= 0) {
   VAR_10 = -VAR_1;
   break;
  }
  VAR_10 = FUNC_2(&VAR_9, VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_3(&VAR_9, VAR_8);
  if (VAR_10 < 0)
   break;
  if (VAR_9->lo_state != VAR_3) {
   VAR_10 = -VAR_0;
   break;
  }
  if (FUNC_0(&VAR_9->lo_refcnt) > 0) {
   VAR_10 = -VAR_0;
   break;
  }
  VAR_9->lo_disk->private_data = ((void*)0);
  FUNC_1(&VAR_5, VAR_9->lo_number);
  FUNC_4(VAR_9);
  break;
 case 129:
  VAR_10 = FUNC_3(&VAR_9, -1);
  if (VAR_10 >= 0)
   break;
  VAR_10 = FUNC_2(&VAR_9, -1);
 }
 FUNC_6(&VAR_4);

 return VAR_10;
}
