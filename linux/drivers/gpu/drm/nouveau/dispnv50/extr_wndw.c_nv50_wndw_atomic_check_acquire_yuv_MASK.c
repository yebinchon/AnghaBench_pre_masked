
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int format; int colorspace; } ;
struct TYPE_7__ {TYPE_2__* fb; } ;
struct nv50_wndw_atom {TYPE_4__ image; TYPE_3__ state; } ;
struct TYPE_6__ {TYPE_1__* format; } ;
struct TYPE_5__ {int format; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct nv50_wndw_atom *VAR_1)
{
 switch (VAR_1->state.fb->format->format) {
 case 128: VAR_1->image.format = 0x28; break;
 case 129: VAR_1->image.format = 0x29; break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
 VAR_1->image.colorspace = 1;
 return 0;
}
