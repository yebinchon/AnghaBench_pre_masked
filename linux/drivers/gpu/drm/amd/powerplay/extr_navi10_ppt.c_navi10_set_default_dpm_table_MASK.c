
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct smu_table_context {TYPE_11__* driver_pptable; } ;
struct smu_dpm_context {struct smu_11_0_dpm_context* dpm_context; } ;
struct smu_context {struct smu_table_context smu_table; struct smu_dpm_context smu_dpm; } ;
struct TYPE_22__ {int max; int min; } ;
struct TYPE_21__ {int max; int min; } ;
struct TYPE_20__ {int max; int min; } ;
struct TYPE_19__ {int max; int min; } ;
struct TYPE_18__ {int max; int min; } ;
struct TYPE_17__ {int max; int min; } ;
struct TYPE_16__ {int max; int min; } ;
struct TYPE_15__ {int max; int min; } ;
struct TYPE_14__ {int max; int min; } ;
struct TYPE_12__ {TYPE_9__ phy_table; TYPE_8__ display_table; TYPE_7__ pixel_table; TYPE_6__ dcef_table; TYPE_5__ dclk_table; TYPE_4__ vclk_table; TYPE_3__ uclk_table; TYPE_2__ gfx_table; TYPE_1__ soc_table; } ;
struct smu_11_0_dpm_context {TYPE_10__ dpm_tables; } ;
struct TYPE_13__ {int * FreqTablePhyclk; int * FreqTableDispclk; int * FreqTablePixclk; int * FreqTableDcefclk; int * FreqTableDclk; int * FreqTableVclk; int * FreqTableUclk; int * FreqTableGfx; int * FreqTableSocclk; } ;
typedef TYPE_11__ PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_9)
{
 struct smu_dpm_context *VAR_10 = &VAR_9->smu_dpm;
 struct smu_table_context *VAR_11 = &VAR_9->smu_table;
 struct smu_11_0_dpm_context *VAR_12 = VAR_10->dpm_context;
 PPTable_t *VAR_13 = ((void*)0);

 VAR_13 = VAR_11->driver_pptable;

 VAR_12->dpm_tables.soc_table.min = VAR_13->FreqTableSocclk[0];
 VAR_12->dpm_tables.soc_table.max = VAR_13->FreqTableSocclk[VAR_6 - 1];

 VAR_12->dpm_tables.gfx_table.min = VAR_13->FreqTableGfx[0];
 VAR_12->dpm_tables.gfx_table.max = VAR_13->FreqTableGfx[VAR_3 - 1];

 VAR_12->dpm_tables.uclk_table.min = VAR_13->FreqTableUclk[0];
 VAR_12->dpm_tables.uclk_table.max = VAR_13->FreqTableUclk[VAR_7 - 1];

 VAR_12->dpm_tables.vclk_table.min = VAR_13->FreqTableVclk[0];
 VAR_12->dpm_tables.vclk_table.max = VAR_13->FreqTableVclk[VAR_8 - 1];

 VAR_12->dpm_tables.dclk_table.min = VAR_13->FreqTableDclk[0];
 VAR_12->dpm_tables.dclk_table.max = VAR_13->FreqTableDclk[VAR_1 - 1];

 VAR_12->dpm_tables.dcef_table.min = VAR_13->FreqTableDcefclk[0];
 VAR_12->dpm_tables.dcef_table.max = VAR_13->FreqTableDcefclk[VAR_0 - 1];

 VAR_12->dpm_tables.pixel_table.min = VAR_13->FreqTablePixclk[0];
 VAR_12->dpm_tables.pixel_table.max = VAR_13->FreqTablePixclk[VAR_5 - 1];

 VAR_12->dpm_tables.display_table.min = VAR_13->FreqTableDispclk[0];
 VAR_12->dpm_tables.display_table.max = VAR_13->FreqTableDispclk[VAR_2 - 1];

 VAR_12->dpm_tables.phy_table.min = VAR_13->FreqTablePhyclk[0];
 VAR_12->dpm_tables.phy_table.max = VAR_13->FreqTablePhyclk[VAR_4 - 1];

 return 0;
}
