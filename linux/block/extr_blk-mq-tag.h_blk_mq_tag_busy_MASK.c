
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_hw_ctx*) ;

__attribute__((used)) static inline bool FUNC_1(struct blk_mq_hw_ctx *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return 0;

 return FUNC_0(VAR_1);
}
