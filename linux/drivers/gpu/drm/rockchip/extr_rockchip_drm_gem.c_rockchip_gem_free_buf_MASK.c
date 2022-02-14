
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {scalar_t__ pages; } ;


 int FUNC_0 (struct rockchip_gem_object*) ;
 int FUNC_1 (struct rockchip_gem_object*) ;

__attribute__((used)) static void FUNC_2(struct rockchip_gem_object *VAR_0)
{
 if (VAR_0->pages)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
}
