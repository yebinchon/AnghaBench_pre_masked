
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_oxnas_port_priv {scalar_t__ core_base; scalar_t__ port_base; } ;
struct ata_port {int port_no; struct sata_oxnas_port_priv* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_6)
{
 struct sata_oxnas_port_priv *VAR_7 = VAR_6->private_data;
 u32 VAR_8 = (VAR_0 << VAR_6->port_no);


 FUNC_0(~0, VAR_7->port_base + VAR_3);
 FUNC_0(VAR_8, VAR_7->core_base + VAR_2);
 FUNC_1();


 FUNC_0(VAR_5, VAR_7->port_base + VAR_4);
 FUNC_0(VAR_8, VAR_7->core_base + VAR_1);
}
