
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* pll; } ;
struct dib8000_state {int seg_mask; scalar_t__ isdbt_cfg_loaded; int seg_diff_mask; TYPE_2__ cfg; } ;
struct TYPE_3__ {scalar_t__ ifreq; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int ) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib8000_state *VAR_1)
{
 u16 VAR_2;
 u16 VAR_3 = 0x2800;

 VAR_1->seg_mask = 0x1fff;


 if (VAR_1->isdbt_cfg_loaded == 0) {
  FUNC_1(VAR_1, 180, (16 << 6) | 9);
  FUNC_1(VAR_1, 187, (4 << 12) | (8 << 5) | 0x2);
  VAR_3 = 0x2800;
  for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
   FUNC_1(VAR_1, 181+VAR_2, VAR_3);



  FUNC_1(VAR_1, 338, (1 << 12) | (1 << 10) | (0 << 9) | (3 << 5) | 1);


  FUNC_1(VAR_1, 340, (8 << 6) | (6 << 0));

  FUNC_1(VAR_1, 341, (4 << 3) | (1 << 2) | (1 << 1) | (1 << 0));

  FUNC_1(VAR_1, 228, 0);
  FUNC_1(VAR_1, 265, 31);
  FUNC_1(VAR_1, 205, 0x200f);
 }






 if (VAR_1->cfg.pll->ifreq == 0)
  FUNC_1(VAR_1, 266, ~VAR_1->seg_mask | VAR_1->seg_diff_mask | 0x40);

 FUNC_0(VAR_1, VAR_0);
}
