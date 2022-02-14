
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; scalar_t__ colorspace; } ;
struct TYPE_7__ {TYPE_4__* fb; } ;
struct nv50_wndw_atom {TYPE_1__ image; TYPE_3__ state; } ;
struct TYPE_8__ {TYPE_2__* format; } ;
struct TYPE_6__ {int format; } ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nv50_wndw_atom *VAR_1)
{
 switch (VAR_1->state.fb->format->format) {
 case 135 : VAR_1->image.format = 0x1e; break;
 case 128 :
 case 136 : VAR_1->image.format = 0xcf; break;
 case 134 : VAR_1->image.format = 0xe8; break;
 case 130 :
 case 138 : VAR_1->image.format = 0xe9; break;
 case 132 :
 case 140 : VAR_1->image.format = 0xd1; break;
 case 131 :
 case 139 : VAR_1->image.format = 0xd5; break;
 case 129 :
 case 137 : VAR_1->image.format = 0xdf; break;
 case 133:
 case 141: VAR_1->image.format = 0xca; break;
 default:
  return -VAR_0;
 }
 VAR_1->image.colorspace = 0;
 return 0;
}
