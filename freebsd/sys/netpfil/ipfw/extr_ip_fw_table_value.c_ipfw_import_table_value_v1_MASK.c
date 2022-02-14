
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int v ;
struct table_value {int zoneid; int limit; int nh6; int nh4; int dscp; int nat; int fib; int netgraph; int skipto; int divert; int pipe; int tag; } ;
struct TYPE_4__ {int zoneid; int limit; int nh6; int nh4; int dscp; int nat; int fib; int netgraph; int skipto; int divert; int pipe; int tag; } ;
typedef TYPE_1__ ipfw_table_value ;


 int FUNC_0 (TYPE_1__*,struct table_value*,int) ;
 int FUNC_1 (struct table_value*,int ,int) ;

void
FUNC_2(ipfw_table_value *VAR_0)
{
 struct table_value VAR_1;

 FUNC_1(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.tag = VAR_0->tag;
 VAR_1.pipe = VAR_0->pipe;
 VAR_1.divert = VAR_0->divert;
 VAR_1.skipto = VAR_0->skipto;
 VAR_1.netgraph = VAR_0->netgraph;
 VAR_1.fib = VAR_0->fib;
 VAR_1.nat = VAR_0->nat;
 VAR_1.dscp = VAR_0->dscp;
 VAR_1.nh4 = VAR_0->nh4;
 VAR_1.nh6 = VAR_0->nh6;
 VAR_1.limit = VAR_0->limit;
 VAR_1.zoneid = VAR_0->zoneid;

 FUNC_0(VAR_0, &VAR_1, sizeof(ipfw_table_value));
}
