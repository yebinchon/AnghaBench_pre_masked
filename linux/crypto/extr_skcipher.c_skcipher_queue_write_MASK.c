
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk_buffer {int entry; int dst; } ;
struct skcipher_walk {int buffers; int out; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct skcipher_walk *VAR_0,
     struct skcipher_walk_buffer *VAR_1)
{
 VAR_1->dst = VAR_0->out;
 FUNC_0(&VAR_1->entry, &VAR_0->buffers);
}
