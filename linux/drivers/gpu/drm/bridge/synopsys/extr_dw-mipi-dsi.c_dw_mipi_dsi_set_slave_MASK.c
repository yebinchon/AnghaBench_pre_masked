
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi {int mode_flags; struct dw_mipi_dsi* slave; int format; int channel; int lanes; struct dw_mipi_dsi* master; } ;



void FUNC_0(struct dw_mipi_dsi *VAR_0, struct dw_mipi_dsi *VAR_1)
{

 VAR_0->slave = VAR_1;
 VAR_0->slave->master = VAR_0;


 VAR_0->slave->lanes = VAR_0->lanes;
 VAR_0->slave->channel = VAR_0->channel;
 VAR_0->slave->format = VAR_0->format;
 VAR_0->slave->mode_flags = VAR_0->mode_flags;
}
