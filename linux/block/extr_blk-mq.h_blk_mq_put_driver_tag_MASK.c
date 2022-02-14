
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int tag; int internal_tag; int mq_hctx; } ;


 int FUNC_0 (int ,struct request*) ;

__attribute__((used)) static inline void FUNC_1(struct request *VAR_0)
{
 if (VAR_0->tag == -1 || VAR_0->internal_tag == -1)
  return;

 FUNC_0(VAR_0->mq_hctx, VAR_0);
}
