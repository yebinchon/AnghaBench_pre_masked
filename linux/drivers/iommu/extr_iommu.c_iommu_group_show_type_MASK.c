
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_group {TYPE_1__* default_domain; } ;
typedef int ssize_t ;
struct TYPE_2__ {int type; } ;






 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iommu_group *VAR_0,
         char *VAR_1)
{
 char *VAR_2 = "unknown\n";

 if (VAR_0->default_domain) {
  switch (VAR_0->default_domain->type) {
  case 131:
   VAR_2 = "blocked\n";
   break;
  case 129:
   VAR_2 = "identity\n";
   break;
  case 128:
   VAR_2 = "unmanaged\n";
   break;
  case 130:
   VAR_2 = "DMA\n";
   break;
  }
 }
 FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_2);
}
