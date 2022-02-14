
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpt_request_info {void* callback_arg; void* callback; } ;
struct ablkcipher_request {int base; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ablkcipher_request *VAR_1,
     struct cpt_request_info *VAR_2)
{
 VAR_2->callback = (void *)VAR_0;
 VAR_2->callback_arg = (void *)&VAR_1->base;
}
