
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct cpt_request_info {int rlen; TYPE_1__* out; } ;
struct TYPE_2__ {size_t size; void* vptr; } ;



__attribute__((used)) static inline void FUNC_0(struct cpt_request_info *VAR_0,
        u8 *VAR_1, u32 VAR_2,
        u32 *VAR_3)
{

 VAR_0->out[*VAR_3].vptr = (void *)VAR_1;
 VAR_0->out[*VAR_3].size = VAR_2;
 VAR_0->rlen += VAR_2;

 ++(*VAR_3);
}
