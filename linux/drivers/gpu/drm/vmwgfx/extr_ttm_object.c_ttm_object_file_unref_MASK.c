
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int refcount; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct ttm_object_file **VAR_1)
{
 struct ttm_object_file *VAR_2 = *VAR_1;

 *VAR_1 = ((void*)0);
 FUNC_0(&VAR_2->refcount, VAR_0);
}
