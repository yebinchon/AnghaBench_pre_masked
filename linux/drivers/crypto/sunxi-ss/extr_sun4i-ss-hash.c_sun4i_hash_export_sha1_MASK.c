
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_req_ctx {int * hash; scalar_t__ byte_count; scalar_t__ len; int buf; } ;
struct sha1_state {int * state; int buffer; scalar_t__ count; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sun4i_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(struct ahash_request *VAR_5, void *VAR_6)
{
 struct sun4i_req_ctx *VAR_7 = FUNC_0(VAR_5);
 struct sha1_state *VAR_8 = VAR_6;
 int VAR_9;

 VAR_8->count = VAR_7->byte_count + VAR_7->len;

 FUNC_1(VAR_8->buffer, VAR_7->buf, VAR_7->len);

 if (VAR_7->byte_count) {
  for (VAR_9 = 0; VAR_9 < 5; VAR_9++)
   VAR_8->state[VAR_9] = VAR_7->hash[VAR_9];
 } else {
  VAR_8->state[0] = VAR_0;
  VAR_8->state[1] = VAR_1;
  VAR_8->state[2] = VAR_2;
  VAR_8->state[3] = VAR_3;
  VAR_8->state[4] = VAR_4;
 }

 return 0;
}
