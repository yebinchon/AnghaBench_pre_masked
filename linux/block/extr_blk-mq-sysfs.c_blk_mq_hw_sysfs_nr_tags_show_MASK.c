
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_hw_ctx {TYPE_1__* tags; } ;
typedef int ssize_t ;
struct TYPE_2__ {int nr_tags; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_mq_hw_ctx *VAR_0,
         char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->tags->nr_tags);
}
