
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct virtio_iommu_fault {int reason; int address; int endpoint; int flags; } ;
struct viommu_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct viommu_dev *VAR_4,
    struct virtio_iommu_fault *VAR_5)
{
 char *VAR_6;

 u8 VAR_7 = VAR_5->reason;
 u32 VAR_8 = FUNC_1(VAR_5->flags);
 u32 VAR_9 = FUNC_1(VAR_5->endpoint);
 u64 VAR_10 = FUNC_2(VAR_5->address);

 switch (VAR_7) {
 case 130:
  VAR_6 = "domain";
  break;
 case 129:
  VAR_6 = "page";
  break;
 case 128:
 default:
  VAR_6 = "unknown";
  break;
 }


 if (VAR_8 & VAR_0)
  FUNC_0(VAR_4->dev, "%s fault from EP %u at %#llx [%s%s%s]\n",
        VAR_6, VAR_9, VAR_10,
        VAR_8 & VAR_2 ? "R" : "",
        VAR_8 & VAR_3 ? "W" : "",
        VAR_8 & VAR_1 ? "X" : "");
 else
  FUNC_0(VAR_4->dev, "%s fault from EP %u\n",
        VAR_6, VAR_9);
 return 0;
}
