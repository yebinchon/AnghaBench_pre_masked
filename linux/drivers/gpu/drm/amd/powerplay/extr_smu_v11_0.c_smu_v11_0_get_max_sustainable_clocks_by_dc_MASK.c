
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_table_context {struct smu_11_0_max_sustainable_clocks* max_sustainable_clocks; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct smu_11_0_max_sustainable_clocks {scalar_t__ soc_clock; scalar_t__ uclock; scalar_t__ pixel_clock; scalar_t__ phy_clock; scalar_t__ display_clock; scalar_t__ dcef_clock; } ;
struct pp_smu_nv_clock_table {unsigned int dcfClockInKhz; unsigned int displayClockInKhz; unsigned int phyClockInKhz; unsigned int pixelClockInKhz; unsigned int uClockInKhz; unsigned int socClockInKhz; scalar_t__ fabricClockInKhz; scalar_t__ dppClockInKhz; scalar_t__ dscClockInKhz; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_1,
  struct pp_smu_nv_clock_table *VAR_2)
{
 struct smu_table_context *VAR_3 = &VAR_1->smu_table;
 struct smu_11_0_max_sustainable_clocks *VAR_4 = ((void*)0);

 if (!VAR_2 || !VAR_3->max_sustainable_clocks)
  return -VAR_0;

 VAR_4 = VAR_3->max_sustainable_clocks;

 VAR_2->dcfClockInKhz =
   (unsigned int) VAR_4->dcef_clock * 1000;
 VAR_2->displayClockInKhz =
   (unsigned int) VAR_4->display_clock * 1000;
 VAR_2->phyClockInKhz =
   (unsigned int) VAR_4->phy_clock * 1000;
 VAR_2->pixelClockInKhz =
   (unsigned int) VAR_4->pixel_clock * 1000;
 VAR_2->uClockInKhz =
   (unsigned int) VAR_4->uclock * 1000;
 VAR_2->socClockInKhz =
   (unsigned int) VAR_4->soc_clock * 1000;
 VAR_2->dscClockInKhz = 0;
 VAR_2->dppClockInKhz = 0;
 VAR_2->fabricClockInKhz = 0;

 return 0;
}
