
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_crtc {TYPE_1__* master; } ;
struct TYPE_2__ {scalar_t__ dual_link; } ;



__attribute__((used)) static unsigned long
FUNC_0(struct komeda_crtc *VAR_0,
     unsigned long VAR_1)
{



 if (VAR_0->master->dual_link)
  return VAR_1 * 2;
 else
  return VAR_1;
}
