
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_host {void* msg_base; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct carm_host *VAR_1,
     unsigned int VAR_2)
{
 return VAR_1->msg_base + (VAR_2 * VAR_0);
}
