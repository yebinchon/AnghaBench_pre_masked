
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {scalar_t__ cache_ptr; scalar_t__ cache; int src_nents; int last_req; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 scalar_t__ VAR_0 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct ahash_request *VAR_1)
{
 struct mv_cesa_ahash_req *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3 = 0;

 if (VAR_2->cache_ptr + VAR_1->nbytes < VAR_0 && !VAR_2->last_req) {
  VAR_3 = 1;

  if (!VAR_1->nbytes)
   return VAR_3;

  FUNC_1(VAR_1->src, VAR_2->src_nents,
       VAR_2->cache + VAR_2->cache_ptr,
       VAR_1->nbytes, 0);

  VAR_2->cache_ptr += VAR_1->nbytes;
 }

 return VAR_3;
}
