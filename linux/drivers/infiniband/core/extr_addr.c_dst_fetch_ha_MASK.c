
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {int dst_dev_addr; } ;
struct neighbour {int nud_state; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct neighbour* FUNC_0 (struct dst_entry const*,void const*) ;
 int FUNC_1 (struct neighbour*,int *) ;
 int FUNC_2 (int ,struct neighbour*,int ) ;
 int FUNC_3 (struct neighbour*) ;

__attribute__((used)) static int FUNC_4(const struct dst_entry *VAR_2,
   struct rdma_dev_addr *VAR_3,
   const void *VAR_4)
{
 struct neighbour *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 if (!(VAR_5->nud_state & VAR_1)) {
  FUNC_1(VAR_5, ((void*)0));
  VAR_6 = -VAR_0;
 } else {
  FUNC_2(VAR_3->dst_dev_addr, VAR_5, VAR_2->dev);
 }

 FUNC_3(VAR_5);

 return VAR_6;
}
