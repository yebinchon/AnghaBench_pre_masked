
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d40_log_lli_bidir {int * src; int * dst; } ;
struct d40_log_lli {int dummy; } ;
struct d40_lcla_pool {int dma_addr; struct d40_log_lli* base; } ;
struct d40_desc {int lli_current; int lli_len; int cyclic; struct d40_log_lli_bidir lli_log; } ;
struct TYPE_6__ {scalar_t__ dir; } ;
struct d40_chan {TYPE_4__* base; int lcpa; TYPE_3__* phy_chan; TYPE_2__ dma_cfg; } ;
struct TYPE_8__ {int dev; TYPE_1__* plat_data; struct d40_lcla_pool lcla_pool; } ;
struct TYPE_7__ {int num; scalar_t__ use_soft_lli; } ;
struct TYPE_5__ {int use_esram_lcla; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct d40_chan*,struct d40_desc*) ;
 int FUNC_1 (struct d40_log_lli*,int *,int *,int,unsigned int) ;
 int FUNC_2 (int ,int *,int *,int,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct d40_chan *VAR_4, struct d40_desc *VAR_5)
{
 struct d40_lcla_pool *VAR_6 = &VAR_4->base->lcla_pool;
 struct d40_log_lli_bidir *VAR_7 = &VAR_5->lli_log;
 int VAR_8 = VAR_5->lli_current;
 int VAR_9 = VAR_5->lli_len;
 bool VAR_10 = VAR_5->cyclic;
 int VAR_11 = -VAR_2;
 int VAR_12 = 0;
 bool VAR_13 = VAR_4->base->plat_data->use_esram_lcla;
 bool VAR_14;





 VAR_14 = VAR_10 && VAR_8 == 0;





 if (VAR_14 || (VAR_9 - VAR_8 > 1)) {






  if (!(VAR_4->phy_chan->use_soft_lli &&
   VAR_4->dma_cfg.dir == VAR_0))
   VAR_11 = FUNC_0(VAR_4, VAR_5);

  VAR_12 = VAR_11;
 }







 if (!VAR_14 || VAR_11 == -VAR_2) {
  unsigned int VAR_15 = 0;

  if (VAR_11 == -VAR_2)
   VAR_15 |= VAR_3;

  FUNC_2(VAR_4->lcpa,
           &VAR_7->dst[VAR_8],
           &VAR_7->src[VAR_8],
           VAR_11,
           VAR_15);
  VAR_8++;
 }

 if (VAR_11 < 0)
  goto set_current;

 for (; VAR_8 < VAR_9; VAR_8++) {
  unsigned int VAR_16 = VAR_4->phy_chan->num * 1024 +
        8 * VAR_11 * 2;
  struct d40_log_lli *VAR_17 = VAR_6->base + VAR_16;
  unsigned int VAR_18 = 0;
  int VAR_19;

  if (VAR_8 + 1 < VAR_9)
   VAR_19 = FUNC_0(VAR_4, VAR_5);
  else
   VAR_19 = VAR_14 ? VAR_12 : -VAR_2;

  if (VAR_10 || VAR_19 == -VAR_2)
   VAR_18 |= VAR_3;

  if (VAR_14 && VAR_11 == VAR_12) {

   FUNC_2(VAR_4->lcpa,
            &VAR_7->dst[VAR_8],
            &VAR_7->src[VAR_8],
            VAR_19, VAR_18);
  }





  FUNC_1(VAR_17,
           &VAR_7->dst[VAR_8],
           &VAR_7->src[VAR_8],
           VAR_19, VAR_18);





  if (!VAR_13) {
   FUNC_3(VAR_4->base->dev,
      VAR_6->dma_addr, VAR_16,
      2 * sizeof(struct d40_log_lli),
      VAR_1);
  }
  VAR_11 = VAR_19;

  if (VAR_11 == -VAR_2 || VAR_11 == VAR_12) {
   VAR_8++;
   break;
  }
 }
 set_current:
 VAR_5->lli_current = VAR_8;
}
