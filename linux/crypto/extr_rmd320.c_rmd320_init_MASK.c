
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct rmd320_ctx {int buffer; int * state; scalar_t__ byte_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 struct rmd320_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_10)
{
 struct rmd320_ctx *VAR_11 = FUNC_1(VAR_10);

 VAR_11->byte_count = 0;

 VAR_11->state[0] = VAR_0;
 VAR_11->state[1] = VAR_1;
 VAR_11->state[2] = VAR_2;
 VAR_11->state[3] = VAR_3;
 VAR_11->state[4] = VAR_4;
 VAR_11->state[5] = VAR_5;
 VAR_11->state[6] = VAR_6;
 VAR_11->state[7] = VAR_7;
 VAR_11->state[8] = VAR_8;
 VAR_11->state[9] = VAR_9;

 FUNC_0(VAR_11->buffer, 0, sizeof(VAR_11->buffer));

 return 0;
}
