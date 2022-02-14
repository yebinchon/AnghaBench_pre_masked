
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_smu_nv_clock_table {int dcfClockInKhz; int uClockInKhz; int fabricClockInKhz; int displayClockInKhz; int dppClockInKhz; int phyClockInKhz; int socClockInKhz; int dscClockInKhz; } ;
struct _vcs_dpi_soc_bounding_box_st {int num_states; TYPE_1__* clock_limits; } ;
struct TYPE_2__ {int dcfclk_mhz; int dram_speed_mts; int fabricclk_mhz; int dispclk_mhz; int dppclk_mhz; int phyclk_mhz; int socclk_mhz; int dscclk_mhz; } ;



__attribute__((used)) static void FUNC_0(
  struct _vcs_dpi_soc_bounding_box_st *VAR_0,
  struct pp_smu_nv_clock_table VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->num_states; VAR_2++) {
  if ((VAR_0->clock_limits[VAR_2].dcfclk_mhz > (VAR_1.dcfClockInKhz / 1000))
    && VAR_1.dcfClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].dcfclk_mhz = (VAR_1.dcfClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].dram_speed_mts > (VAR_1.uClockInKhz / 1000) * 16)
      && VAR_1.uClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].dram_speed_mts = (VAR_1.uClockInKhz / 1000) * 16;

  if ((VAR_0->clock_limits[VAR_2].fabricclk_mhz > (VAR_1.fabricClockInKhz / 1000))
      && VAR_1.fabricClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].fabricclk_mhz = (VAR_1.fabricClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].dispclk_mhz > (VAR_1.displayClockInKhz / 1000))
      && VAR_1.displayClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].dispclk_mhz = (VAR_1.displayClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].dppclk_mhz > (VAR_1.dppClockInKhz / 1000))
      && VAR_1.dppClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].dppclk_mhz = (VAR_1.dppClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].phyclk_mhz > (VAR_1.phyClockInKhz / 1000))
      && VAR_1.phyClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].phyclk_mhz = (VAR_1.phyClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].socclk_mhz > (VAR_1.socClockInKhz / 1000))
      && VAR_1.socClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].socclk_mhz = (VAR_1.socClockInKhz / 1000);

  if ((VAR_0->clock_limits[VAR_2].dscclk_mhz > (VAR_1.dscClockInKhz / 1000))
      && VAR_1.dscClockInKhz != 0)
   VAR_0->clock_limits[VAR_2].dscclk_mhz = (VAR_1.dscClockInKhz / 1000);
 }


 for (VAR_2 = VAR_0->num_states - 1; VAR_2 > 1; VAR_2--) {
  bool VAR_3 = 1;

  if (VAR_0->clock_limits[VAR_2-1].dcfclk_mhz != VAR_0->clock_limits[VAR_2].dcfclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].dispclk_mhz != VAR_0->clock_limits[VAR_2].dispclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].dppclk_mhz != VAR_0->clock_limits[VAR_2].dppclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].dram_speed_mts != VAR_0->clock_limits[VAR_2].dram_speed_mts)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].dscclk_mhz != VAR_0->clock_limits[VAR_2].dscclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].fabricclk_mhz != VAR_0->clock_limits[VAR_2].fabricclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].phyclk_mhz != VAR_0->clock_limits[VAR_2].phyclk_mhz)
   VAR_3 = 0;
  if (VAR_0->clock_limits[VAR_2-1].socclk_mhz != VAR_0->clock_limits[VAR_2].socclk_mhz)
   VAR_3 = 0;

  if (VAR_3)
   VAR_0->num_states--;
 }
}
