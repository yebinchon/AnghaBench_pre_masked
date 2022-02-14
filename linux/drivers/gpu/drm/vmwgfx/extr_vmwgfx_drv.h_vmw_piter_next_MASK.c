
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {int (* next ) (struct vmw_piter*) ;} ;


 int FUNC_0 (struct vmw_piter*) ;

__attribute__((used)) static inline bool FUNC_1(struct vmw_piter *VAR_0)
{
 return VAR_0->next(VAR_0);
}
