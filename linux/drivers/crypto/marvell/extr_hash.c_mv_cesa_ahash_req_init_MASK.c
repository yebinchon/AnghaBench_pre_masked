
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv_cesa_ahash_req {scalar_t__ src_nents; } ;
struct ahash_request {int nbytes; int src; } ;
struct TYPE_4__ {TYPE_1__* caps; int dev; } ;
struct TYPE_3__ {scalar_t__ has_tdma; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_1, bool *VAR_2)
{
 struct mv_cesa_ahash_req *VAR_3 = FUNC_0(VAR_1);

 VAR_3->src_nents = FUNC_4(VAR_1->src, VAR_1->nbytes);
 if (VAR_3->src_nents < 0) {
  FUNC_1(VAR_0->dev, "Invalid number of src SG");
  return VAR_3->src_nents;
 }

 *VAR_2 = FUNC_2(VAR_1);

 if (*VAR_2)
  return 0;

 if (VAR_0->caps->has_tdma)
  return FUNC_3(VAR_1);
 else
  return 0;
}
