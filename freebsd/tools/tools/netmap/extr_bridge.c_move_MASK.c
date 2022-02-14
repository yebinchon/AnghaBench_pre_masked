
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ nr_flags; } ;
struct nm_desc {scalar_t__ first_rx_ring; scalar_t__ first_tx_ring; scalar_t__ last_rx_ring; scalar_t__ last_tx_ring; int nifp; TYPE_1__ req; } ;
struct netmap_ring {int dummy; } ;


 int FUNC_0 (char*,struct netmap_ring*,struct netmap_ring*) ;
 struct netmap_ring* FUNC_1 (int ,scalar_t__) ;
 struct netmap_ring* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct netmap_ring*) ;
 scalar_t__ FUNC_4 (struct netmap_ring*,struct netmap_ring*,scalar_t__,char const*) ;

__attribute__((used)) static int
FUNC_5(struct nm_desc *VAR_1, struct nm_desc *VAR_2, u_int VAR_3)
{
 struct netmap_ring *VAR_4, *VAR_5;
 u_int VAR_6 = 0, VAR_7 = VAR_1->first_rx_ring, VAR_8 = VAR_2->first_tx_ring;
 const char *VAR_9 = (VAR_1->req.nr_flags == VAR_0) ?
  "host->net" : "net->host";

 while (VAR_7 <= VAR_1->last_rx_ring && VAR_8 <= VAR_2->last_tx_ring) {
  VAR_5 = FUNC_1(VAR_1->nifp, VAR_7);
  VAR_4 = FUNC_2(VAR_2->nifp, VAR_8);
  FUNC_0("txring %p rxring %p", VAR_4, VAR_5);
  if (FUNC_3(VAR_5)) {
   VAR_7++;
   continue;
  }
  if (FUNC_3(VAR_4)) {
   VAR_8++;
   continue;
  }
  VAR_6 += FUNC_4(VAR_5, VAR_4, VAR_3, VAR_9);
 }

 return (VAR_6);
}
