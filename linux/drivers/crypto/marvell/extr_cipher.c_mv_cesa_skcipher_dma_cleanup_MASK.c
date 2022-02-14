
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {scalar_t__ dst; scalar_t__ src; } ;
struct mv_cesa_skcipher_req {int base; int src_nents; int dst_nents; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int *) ;
 struct mv_cesa_skcipher_req* FUNC_2 (struct skcipher_request*) ;

__attribute__((used)) static inline void
FUNC_3(struct skcipher_request *VAR_4)
{
 struct mv_cesa_skcipher_req *VAR_5 = FUNC_2(VAR_4);

 if (VAR_4->dst != VAR_4->src) {
  FUNC_0(VAR_3->dev, VAR_4->dst, VAR_5->dst_nents,
        VAR_1);
  FUNC_0(VAR_3->dev, VAR_4->src, VAR_5->src_nents,
        VAR_2);
 } else {
  FUNC_0(VAR_3->dev, VAR_4->src, VAR_5->src_nents,
        VAR_0);
 }
 FUNC_1(&VAR_5->base);
}
