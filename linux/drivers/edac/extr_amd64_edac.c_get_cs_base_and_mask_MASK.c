
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct amd64_pvt {int fam; scalar_t__ ext_model; int model; TYPE_1__* csels; } ;
struct TYPE_2__ {int* csbases; int* csmasks; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amd64_pvt *VAR_1, int VAR_2, u8 VAR_3,
     u64 *VAR_4, u64 *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10;

 if (VAR_1->fam == 0xf && VAR_1->ext_model < VAR_0) {
  VAR_6 = VAR_1->csels[VAR_3].csbases[VAR_2];
  VAR_7 = VAR_1->csels[VAR_3].csmasks[VAR_2];
  VAR_8 = FUNC_0(31, 21) | FUNC_0(15, 9);
  VAR_9 = FUNC_0(29, 21) | FUNC_0(15, 9);
  VAR_10 = 4;





 } else if (VAR_1->fam == 0x16 ||
    (VAR_1->fam == 0x15 && VAR_1->model >= 0x30)) {
  VAR_6 = VAR_1->csels[VAR_3].csbases[VAR_2];
  VAR_7 = VAR_1->csels[VAR_3].csmasks[VAR_2 >> 1];

  *VAR_4 = (VAR_6 & FUNC_0(15, 5)) << 6;
  *VAR_4 |= (VAR_6 & FUNC_0(30, 19)) << 8;

  *VAR_5 = ~0ULL;

  *VAR_5 &= ~((FUNC_0(15, 5) << 6) |
      (FUNC_0(30, 19) << 8));

  *VAR_5 |= (VAR_7 & FUNC_0(15, 5)) << 6;
  *VAR_5 |= (VAR_7 & FUNC_0(30, 19)) << 8;

  return;
 } else {
  VAR_6 = VAR_1->csels[VAR_3].csbases[VAR_2];
  VAR_7 = VAR_1->csels[VAR_3].csmasks[VAR_2 >> 1];
  VAR_10 = 8;

  if (VAR_1->fam == 0x15)
   VAR_8 = VAR_9 =
    FUNC_0(30,19) | FUNC_0(13,5);
  else
   VAR_8 = VAR_9 =
    FUNC_0(28,19) | FUNC_0(13,5);
 }

 *VAR_4 = (VAR_6 & VAR_8) << VAR_10;

 *VAR_5 = ~0ULL;

 *VAR_5 &= ~(VAR_9 << VAR_10);

 *VAR_5 |= (VAR_7 & VAR_9) << VAR_10;
}
