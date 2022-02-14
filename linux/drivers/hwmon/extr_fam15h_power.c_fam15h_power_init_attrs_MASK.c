
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_6__ {struct attribute** attrs; } ;
struct fam15h_power_data {TYPE_1__ group; } ;
struct cpuinfo_x86 {int x86; int x86_model; } ;
struct attribute {int dummy; } ;
struct TYPE_10__ {struct attribute attr; } ;
struct TYPE_9__ {struct attribute attr; } ;
struct TYPE_8__ {struct attribute attr; } ;
struct TYPE_7__ {struct attribute attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpuinfo_x86 VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 struct attribute** FUNC_1 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_9,
       struct fam15h_power_data *VAR_10)
{
 int VAR_11 = VAR_1;
 struct attribute **VAR_12;
 struct cpuinfo_x86 *VAR_13 = &VAR_4;

 if (VAR_13->x86 == 0x15 &&
     (VAR_13->x86_model <= 0xf ||
      (VAR_13->x86_model >= 0x60 && VAR_13->x86_model <= 0x7f)))
  VAR_11 += 1;


 if (FUNC_0(VAR_3))
  VAR_11 += 2;

 VAR_12 = FUNC_1(&VAR_9->dev, VAR_11,
       sizeof(*VAR_12),
       VAR_2);

 if (!VAR_12)
  return -VAR_0;

 VAR_11 = 0;
 VAR_12[VAR_11++] = &VAR_7.attr;
 if (VAR_13->x86 == 0x15 &&
     (VAR_13->x86_model <= 0xf ||
      (VAR_13->x86_model >= 0x60 && VAR_13->x86_model <= 0x7f)))
  VAR_12[VAR_11++] = &VAR_8.attr;

 if (FUNC_0(VAR_3)) {
  VAR_12[VAR_11++] = &VAR_5.attr;
  VAR_12[VAR_11++] = &VAR_6.attr;
 }

 VAR_10->group.attrs = VAR_12;

 return 0;
}
