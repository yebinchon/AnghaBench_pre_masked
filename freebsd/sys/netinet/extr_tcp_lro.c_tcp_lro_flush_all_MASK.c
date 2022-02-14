
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct mbuf {int dummy; } ;
struct lro_ctrl {unsigned int lro_mbuf_count; int lro_flushed; int lro_queued; TYPE_2__* ifp; TYPE_1__* lro_mbuf_data; } ;
struct TYPE_4__ {int (* if_input ) (TYPE_2__*,struct mbuf*) ;} ;
struct TYPE_3__ {unsigned long long seq; struct mbuf* mb; } ;


 int FUNC_0 (TYPE_2__*,struct mbuf*) ;
 scalar_t__ FUNC_1 (struct lro_ctrl*,struct mbuf*,int ,int ) ;
 int FUNC_2 (struct lro_ctrl*) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

void
FUNC_4(struct lro_ctrl *VAR_0)
{
 uint64_t VAR_1;
 uint64_t VAR_2;
 unsigned VAR_3;


 if (VAR_0->lro_mbuf_count == 0)
  goto done;


 FUNC_3(VAR_0->lro_mbuf_data, VAR_0->lro_mbuf_count);


 VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 != VAR_0->lro_mbuf_count; VAR_3++) {
  struct mbuf *VAR_4;


  VAR_4 = VAR_0->lro_mbuf_data[VAR_3].mb;


  VAR_2 = VAR_0->lro_mbuf_data[VAR_3].seq & (-1ULL << 24);


  if (VAR_1 != VAR_2) {
   VAR_1 = VAR_2;


   FUNC_2(VAR_0);
  }


  if (FUNC_1(VAR_0, VAR_4, 0, 0) != 0) {

   (*VAR_0->ifp->if_input)(VAR_0->ifp, VAR_4);
   VAR_0->lro_queued++;
   VAR_0->lro_flushed++;
  }
 }
done:

 FUNC_2(VAR_0);

 VAR_0->lro_mbuf_count = 0;
}
