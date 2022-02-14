
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sbridge_pvt {int pci_ta; int pci_ddrio; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static enum mem_type FUNC_2(struct sbridge_pvt *VAR_7)
{
 u32 VAR_8;
 bool VAR_9 = 0;
 enum mem_type VAR_10 = VAR_6;

 if (!VAR_7->pci_ddrio)
  goto out;

 FUNC_1(VAR_7->pci_ddrio,
         VAR_0, &VAR_8);

 if (FUNC_0(VAR_8, 16, 16))
  VAR_9 = 1;

 FUNC_1(VAR_7->pci_ta, VAR_1, &VAR_8);
 if (FUNC_0(VAR_8, 14, 14)) {
  if (VAR_9)
   VAR_10 = VAR_5;
  else
   VAR_10 = VAR_3;
 } else {
  if (VAR_9)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_2;
 }

out:
 return VAR_10;
}
