
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct pci_dev* pci_mc1; struct pci_dev* pci_mc0; } ;
struct sbridge_pvt {TYPE_1__ knl; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(const struct sbridge_pvt *VAR_7,
  const int VAR_8,
  const int VAR_9,
  u64 *VAR_10,
  u64 *VAR_11,
  int *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 struct pci_dev *VAR_16;
 int VAR_17;

 switch (VAR_9) {
 case 0:
  VAR_16 = VAR_7->knl.pci_mc0;
  break;
 case 1:
  VAR_16 = VAR_7->knl.pci_mc1;
  break;
 default:
  FUNC_2(1);
  return -VAR_0;
 }

 FUNC_3(VAR_16,
   VAR_4[VAR_8], &VAR_13);
 FUNC_3(VAR_16,
   VAR_5[VAR_8], &VAR_14);
 FUNC_3(VAR_16,
   VAR_3[VAR_8], &VAR_15);


 if (!FUNC_1(VAR_13, 0, 0))
  return -VAR_1;

 VAR_17 = FUNC_1(VAR_13, 3, 5);

 if (VAR_17 < FUNC_0(VAR_6)) {
  *VAR_12 = VAR_6[VAR_17];
 } else {
  *VAR_12 = 0;
  FUNC_4(VAR_2,
    "Unexpected value %d in mc_tad_limit_lo wayness field\n",
    VAR_17);
  return -VAR_1;
 }





 *VAR_10 = ((u64) FUNC_1(VAR_14, 6, 31) << 6) |
    ((u64) FUNC_1(VAR_15, 0, 15) << 32);
 *VAR_11 = ((u64) FUNC_1(VAR_13, 6, 31) << 6) | 63 |
    ((u64) FUNC_1(VAR_15, 16, 31) << 32);

 return 0;
}
