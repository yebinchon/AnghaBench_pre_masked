
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* get_ha ) (int) ;} ;
struct sbridge_pvt {scalar_t__ mirror_mode; int is_cur_addr_mirrored; scalar_t__ is_lockstep; struct pci_dev* pci_ha; TYPE_1__ info; } ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct mce {int bank; int socketid; scalar_t__ addr; int status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 struct mem_ctl_info* FUNC_2 (int,int) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_5,
       const struct mce *VAR_6, u8 *VAR_7,
       u8 *VAR_8, long *VAR_9,
       char *VAR_10)
{
 u32 VAR_11, VAR_12 = FUNC_0(VAR_6->status, 0, 3);
 struct mem_ctl_info *VAR_13;
 struct sbridge_pvt *VAR_14;
 struct pci_dev *VAR_15;
 bool VAR_16;

 if (VAR_12 >= VAR_3) {
  FUNC_4(VAR_10, "Invalid channel 0x%x", VAR_12);
  return -VAR_1;
 }

 VAR_14 = VAR_5->pvt_info;
 if (!VAR_14->info.get_ha) {
  FUNC_4(VAR_10, "No get_ha()");
  return -VAR_1;
 }
 *VAR_8 = VAR_14->info.get_ha(VAR_6->bank);
 if (*VAR_8 != 0 && *VAR_8 != 1) {
  FUNC_4(VAR_10, "Impossible bank %d", VAR_6->bank);
  return -VAR_1;
 }

 *VAR_7 = VAR_6->socketid;
 VAR_13 = FUNC_2(*VAR_7, *VAR_8);
 if (!VAR_13) {
  FUNC_5(VAR_10, "mci socket got corrupted!");
  return -VAR_1;
 }

 VAR_14 = VAR_13->pvt_info;
 VAR_15 = VAR_14->pci_ha;
 FUNC_3(VAR_15, VAR_4[0], &VAR_11);
 VAR_16 = VAR_6->addr <= FUNC_1(VAR_11);

 *VAR_9 = 1 << VAR_12;
 if (VAR_14->mirror_mode == VAR_2 ||
     (VAR_14->mirror_mode == VAR_0 && VAR_16)) {
  *VAR_9 |= 1 << ((VAR_12 + 2) % 4);
  VAR_14->is_cur_addr_mirrored = 1;
 } else {
  VAR_14->is_cur_addr_mirrored = 0;
 }

 if (VAR_14->is_lockstep)
  *VAR_9 |= 1 << ((VAR_12 + 1) % 4);

 return 0;
}
