
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmp_pdma_phy {int base; int idx; TYPE_1__* vchan; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mmp_pdma_phy *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = FUNC_2(VAR_4->base + VAR_2);
 u32 VAR_7 = (VAR_4->idx << 2) + VAR_0;

 if (!(VAR_6 & FUNC_0(VAR_4->idx)))
  return -VAR_3;


 VAR_5 = FUNC_2(VAR_4->base + VAR_7);
 FUNC_3(VAR_5, VAR_4->base + VAR_7);
 if ((VAR_5 & VAR_1) && (VAR_4->vchan))
  FUNC_1(VAR_4->vchan->dev, "DCSR_BUSERR\n");

 return 0;
}
