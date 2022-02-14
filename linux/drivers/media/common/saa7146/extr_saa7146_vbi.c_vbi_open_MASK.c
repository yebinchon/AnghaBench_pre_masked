
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int function; } ;
struct saa7146_vv {struct file* vbi_read_timeout_file; TYPE_3__ vbi_read_timeout; } ;
struct saa7146_fh {int vbi_q; TYPE_1__* dev; } ;
struct saa7146_dev {TYPE_4__* ext_vv_data; int v4l2_lock; int slock; TYPE_2__* pci; } ;
struct saa7146_buf {int dummy; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct saa7146_vv* vv_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct saa7146_dev*,int ) ;
 int FUNC_3 (struct saa7146_fh*,int ) ;
 int FUNC_4 (struct saa7146_dev*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct saa7146_dev*) ;
 int FUNC_6 (int *,int *,int *,int *,int ,int ,int,struct file*,int *) ;

__attribute__((used)) static int FUNC_7(struct saa7146_dev *VAR_16, struct file *VAR_17)
{
 struct saa7146_fh *VAR_18 = VAR_17->private_data;
 struct saa7146_vv *VAR_19 = VAR_18->dev->vv_data;

 u32 VAR_20 = FUNC_2(VAR_16, VAR_9);
 int VAR_21 = 0;

 FUNC_1("dev:%p, fh:%p\n", VAR_16, VAR_18);

 VAR_21 = FUNC_3(VAR_18, VAR_10);
 if (0 == VAR_21) {
  FUNC_0("cannot get vbi RESOURCE_DMA3_BRS resource\n");
  return -VAR_1;
 }


 VAR_20 &= ~0x1f0000;
 VAR_20 |= 0x1d0000;
 FUNC_4(VAR_16, VAR_9, VAR_20);
 FUNC_4(VAR_16, VAR_8, (VAR_2|VAR_4));

 FUNC_6(&VAR_18->vbi_q, &VAR_14,
       &VAR_16->pci->dev, &VAR_16->slock,
       VAR_12,
       VAR_13,
       sizeof(struct saa7146_buf),
       VAR_17, &VAR_16->v4l2_lock);

 VAR_19->vbi_read_timeout.function = VAR_15;
 VAR_19->vbi_read_timeout_file = VAR_17;


 if ( 0 != (VAR_11 & VAR_16->ext_vv_data->flags)) {
  FUNC_4(VAR_16, VAR_0, VAR_7|VAR_6 | (7 << 19));
 } else {
  FUNC_4(VAR_16, VAR_0, 0x00000001);

  if (0 != (VAR_21 = FUNC_5(VAR_16))) {
   FUNC_1("vbi workaround failed!\n");

  }
 }


 FUNC_4(VAR_16, VAR_8, (VAR_3|VAR_5));
 return 0;
}
