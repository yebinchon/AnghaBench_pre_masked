
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct libalias {int deleteAllLinks; } ;
struct alias_link {int link_type; int alias_port; int src_port; int alias_addr; int dst_addr; int src_addr; struct libalias* la; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct alias_link*,int ,int ,int ,int ,int ,int ,int ) ;

void
FUNC_2(struct alias_link *VAR_0, u_int16_t VAR_1)
{
 struct libalias *VAR_2 = VAR_0->la;

 FUNC_0(VAR_2);
 VAR_2->deleteAllLinks = 1;
 FUNC_1(VAR_0, VAR_0->src_addr, VAR_0->dst_addr, VAR_0->alias_addr,
     VAR_0->src_port, VAR_1, VAR_0->alias_port, VAR_0->link_type);
 VAR_2->deleteAllLinks = 0;
}
