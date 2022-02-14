
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {scalar_t__ destroy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct ttm_buffer_object *VAR_2)
{

 if (VAR_2->destroy != VAR_0 &&
     VAR_2->destroy != VAR_1)
  return;


 FUNC_0(FUNC_1(VAR_2));
}
