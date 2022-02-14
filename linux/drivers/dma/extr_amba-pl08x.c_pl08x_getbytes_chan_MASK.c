
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pl08x_txd {size_t* llis_va; size_t llis_bus; } ;
struct pl08x_phy_chan {int reg_lli; } ;
struct pl08x_driver_data {size_t lli_words; } ;
struct pl08x_dma_chan {struct pl08x_txd* at; struct pl08x_phy_chan* phychan; struct pl08x_driver_data* host; } ;
typedef size_t dma_addr_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (struct pl08x_phy_chan*,size_t const*) ;
 size_t FUNC_2 (struct pl08x_phy_chan*) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct pl08x_dma_chan *VAR_3)
{
 struct pl08x_driver_data *VAR_4 = VAR_3->host;
 const u32 *VAR_5, *VAR_6;
 struct pl08x_phy_chan *VAR_7;
 dma_addr_t VAR_8;
 struct pl08x_txd *VAR_9;
 u32 VAR_10;
 size_t VAR_11;
 u32 VAR_12;

 VAR_7 = VAR_3->phychan;
 VAR_9 = VAR_3->at;

 if (!VAR_7 || !VAR_9)
  return 0;





 VAR_12 = FUNC_3(VAR_7->reg_lli) & ~VAR_2;


 VAR_11 = FUNC_2(VAR_7);

 if (!VAR_12)
  return VAR_11;

 VAR_5 = VAR_9->llis_va;
 VAR_8 = VAR_9->llis_bus;

 VAR_10 = VAR_4->lli_words * VAR_0;
 FUNC_0(VAR_12 < VAR_8 || VAR_12 >= VAR_8 +
      sizeof(u32) * VAR_10);





 VAR_5 += (VAR_12 - VAR_8) / sizeof(u32);

 VAR_6 = VAR_5 + VAR_10;

 for (; VAR_5 < VAR_6; VAR_5 += VAR_4->lli_words) {
  VAR_11 += FUNC_1(VAR_7, VAR_5);




  if (VAR_5[VAR_1] <= VAR_12)
   break;
 }

 return VAR_11;
}
