
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901318_lli {struct coh901318_lli* virt_link_addr; int link_addr; int dst_addr; int src_addr; int control; } ;
struct coh901318_chan {int dummy; } ;


 int FUNC_0 (struct coh901318_chan*) ;
 int FUNC_1 (int ,char*,int,struct coh901318_lli*,int ,int *,int *,int *,struct coh901318_lli*) ;

__attribute__((used)) static void FUNC_2(struct coh901318_chan *VAR_0,
     struct coh901318_lli *VAR_1)
{
 struct coh901318_lli *VAR_2 = VAR_1;
 int VAR_3 = 0;

 while (VAR_2) {
  FUNC_1(FUNC_0(VAR_0), "i %d, lli %p, ctrl 0x%x, src %pad"
    ", dst %pad, link %pad virt_link_addr 0x%p\n",
    VAR_3, VAR_2, VAR_2->control, &VAR_2->src_addr, &VAR_2->dst_addr,
    &VAR_2->link_addr, VAR_2->virt_link_addr);
  VAR_3++;
  VAR_2 = VAR_2->virt_link_addr;
 }
}
