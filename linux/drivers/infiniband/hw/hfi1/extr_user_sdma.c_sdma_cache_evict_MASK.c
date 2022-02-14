
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_user_sdma_pkt_q {int handler; } ;
struct evict_data {scalar_t__ cleared; scalar_t__ target; } ;


 int FUNC_0 (int ,struct evict_data*) ;

__attribute__((used)) static u32 FUNC_1(struct hfi1_user_sdma_pkt_q *VAR_0, u32 VAR_1)
{
 struct evict_data VAR_2;

 VAR_2.cleared = 0;
 VAR_2.target = VAR_1;
 FUNC_0(VAR_0->handler, &VAR_2);
 return VAR_2.cleared;
}
