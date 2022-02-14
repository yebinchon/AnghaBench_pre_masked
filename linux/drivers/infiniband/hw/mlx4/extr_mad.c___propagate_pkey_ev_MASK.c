
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int*** virt2phys_pkey; } ;
struct mlx4_ib_dev {TYPE_3__* dev; TYPE_2__ pkeys; } ;
struct TYPE_6__ {int sqp_demux; int* pkey_table_len; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_ib_dev *VAR_0, int VAR_1,
    int VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0->dev->caps.sqp_demux; VAR_6++) {
  if (VAR_6 == FUNC_2(VAR_0->dev))
   continue;
  if (!FUNC_1(VAR_0->dev, VAR_6))
   continue;

  VAR_8 = 0;
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
   if (!(VAR_3 & (1 << VAR_4)))
    continue;
   for (VAR_5 = 0;
        VAR_5 < VAR_0->dev->caps.pkey_table_len[VAR_1]; VAR_5++) {
    if (VAR_0->pkeys.virt2phys_pkey[VAR_6][VAR_1 - 1]
        [VAR_5] == VAR_4 + 32 * VAR_2) {
     VAR_7 = FUNC_0(VAR_0->dev, VAR_6, VAR_1);
     FUNC_3("propagate_pkey_ev: slave %d,"
       " port %d, ix %d (%d)\n",
       VAR_6, VAR_1, VAR_5, VAR_7);
     VAR_8 = 1;
     break;
    }
   }
   if (VAR_8)
    break;
  }
 }
}
