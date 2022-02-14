
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbdev {scalar_t__ cookie; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct intel_fbdev *VAR_0)
{
 if (!VAR_0->cookie)
  return;


 FUNC_0(VAR_0->cookie + 1);
 VAR_0->cookie = 0;
}
