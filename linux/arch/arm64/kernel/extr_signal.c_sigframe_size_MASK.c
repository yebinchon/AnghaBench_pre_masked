
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_sigframe_user_layout {int size; } ;
struct rt_sigframe {int dummy; } ;


 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ,int) ;

__attribute__((used)) static size_t FUNC_2(struct rt_sigframe_user_layout const *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0->size, sizeof(struct rt_sigframe)), 16);
}
