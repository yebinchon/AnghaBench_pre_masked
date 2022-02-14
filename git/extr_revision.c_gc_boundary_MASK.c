
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array {scalar_t__ nr; scalar_t__ alloc; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_array*,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct object_array *VAR_1)
{
 if (VAR_1->nr == VAR_1->alloc)
  FUNC_0(VAR_1, VAR_0, ((void*)0));
}
