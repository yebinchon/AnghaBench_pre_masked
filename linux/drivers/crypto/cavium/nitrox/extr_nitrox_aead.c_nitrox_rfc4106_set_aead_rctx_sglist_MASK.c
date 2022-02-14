
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nitrox_aead_rctx {struct scatterlist* dst; struct scatterlist* src; } ;
struct nitrox_rfc4106_rctx {struct scatterlist* dst; struct scatterlist* src; int assoc; struct nitrox_aead_rctx base; } ;
struct aead_request {unsigned int assoclen; int dst; int src; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct nitrox_rfc4106_rctx* FUNC_0 (struct aead_request*) ;
 struct scatterlist* FUNC_1 (struct scatterlist*,int ,int) ;
 int FUNC_2 (int ,int ,int ,unsigned int,int ) ;
 int FUNC_3 (struct scatterlist*,int,struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (struct scatterlist*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_2)
{
 struct nitrox_rfc4106_rctx *VAR_3 = FUNC_0(VAR_2);
 struct nitrox_aead_rctx *VAR_4 = &VAR_3->base;
 unsigned int VAR_5 = VAR_2->assoclen - VAR_1;
 struct scatterlist *VAR_6;

 if (VAR_2->assoclen != 16 && VAR_2->assoclen != 20)
  return -VAR_0;

 FUNC_2(VAR_3->assoc, VAR_2->src, 0, VAR_5, 0);
 FUNC_4(VAR_3->src, 3);
 FUNC_5(VAR_3->src, VAR_3->assoc, VAR_5);
 VAR_6 = FUNC_1(VAR_3->src + 1, VAR_2->src, VAR_2->assoclen);
 if (VAR_6 != VAR_3->src + 1)
  FUNC_3(VAR_3->src, 2, VAR_6);

 if (VAR_2->src != VAR_2->dst) {
  FUNC_4(VAR_3->dst, 3);
  FUNC_5(VAR_3->dst, VAR_3->assoc, VAR_5);
  VAR_6 = FUNC_1(VAR_3->dst + 1, VAR_2->dst, VAR_2->assoclen);
  if (VAR_6 != VAR_3->dst + 1)
   FUNC_3(VAR_3->dst, 2, VAR_6);
 }

 VAR_4->src = VAR_3->src;
 VAR_4->dst = (VAR_2->src == VAR_2->dst) ? VAR_3->src : VAR_3->dst;

 return 0;
}
