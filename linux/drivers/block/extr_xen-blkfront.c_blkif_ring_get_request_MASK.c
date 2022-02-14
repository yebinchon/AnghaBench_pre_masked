
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_6__ {unsigned long id; } ;
struct TYPE_7__ {TYPE_2__ rw; } ;
struct blkif_request {TYPE_3__ u; } ;
struct TYPE_8__ {int req_prod_pvt; } ;
struct blkfront_ring_info {TYPE_1__* shadow; TYPE_4__ ring; } ;
struct TYPE_5__ {int associated_id; int status; struct request* request; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct blkif_request* FUNC_0 (TYPE_4__*,int ) ;
 unsigned long FUNC_1 (struct blkfront_ring_info*) ;

__attribute__((used)) static unsigned long FUNC_2(struct blkfront_ring_info *VAR_2,
         struct request *VAR_3,
         struct blkif_request **VAR_4)
{
 unsigned long VAR_5;

 *VAR_4 = FUNC_0(&VAR_2->ring, VAR_2->ring.req_prod_pvt);
 VAR_2->ring.req_prod_pvt++;

 VAR_5 = FUNC_1(VAR_2);
 VAR_2->shadow[VAR_5].request = VAR_3;
 VAR_2->shadow[VAR_5].status = VAR_1;
 VAR_2->shadow[VAR_5].associated_id = VAR_0;

 (*VAR_4)->u.rw.id = VAR_5;

 return VAR_5;
}
