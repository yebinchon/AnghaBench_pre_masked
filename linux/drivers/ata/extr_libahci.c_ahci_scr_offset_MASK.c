
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct ahci_host_priv {int cap; } ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
__attribute__((used)) static unsigned FUNC_1(struct ata_port *VAR_1, unsigned int VAR_2)
{
 static const int VAR_3[] = {
  [128] = 133,
  [131] = 136,
  [130] = 135,
  [132] = 137,
  [129] = 134,
 };
 struct ahci_host_priv *VAR_4 = VAR_1->host->private_data;

 if (VAR_2 < FUNC_0(VAR_3) &&
     (VAR_2 != 129 || (VAR_4->cap & VAR_0)))
  return VAR_3[VAR_2];
 return 0;
}
