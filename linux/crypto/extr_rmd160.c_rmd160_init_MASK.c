
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct rmd160_ctx {int buffer; int * state; scalar_t__ byte_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 struct rmd160_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_5)
{
 struct rmd160_ctx *VAR_6 = FUNC_1(VAR_5);

 VAR_6->byte_count = 0;

 VAR_6->state[0] = VAR_0;
 VAR_6->state[1] = VAR_1;
 VAR_6->state[2] = VAR_2;
 VAR_6->state[3] = VAR_3;
 VAR_6->state[4] = VAR_4;

 FUNC_0(VAR_6->buffer, 0, sizeof(VAR_6->buffer));

 return 0;
}
