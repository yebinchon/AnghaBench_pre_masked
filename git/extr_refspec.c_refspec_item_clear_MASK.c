
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {scalar_t__ exact_sha1; scalar_t__ matching; scalar_t__ pattern; scalar_t__ force; int dst; int src; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct refspec_item *VAR_0)
{
 FUNC_0(VAR_0->src);
 FUNC_0(VAR_0->dst);
 VAR_0->force = 0;
 VAR_0->pattern = 0;
 VAR_0->matching = 0;
 VAR_0->exact_sha1 = 0;
}
