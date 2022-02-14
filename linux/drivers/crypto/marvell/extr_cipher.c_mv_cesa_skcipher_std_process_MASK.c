
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {scalar_t__ cryptlen; int dst; } ;
struct mv_cesa_skcipher_std_req {scalar_t__ offset; int size; } ;
struct TYPE_2__ {struct mv_cesa_engine* engine; } ;
struct mv_cesa_skcipher_req {int dst_nents; TYPE_1__ base; struct mv_cesa_skcipher_std_req std; } ;
struct mv_cesa_engine {scalar_t__ sram; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,scalar_t__,int ,scalar_t__) ;
 struct mv_cesa_skcipher_req* FUNC_1 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_2(struct skcipher_request *VAR_2,
     u32 VAR_3)
{
 struct mv_cesa_skcipher_req *VAR_4 = FUNC_1(VAR_2);
 struct mv_cesa_skcipher_std_req *VAR_5 = &VAR_4->std;
 struct mv_cesa_engine *VAR_6 = VAR_4->base.engine;
 size_t VAR_7;

 VAR_7 = FUNC_0(VAR_2->dst, VAR_4->dst_nents,
       VAR_6->sram + VAR_0,
       VAR_5->size, VAR_5->offset);

 VAR_5->offset += VAR_7;
 if (VAR_5->offset < VAR_2->cryptlen)
  return -VAR_1;

 return 0;
}
