
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct rbd_device* private_data; } ;



 int VAR_0 ;
 int FUNC_0 (struct rbd_device*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_1, fmode_t VAR_2,
   unsigned int VAR_3, unsigned long VAR_4)
{
 struct rbd_device *VAR_5 = VAR_1->bd_disk->private_data;
 int VAR_6;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_0(VAR_5, VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
