
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_desc*,struct sk_buff*,int) ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct dma_desc*,int ,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_4(struct dma_desc *VAR_4,
  struct sk_buff **VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_4, 0, VAR_6 * sizeof(*VAR_4));
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5[VAR_7] = FUNC_1(VAR_0);
  if (!VAR_5[VAR_7]) {
   VAR_7 = VAR_6;
   break;
  }
  FUNC_3(VAR_5[VAR_7], VAR_1);
  FUNC_0(&VAR_4[VAR_7], VAR_5[VAR_7], (VAR_6 - 1 == VAR_7));
 }

 VAR_2 = 0;
 VAR_3 = 0;
}
