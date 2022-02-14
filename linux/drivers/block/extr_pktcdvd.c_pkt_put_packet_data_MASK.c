
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_free_list; } ;
struct pktcdvd_device {TYPE_1__ cdrw; } ;
struct packet_data {int list; scalar_t__ cache_valid; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct pktcdvd_device *VAR_0, struct packet_data *VAR_1)
{
 if (VAR_1->cache_valid) {
  FUNC_0(&VAR_1->list, &VAR_0->cdrw.pkt_free_list);
 } else {
  FUNC_1(&VAR_1->list, &VAR_0->cdrw.pkt_free_list);
 }
}
