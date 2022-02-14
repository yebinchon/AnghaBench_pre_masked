
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {int bo_list; int ticket; } ;


 int FUNC_0 (int *,int *,int,int *,int) ;

__attribute__((used)) static inline int
FUNC_1(struct vmw_validation_context *VAR_0,
     bool VAR_1)
{
 return FUNC_0(&VAR_0->ticket, &VAR_0->bo_list, VAR_1,
          ((void*)0), 1);
}
