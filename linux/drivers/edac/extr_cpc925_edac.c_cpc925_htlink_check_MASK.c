
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edac_device_ctl_info {int ctl_name; struct cpc925_dev_info* pvt_info; } ;
struct cpc925_dev_info {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct edac_device_ctl_info*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct edac_device_ctl_info *VAR_12)
{
 struct cpc925_dev_info *VAR_13 = VAR_12->pvt_info;
 u32 VAR_14 = FUNC_0(VAR_13->vbase + VAR_8);
 u32 VAR_15 = FUNC_0(VAR_13->vbase + VAR_10);
 u32 VAR_16 = FUNC_0(VAR_13->vbase + VAR_9);
 u32 VAR_17 = FUNC_0(VAR_13->vbase + VAR_11);

 if (!((VAR_14 & VAR_0) ||
       (VAR_15 & VAR_5) ||
       (VAR_16 & VAR_4) ||
       (VAR_17 & VAR_6)))
  return;

 FUNC_2(VAR_7, "HT Link Fault\n"
     "HT register dump:\n");
 FUNC_2(VAR_7, "Bridge Ctrl			0x%08x\n",
        VAR_14);
 FUNC_2(VAR_7, "Link Config Ctrl		0x%08x\n",
        VAR_15);
 FUNC_2(VAR_7, "Error Enum and Ctrl		0x%08x\n",
        VAR_16);
 FUNC_2(VAR_7, "Link Error			0x%08x\n",
        VAR_17);


 if (VAR_14 & VAR_0)
  FUNC_1(VAR_0,
    VAR_13->vbase + VAR_8);

 if (VAR_15 & VAR_5)
  FUNC_1(VAR_5,
    VAR_13->vbase + VAR_10);


 if (VAR_16 & VAR_2)
  FUNC_1(VAR_1,
    VAR_13->vbase + VAR_8);

 if (VAR_16 & VAR_3)
  FUNC_1(VAR_3,
    VAR_13->vbase + VAR_9);

 if (VAR_17 & VAR_6)
  FUNC_1(VAR_6,
    VAR_13->vbase + VAR_11);

 FUNC_3(VAR_12, 0, 0, VAR_12->ctl_name);
}
