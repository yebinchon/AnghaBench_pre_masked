
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct safexcel_ahash_result {int error; int completion; } ;
struct safexcel_ahash_req {int hmac; int last_req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct safexcel_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ,struct safexcel_ahash_result*) ;
 int FUNC_2 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_3 (struct ahash_request*,void*) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (struct scatterlist*,int *,unsigned int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ahash_request *VAR_4,
     unsigned int VAR_5, u8 *VAR_6, void *VAR_7)
{
 struct safexcel_ahash_result VAR_8;
 struct safexcel_ahash_req *VAR_9;
 struct scatterlist VAR_10;
 int VAR_11;

 FUNC_1(VAR_4, VAR_0,
       VAR_3, &VAR_8);
 FUNC_7(&VAR_10, VAR_6, VAR_5);
 FUNC_2(VAR_4, &VAR_10, VAR_6, VAR_5);
 FUNC_6(&VAR_8.completion);

 VAR_11 = FUNC_4(VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_0(VAR_4);
 VAR_9->hmac = 1;
 VAR_9->last_req = 1;

 VAR_11 = FUNC_5(VAR_4);
 if (VAR_11 && VAR_11 != -VAR_2 && VAR_11 != -VAR_1)
  return VAR_11;

 FUNC_8(&VAR_8.completion);
 if (VAR_8.error)
  return VAR_8.error;

 return FUNC_3(VAR_4, VAR_7);
}
