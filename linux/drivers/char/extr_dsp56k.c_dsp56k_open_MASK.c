
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int rx_wsize; int tx_wsize; int maxio; int timeout; int in_use; } ;
struct TYPE_3__ {int icr; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_11, struct file *VAR_12)
{
 int VAR_13 = FUNC_0(VAR_11) & 0x0f;
 int VAR_14 = 0;

 FUNC_1(&VAR_10);
 switch(VAR_13)
 {
 case 128:

  if (FUNC_3(0, &VAR_8.in_use)) {
   VAR_14 = -VAR_4;
   goto out;
  }

  VAR_8.timeout = VAR_7;
  VAR_8.maxio = VAR_6;
  VAR_8.rx_wsize = VAR_8.tx_wsize = 4;

  VAR_3;
  VAR_2;


  VAR_9.icr &= ~VAR_0;
  VAR_9.icr &= ~VAR_1;

  break;

 default:
  VAR_14 = -VAR_5;
 }
out:
 FUNC_2(&VAR_10);
 return VAR_14;
}
