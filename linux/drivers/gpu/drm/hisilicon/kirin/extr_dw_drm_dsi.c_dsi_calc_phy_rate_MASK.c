
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct mipi_phy_params {int hstx_ckg_sel; size_t pll_fbd_p; int pll_pre_div1p; int pll_fbd_2p; size_t pll_pre_p; size_t pll_fbd_s; int pll_fbd_div1f; int pll_fbd_div5f; int pll_vco_750M; } ;
struct TYPE_3__ {size_t min_range_kHz; size_t max_range_kHz; int hstx_ckg_sel; int pll_vco_750M; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,size_t) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_2, struct mipi_phy_params *VAR_3)
{
 u32 VAR_4 = VAR_0;
 u32 VAR_5 = VAR_2;
 u32 VAR_6 = 0;
 u32 VAR_7 = 1;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10 = 1;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u64 VAR_14;




 do {
  VAR_13 = VAR_5;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
   if (VAR_13 >= VAR_1[VAR_6].min_range_kHz &&
       VAR_13 <= VAR_1[VAR_6].max_range_kHz)
    break;

  if (VAR_6 == FUNC_0(VAR_1)) {
   FUNC_1("%dkHz out of range\n", VAR_13);
   return 0;
  }

  VAR_3->pll_vco_750M = VAR_1[VAR_6].pll_vco_750M;
  VAR_3->hstx_ckg_sel = VAR_1[VAR_6].hstx_ckg_sel;

  if (VAR_3->hstx_ckg_sel <= 7 &&
      VAR_3->hstx_ckg_sel >= 4)
   VAR_7 = 0x10 >> (7 - VAR_3->hstx_ckg_sel);

  VAR_14 = VAR_13 * (u64)VAR_7 * (u64)VAR_4;
  VAR_12 = VAR_14 / (u64)1000000000;
  VAR_11 = (VAR_14 % (u64)1000000000) / (u64)100000000;

  if (VAR_12 % 2 == 0) {
   if (VAR_11 * 6 >= 50) {
    VAR_9 = 2;
    VAR_8 = (VAR_12 + 1) * VAR_9;
   } else if (VAR_11 * 6 >= 30) {
    VAR_9 = 3;
    VAR_8 = VAR_12 * VAR_9 + 2;
   } else {
    VAR_9 = 1;
    VAR_8 = VAR_12 * VAR_9;
   }
  } else {
   if (VAR_11 * 6 >= 50) {
    VAR_9 = 1;
    VAR_8 = (VAR_12 + 1) * VAR_9;
   } else if (VAR_11 * 6 >= 30) {
    VAR_9 = 1;
    VAR_8 = (VAR_12 + 1) * VAR_9;
   } else if (VAR_11 * 6 >= 10) {
    VAR_9 = 3;
    VAR_8 = VAR_12 * VAR_9 + 1;
   } else {
    VAR_9 = 2;
    VAR_8 = VAR_12 * VAR_9;
   }
  }

  if (VAR_9 == 1) {
   VAR_3->pll_fbd_p = 0;
   VAR_3->pll_pre_div1p = 1;
  } else {
   VAR_3->pll_fbd_p = VAR_9;
   VAR_3->pll_pre_div1p = 0;
  }

  if (VAR_3->pll_fbd_2p <= 7 && VAR_3->pll_fbd_2p >= 4)
   VAR_10 = 0x10 >> (7 - VAR_3->pll_fbd_2p);

  if (VAR_8 == 2) {
   VAR_3->pll_pre_p = 0;
   VAR_3->pll_fbd_s = 0;
   VAR_3->pll_fbd_div1f = 0;
   VAR_3->pll_fbd_div5f = 1;
  } else if (VAR_8 >= 2 * 2 * VAR_10 && VAR_8 <= 2 * 4 * VAR_10) {
   VAR_3->pll_pre_p = VAR_8 / (2 * VAR_10);
   VAR_3->pll_fbd_s = 0;
   VAR_3->pll_fbd_div1f = 1;
   VAR_3->pll_fbd_div5f = 0;
  } else if (VAR_8 >= 2 * 5 * VAR_10 && VAR_8 <= 2 * 150 * VAR_10) {
   if (((VAR_8 / (2 * VAR_10)) % 2) == 0) {
    VAR_3->pll_pre_p =
     (VAR_8 / (2 * VAR_10)) / 2 - 1;
    VAR_3->pll_fbd_s =
     (VAR_8 / (2 * VAR_10)) % 2 + 2;
   } else {
    VAR_3->pll_pre_p =
     (VAR_8 / (2 * VAR_10)) / 2;
    VAR_3->pll_fbd_s =
     (VAR_8 / (2 * VAR_10)) % 2;
   }
   VAR_3->pll_fbd_div1f = 0;
   VAR_3->pll_fbd_div5f = 0;
  } else {
   VAR_3->pll_pre_p = 0;
   VAR_3->pll_fbd_s = 0;
   VAR_3->pll_fbd_div1f = 0;
   VAR_3->pll_fbd_div5f = 1;
  }

  VAR_13 = (u64)1000000000 * (u64)VAR_8 /
   ((u64)VAR_4 * (u64)VAR_9 * (u64)VAR_7);

  if (VAR_13 >= VAR_2)
   break;

  VAR_5 += 10;

 } while (1);

 return VAR_13;
}
