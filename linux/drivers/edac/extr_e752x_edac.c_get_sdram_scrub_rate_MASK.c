
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scrubrate {scalar_t__ bandwidth; int scrubval; } ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {TYPE_1__* dev_info; struct pci_dev* dev_d0f0; } ;
struct TYPE_2__ {scalar_t__ ctl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 struct scrubrate* VAR_4 ;
 struct scrubrate* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_6)
{
 const struct scrubrate *VAR_7;
 struct e752x_pvt *VAR_8 = (struct e752x_pvt *) VAR_6->pvt_info;
 struct pci_dev *VAR_9 = VAR_8->dev_d0f0;
 u16 VAR_10;
 int VAR_11;

 if (VAR_8->dev_info->ctl_dev == VAR_2)
  VAR_7 = VAR_5;
 else
  VAR_7 = VAR_4;


 FUNC_1(VAR_9, VAR_0, &VAR_10);
 VAR_10 = VAR_10 & 0x0f;

 for (VAR_11 = 0; VAR_7[VAR_11].bandwidth != VAR_3; VAR_11++)
  if (VAR_7[VAR_11].scrubval == VAR_10)
   break;

 if (VAR_7[VAR_11].bandwidth == VAR_3) {
  FUNC_0(VAR_1,
   "Invalid sdram scrub control value: 0x%x\n", VAR_10);
  return -1;
 }
 return VAR_7[VAR_11].bandwidth;

}
