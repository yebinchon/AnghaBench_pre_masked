
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_req_ctx {int * hash; scalar_t__ byte_count; scalar_t__ len; int buf; } ;
struct md5_state {int * hash; int block; scalar_t__ byte_count; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sun4i_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(struct ahash_request *VAR_4, void *VAR_5)
{
 struct sun4i_req_ctx *VAR_6 = FUNC_0(VAR_4);
 struct md5_state *VAR_7 = VAR_5;
 int VAR_8;

 VAR_7->byte_count = VAR_6->byte_count + VAR_6->len;

 FUNC_1(VAR_7->block, VAR_6->buf, VAR_6->len);

 if (VAR_6->byte_count) {
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   VAR_7->hash[VAR_8] = VAR_6->hash[VAR_8];
 } else {
  VAR_7->hash[0] = VAR_0;
  VAR_7->hash[1] = VAR_1;
  VAR_7->hash[2] = VAR_2;
  VAR_7->hash[3] = VAR_3;
 }

 return 0;
}
