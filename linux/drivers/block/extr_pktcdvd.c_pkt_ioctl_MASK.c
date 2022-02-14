
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int refcnt; int bdev; } ;
struct block_device {int bd_dev; TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pktcdvd_device* private_data; } ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ,int ,unsigned int,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,struct pktcdvd_device*,char*,unsigned int,...) ;
 int FUNC_6 (struct pktcdvd_device*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct block_device *VAR_2, fmode_t VAR_3, unsigned int VAR_4, unsigned long VAR_5)
{
 struct pktcdvd_device *VAR_6 = VAR_2->bd_disk->private_data;
 int VAR_7;

 FUNC_5(2, VAR_6, "cmd %x, dev %d:%d\n",
  VAR_4, FUNC_0(VAR_2->bd_dev), FUNC_1(VAR_2->bd_dev));

 FUNC_3(&VAR_1);
 switch (VAR_4) {
 case 133:




  if (VAR_6->refcnt == 1)
   FUNC_6(VAR_6, 0);




 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_7 = FUNC_2(VAR_6->bdev, VAR_3, VAR_4, VAR_5);
  break;

 default:
  FUNC_5(2, VAR_6, "Unknown ioctl (%x)\n", VAR_4);
  VAR_7 = -VAR_0;
 }
 FUNC_4(&VAR_1);

 return VAR_7;
}
