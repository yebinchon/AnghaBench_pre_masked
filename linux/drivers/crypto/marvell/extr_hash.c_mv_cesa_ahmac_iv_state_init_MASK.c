
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct mv_cesa_ahash_result {int error; int completion; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahash_request*,int ,int ,struct mv_cesa_ahash_result*) ;
 int FUNC_1 (struct ahash_request*,struct scatterlist*,int *,unsigned int) ;
 int FUNC_2 (struct ahash_request*,void*) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct scatterlist*,int *,unsigned int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_3, u8 *VAR_4,
           void *VAR_5, unsigned int VAR_6)
{
 struct mv_cesa_ahash_result VAR_7;
 struct scatterlist VAR_8;
 int VAR_9;

 FUNC_0(VAR_3, VAR_0,
       VAR_2, &VAR_7);
 FUNC_6(&VAR_8, VAR_4, VAR_6);
 FUNC_1(VAR_3, &VAR_8, VAR_4, VAR_6);
 FUNC_5(&VAR_7.completion);

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 && VAR_9 != -VAR_1)
  return VAR_9;

 FUNC_7(&VAR_7.completion);
 if (VAR_7.error)
  return VAR_7.error;

 VAR_9 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9)
  return VAR_9;

 return 0;
}
