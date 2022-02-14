
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_fbdev {TYPE_1__ helper; int preferred_bpp; } ;
typedef int async_cookie_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, async_cookie_t VAR_1)
{
 struct intel_fbdev *VAR_2 = VAR_0;


 if (FUNC_0(&VAR_2->helper,
      VAR_2->preferred_bpp))
  FUNC_1(FUNC_2(VAR_2->helper.dev));
}
