
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct caam_hash_state {int buflen_1; int buflen_0; scalar_t__ current_buf; } ;



__attribute__((used)) static inline int *FUNC_0(struct caam_hash_state *VAR_0)
{
 return VAR_0->current_buf ? &VAR_0->buflen_1 : &VAR_0->buflen_0;
}
