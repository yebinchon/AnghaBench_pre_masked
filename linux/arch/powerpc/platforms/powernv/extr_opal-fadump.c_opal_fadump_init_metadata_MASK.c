
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_fadump_mem_struct {scalar_t__ fadumphdr_addr; scalar_t__ registered_regions; scalar_t__ region_cnt; int version; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct opal_fadump_mem_struct *VAR_1)
{
 VAR_1->version = VAR_0;
 VAR_1->region_cnt = 0;
 VAR_1->registered_regions = 0;
 VAR_1->fadumphdr_addr = 0;
}
