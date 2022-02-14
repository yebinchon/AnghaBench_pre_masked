
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct safexcel_ahash_req {scalar_t__ cache; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 scalar_t__ FUNC_1 (struct safexcel_ahash_req*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_2)
{
 struct safexcel_ahash_req *VAR_3 = FUNC_0(VAR_2);
 u64 VAR_4;




 VAR_4 = FUNC_1(VAR_3);





 if (VAR_4 + VAR_2->nbytes <= VAR_1) {
  FUNC_3(VAR_2->src, FUNC_2(VAR_2->src),
       VAR_3->cache + VAR_4,
       VAR_2->nbytes, 0);
  return 0;
 }


 return -VAR_0;
}
