
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ablkcipher_walk {int buffers; int out; } ;
struct ablkcipher_buffer {int entry; int dst; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct ablkcipher_walk *VAR_0,
       struct ablkcipher_buffer *VAR_1)
{
 VAR_1->dst = VAR_0->out;
 FUNC_0(&VAR_1->entry, &VAR_0->buffers);
}
