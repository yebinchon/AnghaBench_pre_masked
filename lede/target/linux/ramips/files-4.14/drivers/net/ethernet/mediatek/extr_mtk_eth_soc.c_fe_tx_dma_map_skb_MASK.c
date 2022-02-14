
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct page {int dummy; } ;
struct fe_tx_ring {int dummy; } ;
struct fe_map_state {int dummy; } ;


 int FUNC_0 (struct fe_tx_ring*,struct fe_map_state*,struct page*,size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (struct sk_buff*) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fe_tx_ring *VAR_0, struct fe_map_state *VAR_1,
        struct sk_buff *VAR_2)
{
 struct page *VAR_3 = FUNC_3(VAR_2->data);
 size_t VAR_4 = FUNC_1(VAR_2->data);
 size_t VAR_5 = FUNC_2(VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5);
}
