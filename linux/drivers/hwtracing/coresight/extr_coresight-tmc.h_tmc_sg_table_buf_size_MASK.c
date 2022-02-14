
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long nr_pages; } ;
struct tmc_sg_table {TYPE_1__ data_pages; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0(struct tmc_sg_table *VAR_1)
{
 return VAR_1->data_pages.nr_pages << VAR_0;
}
