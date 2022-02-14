
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int button; int obutton; int dz; int dy; int dx; int flags; } ;
typedef TYPE_1__ mousestatus_t ;
struct TYPE_8__ {int wmode; int* zmap; } ;
struct TYPE_7__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;


 int* VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_0(mousestatus_t *VAR_5, mousestatus_t *VAR_6)
{
    register int VAR_7;
    register int VAR_8;
    int VAR_9;

    VAR_8 = VAR_5->button;
    VAR_9 = 0;

    VAR_6->obutton = VAR_6->button;
    if (VAR_8 & VAR_3.wmode) {
 VAR_8 &= ~VAR_3.wmode;
 VAR_5->dz = VAR_5->dy;
 VAR_5->dx = 0;
 VAR_5->dy = 0;
    }
    VAR_6->dx = VAR_5->dx;
    VAR_6->dy = VAR_5->dy;
    VAR_6->dz = VAR_5->dz;

    switch (VAR_3.zmap[0]) {
    case 0:
 break;
    case 129:
 if (VAR_5->dz != 0) {
     VAR_6->dx = VAR_5->dz;
     VAR_6->dz = 0;
 }
 break;
    case 128:
 if (VAR_5->dz != 0) {
     VAR_6->dy = VAR_5->dz;
     VAR_6->dz = 0;
 }
 break;
    default:
 VAR_8 &= ~(VAR_3.zmap[0] | VAR_3.zmap[1]
      | VAR_3.zmap[2] | VAR_3.zmap[3]);
 if ((VAR_5->dz < -1) && VAR_3.zmap[2]) {
     VAR_8 |= VAR_3.zmap[2];
     VAR_4[2].count = 1;
 } else if (VAR_5->dz < 0) {
     VAR_8 |= VAR_3.zmap[0];
     VAR_4[0].count = 1;
 } else if ((VAR_5->dz > 1) && VAR_3.zmap[3]) {
     VAR_8 |= VAR_3.zmap[3];
     VAR_4[3].count = 1;
 } else if (VAR_5->dz > 0) {
     VAR_8 |= VAR_3.zmap[1];
     VAR_4[1].count = 1;
 }
 VAR_6->dz = 0;
 break;
    }

    for (VAR_7 = 0; (VAR_7 < VAR_0) && (VAR_8 != 0); ++VAR_7) {
 VAR_9 |= (VAR_8 & 1) ? VAR_2[VAR_7] : 0;
 VAR_8 >>= 1;
    }
    VAR_6->button = VAR_9;

    VAR_6->flags = ((VAR_6->dx || VAR_6->dy || VAR_6->dz) ? VAR_1 : 0)
 | (VAR_6->obutton ^ VAR_6->button);
}
