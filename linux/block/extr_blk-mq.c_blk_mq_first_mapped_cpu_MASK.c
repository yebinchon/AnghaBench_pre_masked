
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(struct blk_mq_hw_ctx *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->cpumask, VAR_0);

 if (VAR_3 >= VAR_1)
  VAR_3 = FUNC_0(VAR_2->cpumask);
 return VAR_3;
}
