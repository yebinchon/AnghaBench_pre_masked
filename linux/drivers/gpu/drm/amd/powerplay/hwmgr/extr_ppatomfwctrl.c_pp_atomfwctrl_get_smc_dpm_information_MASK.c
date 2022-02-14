
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pp_hwmgr {int adev; } ;
struct pp_atomfwctrl_smc_dpm_parameters {int Vr2_I2C_address; int acggfxclkspreadfreq; int acggfxclkspreadpercent; int acggfxclkspreadenabled; int socclkspreadfreq; int socclkspreadpercent; int socclkspreadenabled; int uclkspreadfreq; int uclkspreadpercent; int uclkspreadenabled; int pllgfxclkspreadfreq; int pllgfxclkspreadpercent; int pllgfxclkspreadenabled; int ledpin2; int ledpin1; int ledpin0; int padding2; int padding1; int vr1hotpolarity; int vr1hotgpio; int vr0hotpolarity; int vr0hotgpio; int acdcpolarity; int acdcgpio; int padding_telemetrymem1; int mem1offset; int mem1maxcurrent; int padding_telemetrymem0; int mem0offset; int mem0maxcurrent; int padding_telemetrysoc; int socoffset; int socmaxcurrent; int padding_telemetrygfx; int gfxoffset; int gfxmaxcurrent; int soculvphasesheddingmask; int gfxulvphasesheddingmask; int vddmem1vrmapping; int vddmem0vrmapping; int vddsocvrmapping; int vddgfxvrmapping; int maxvoltagestepsoc; int maxvoltagestepgfx; int liquidsensorpresent; int vrsensorpresent; int plx_i2c_linesda; int plx_i2c_linescl; int vr_i2c_linesda; int vr_i2c_linescl; int liquid_i2c_linesda; int liquid_i2c_linescl; int plx_i2c_address; int vr_i2c_address; int liquid2_i2c_address; int liquid1_i2c_address; } ;
struct atom_smc_dpm_info_v4_1 {int Vr2_I2C_address; int acggfxclkspreadfreq; int acggfxclkspreadpercent; int acggfxclkspreadenabled; int socclkspreadfreq; int socclkspreadpercent; int socclkspreadenabled; int uclkspreadfreq; int uclkspreadpercent; int uclkspreadenabled; int pllgfxclkspreadfreq; int pllgfxclkspreadpercent; int pllgfxclkspreadenabled; int ledpin2; int ledpin1; int ledpin0; int padding2; int padding1; int vr1hotpolarity; int vr1hotgpio; int vr0hotpolarity; int vr0hotgpio; int acdcpolarity; int acdcgpio; int padding_telemetrymem1; int mem1offset; int mem1maxcurrent; int padding_telemetrymem0; int mem0offset; int mem0maxcurrent; int padding_telemetrysoc; int socoffset; int socmaxcurrent; int padding_telemetrygfx; int gfxoffset; int gfxmaxcurrent; int soculvphasesheddingmask; int gfxulvphasesheddingmask; int vddmem1vrmapping; int vddmem0vrmapping; int vddsocvrmapping; int vddgfxvrmapping; int maxvoltagestepsoc; int maxvoltagestepgfx; int liquidsensorpresent; int vrsensorpresent; int plx_i2c_linesda; int plx_i2c_linescl; int vr_i2c_linesda; int vr_i2c_linescl; int liquid_i2c_linesda; int liquid_i2c_linescl; int plx_i2c_address; int vr_i2c_address; int liquid2_i2c_address; int liquid1_i2c_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;

int FUNC_3(struct pp_hwmgr *VAR_2,
  struct pp_atomfwctrl_smc_dpm_parameters *VAR_3)
{
 struct atom_smc_dpm_info_v4_1 *VAR_4;
 uint16_t VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = (struct atom_smc_dpm_info_v4_1 *)
  FUNC_2(VAR_2->adev,
    VAR_5, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_4) {
  FUNC_1("Error retrieving BIOS Table Address!");
  return -VAR_0;
 }

 VAR_3->liquid1_i2c_address = VAR_4->liquid1_i2c_address;
 VAR_3->liquid2_i2c_address = VAR_4->liquid2_i2c_address;
 VAR_3->vr_i2c_address = VAR_4->vr_i2c_address;
 VAR_3->plx_i2c_address = VAR_4->plx_i2c_address;

 VAR_3->liquid_i2c_linescl = VAR_4->liquid_i2c_linescl;
 VAR_3->liquid_i2c_linesda = VAR_4->liquid_i2c_linesda;
 VAR_3->vr_i2c_linescl = VAR_4->vr_i2c_linescl;
 VAR_3->vr_i2c_linesda = VAR_4->vr_i2c_linesda;

 VAR_3->plx_i2c_linescl = VAR_4->plx_i2c_linescl;
 VAR_3->plx_i2c_linesda = VAR_4->plx_i2c_linesda;
 VAR_3->vrsensorpresent = VAR_4->vrsensorpresent;
 VAR_3->liquidsensorpresent = VAR_4->liquidsensorpresent;

 VAR_3->maxvoltagestepgfx = VAR_4->maxvoltagestepgfx;
 VAR_3->maxvoltagestepsoc = VAR_4->maxvoltagestepsoc;

 VAR_3->vddgfxvrmapping = VAR_4->vddgfxvrmapping;
 VAR_3->vddsocvrmapping = VAR_4->vddsocvrmapping;
 VAR_3->vddmem0vrmapping = VAR_4->vddmem0vrmapping;
 VAR_3->vddmem1vrmapping = VAR_4->vddmem1vrmapping;

 VAR_3->gfxulvphasesheddingmask = VAR_4->gfxulvphasesheddingmask;
 VAR_3->soculvphasesheddingmask = VAR_4->soculvphasesheddingmask;

 VAR_3->gfxmaxcurrent = VAR_4->gfxmaxcurrent;
 VAR_3->gfxoffset = VAR_4->gfxoffset;
 VAR_3->padding_telemetrygfx = VAR_4->padding_telemetrygfx;

 VAR_3->socmaxcurrent = VAR_4->socmaxcurrent;
 VAR_3->socoffset = VAR_4->socoffset;
 VAR_3->padding_telemetrysoc = VAR_4->padding_telemetrysoc;

 VAR_3->mem0maxcurrent = VAR_4->mem0maxcurrent;
 VAR_3->mem0offset = VAR_4->mem0offset;
 VAR_3->padding_telemetrymem0 = VAR_4->padding_telemetrymem0;

 VAR_3->mem1maxcurrent = VAR_4->mem1maxcurrent;
 VAR_3->mem1offset = VAR_4->mem1offset;
 VAR_3->padding_telemetrymem1 = VAR_4->padding_telemetrymem1;

 VAR_3->acdcgpio = VAR_4->acdcgpio;
 VAR_3->acdcpolarity = VAR_4->acdcpolarity;
 VAR_3->vr0hotgpio = VAR_4->vr0hotgpio;
 VAR_3->vr0hotpolarity = VAR_4->vr0hotpolarity;

 VAR_3->vr1hotgpio = VAR_4->vr1hotgpio;
 VAR_3->vr1hotpolarity = VAR_4->vr1hotpolarity;
 VAR_3->padding1 = VAR_4->padding1;
 VAR_3->padding2 = VAR_4->padding2;

 VAR_3->ledpin0 = VAR_4->ledpin0;
 VAR_3->ledpin1 = VAR_4->ledpin1;
 VAR_3->ledpin2 = VAR_4->ledpin2;

 VAR_3->pllgfxclkspreadenabled = VAR_4->pllgfxclkspreadenabled;
 VAR_3->pllgfxclkspreadpercent = VAR_4->pllgfxclkspreadpercent;
 VAR_3->pllgfxclkspreadfreq = VAR_4->pllgfxclkspreadfreq;

 VAR_3->uclkspreadenabled = VAR_4->uclkspreadenabled;
 VAR_3->uclkspreadpercent = VAR_4->uclkspreadpercent;
 VAR_3->uclkspreadfreq = VAR_4->uclkspreadfreq;

 VAR_3->socclkspreadenabled = VAR_4->socclkspreadenabled;
 VAR_3->socclkspreadpercent = VAR_4->socclkspreadpercent;
 VAR_3->socclkspreadfreq = VAR_4->socclkspreadfreq;

 VAR_3->acggfxclkspreadenabled = VAR_4->acggfxclkspreadenabled;
 VAR_3->acggfxclkspreadpercent = VAR_4->acggfxclkspreadpercent;
 VAR_3->acggfxclkspreadfreq = VAR_4->acggfxclkspreadfreq;

 VAR_3->Vr2_I2C_address = VAR_4->Vr2_I2C_address;

 return 0;
}
