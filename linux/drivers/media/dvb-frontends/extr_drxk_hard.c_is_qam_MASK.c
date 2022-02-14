
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxk_state {scalar_t__ m_operation_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct drxk_state *VAR_3)
{
 return VAR_3->m_operation_mode == VAR_0 ||
     VAR_3->m_operation_mode == VAR_1 ||
     VAR_3->m_operation_mode == VAR_2;
}
