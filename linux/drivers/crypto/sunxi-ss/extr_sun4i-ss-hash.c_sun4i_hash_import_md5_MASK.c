
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_req_ctx {int byte_count; int len; int * hash; int buf; } ;
struct md5_state {int byte_count; int * hash; int block; } ;
struct ahash_request {int dummy; } ;


 struct sun4i_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ahash_request*) ;

int FUNC_3(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct sun4i_req_ctx *VAR_2 = FUNC_0(VAR_0);
 const struct md5_state *VAR_3 = VAR_1;
 int VAR_4;

 FUNC_2(VAR_0);

 VAR_2->byte_count = VAR_3->byte_count & ~0x3F;
 VAR_2->len = VAR_3->byte_count & 0x3F;

 FUNC_1(VAR_2->buf, VAR_3->block, VAR_2->len);

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_2->hash[VAR_4] = VAR_3->hash[VAR_4];

 return 0;
}
