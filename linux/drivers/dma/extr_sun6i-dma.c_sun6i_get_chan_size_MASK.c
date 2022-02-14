
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_pchan {scalar_t__ base; struct sun6i_desc* desc; } ;
struct sun6i_dma_lli {scalar_t__ p_lli_next; scalar_t__ len; struct sun6i_dma_lli* v_lli_next; } ;
struct sun6i_desc {struct sun6i_dma_lli* v_lli; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static size_t FUNC_1(struct sun6i_pchan *VAR_3)
{
 struct sun6i_desc *VAR_4 = VAR_3->desc;
 struct sun6i_dma_lli *VAR_5;
 size_t VAR_6;
 dma_addr_t VAR_7;

 VAR_7 = FUNC_0(VAR_3->base + VAR_1);
 VAR_6 = FUNC_0(VAR_3->base + VAR_0);

 if (VAR_7 == VAR_2)
  return VAR_6;

 for (VAR_5 = VAR_4->v_lli; VAR_5; VAR_5 = VAR_5->v_lli_next) {
  if (VAR_5->p_lli_next == VAR_7) {
   for (VAR_5 = VAR_5->v_lli_next; VAR_5; VAR_5 = VAR_5->v_lli_next)
    VAR_6 += VAR_5->len;
   break;
  }
 }

 return VAR_6;
}
