
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tags {unsigned int nr_reserved_tags; } ;



__attribute__((used)) static inline bool FUNC_0(struct blk_mq_tags *VAR_0,
       unsigned int VAR_1)
{
 return VAR_1 < VAR_0->nr_reserved_tags;
}
