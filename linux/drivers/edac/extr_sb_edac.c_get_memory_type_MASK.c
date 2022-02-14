
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rankcfgr; } ;
struct sbridge_pvt {TYPE_1__ info; scalar_t__ pci_ddrio; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int *) ;

__attribute__((used)) static enum mem_type FUNC_2(struct sbridge_pvt *VAR_3)
{
 u32 VAR_4;
 enum mem_type VAR_5;

 if (VAR_3->pci_ddrio) {
  FUNC_1(VAR_3->pci_ddrio, VAR_3->info.rankcfgr,
          &VAR_4);
  if (FUNC_0(VAR_4, 11, 11))

   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_0;
 } else
  VAR_5 = VAR_2;

 return VAR_5;
}
