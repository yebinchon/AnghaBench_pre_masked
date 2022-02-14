
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct table_value {int zoneid; int nh6; int nh4; int limit; int dscp; int nat; int fib; int netgraph; int skipto; int divert; int pipe; int tag; } ;
typedef int iv ;
struct TYPE_6__ {int zoneid; int nh6; int nh4; int limit; int dscp; int nat; int fib; int netgraph; int skipto; int divert; int pipe; int tag; } ;
typedef TYPE_1__ ipfw_table_value ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(struct table_value *VAR_0, ipfw_table_value *VAR_1)
{
 ipfw_table_value VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.tag = VAR_0->tag;
 VAR_2.pipe = VAR_0->pipe;
 VAR_2.divert = VAR_0->divert;
 VAR_2.skipto = VAR_0->skipto;
 VAR_2.netgraph = VAR_0->netgraph;
 VAR_2.fib = VAR_0->fib;
 VAR_2.nat = VAR_0->nat;
 VAR_2.dscp = VAR_0->dscp;
 VAR_2.limit = VAR_0->limit;
 VAR_2.nh4 = VAR_0->nh4;
 VAR_2.nh6 = VAR_0->nh6;
 VAR_2.zoneid = VAR_0->zoneid;

 FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));
}
