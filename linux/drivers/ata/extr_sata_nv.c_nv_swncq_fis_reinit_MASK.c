
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv_swncq_port_priv {scalar_t__ ncq_flags; scalar_t__ sdbfis_bits; scalar_t__ dmafis_bits; scalar_t__ dhfis_bits; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;



__attribute__((used)) static void FUNC_0(struct ata_port *VAR_0)
{
 struct nv_swncq_port_priv *VAR_1 = VAR_0->private_data;

 VAR_1->dhfis_bits = 0;
 VAR_1->dmafis_bits = 0;
 VAR_1->sdbfis_bits = 0;
 VAR_1->ncq_flags = 0;
}
