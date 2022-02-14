
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int tolm; TYPE_2__** dmir; void** amir; TYPE_1__* mir; struct pci_dev* ch1mm; struct pci_dev* ch0mm; } ;
struct TYPE_4__ {int limit; int * rank; } ;
struct TYPE_3__ {int limit; void** way; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 scalar_t__ FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_8 (struct pci_dev*,int ,void**) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_8,
        struct mem_ctl_info *VAR_9)
{
 u16 VAR_10;
 u32 VAR_11;
 struct i5100_priv *VAR_12 = VAR_9->pvt_info;
 struct pci_dev *VAR_13[2] = { VAR_12->ch0mm, VAR_12->ch1mm };
 int VAR_14;

 FUNC_8(VAR_8, VAR_7, &VAR_10);
 VAR_12->tolm = (u64) FUNC_6(VAR_10) * 256 * 1024 * 1024;

 FUNC_8(VAR_8, VAR_5, &VAR_10);
 VAR_12->mir[0].limit = (u64) FUNC_3(VAR_10) << 28;
 VAR_12->mir[0].way[1] = FUNC_5(VAR_10);
 VAR_12->mir[0].way[0] = FUNC_4(VAR_10);

 FUNC_8(VAR_8, VAR_6, &VAR_10);
 VAR_12->mir[1].limit = (u64) FUNC_3(VAR_10) << 28;
 VAR_12->mir[1].way[1] = FUNC_5(VAR_10);
 VAR_12->mir[1].way[0] = FUNC_4(VAR_10);

 FUNC_8(VAR_8, VAR_0, &VAR_10);
 VAR_12->amir[0] = VAR_10;
 FUNC_8(VAR_8, VAR_1, &VAR_10);
 VAR_12->amir[1] = VAR_10;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
   int VAR_16;

   FUNC_7(VAR_13[VAR_14], VAR_3 + VAR_15 * 4, &VAR_11);

   VAR_12->dmir[VAR_14][VAR_15].limit =
    (u64) FUNC_0(VAR_11) << 28;
   for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
    VAR_12->dmir[VAR_14][VAR_15].rank[VAR_16] =
     FUNC_1(VAR_11, VAR_16);
  }
 }

 FUNC_2(VAR_9);
}
