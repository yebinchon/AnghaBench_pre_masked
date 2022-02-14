
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sata_oxnas_host_priv {int n_ports; scalar_t__ port_base; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_oxnas_host_priv* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct ata_port *VAR_3)
{
 struct sata_oxnas_host_priv *VAR_4 = VAR_3->host->private_data;

 return (FUNC_0(VAR_4->port_base + VAR_2) & VAR_0) ||
        (VAR_4->n_ports > 1 &&
  (FUNC_0(VAR_4->port_base + VAR_1 + VAR_2) &
   VAR_0));
}
