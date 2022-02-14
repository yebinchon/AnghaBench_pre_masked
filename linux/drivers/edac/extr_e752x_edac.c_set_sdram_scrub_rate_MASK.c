
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scrubrate {scalar_t__ bandwidth; int scrubval; } ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {TYPE_1__* dev_info; struct pci_dev* dev_d0f0; } ;
struct TYPE_2__ {scalar_t__ ctl_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int ) ;
 struct scrubrate* VAR_3 ;
 struct scrubrate* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct mem_ctl_info *VAR_5, u32 VAR_6)
{
 const struct scrubrate *VAR_7;
 struct e752x_pvt *VAR_8 = (struct e752x_pvt *) VAR_5->pvt_info;
 struct pci_dev *VAR_9 = VAR_8->dev_d0f0;
 int VAR_10;

 if (VAR_8->dev_info->ctl_dev == VAR_1)
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_3;





 for (VAR_10 = 0; VAR_7[VAR_10].bandwidth != VAR_2; VAR_10++)
  if (VAR_7[VAR_10].bandwidth >= VAR_6)
   break;

 if (VAR_7[VAR_10].bandwidth == VAR_2)
  return -1;

 FUNC_0(VAR_9, VAR_0, VAR_7[VAR_10].scrubval);

 return VAR_7[VAR_10].bandwidth;
}
