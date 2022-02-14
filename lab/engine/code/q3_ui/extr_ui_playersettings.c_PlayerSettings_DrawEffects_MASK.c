
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ menuPosition; scalar_t__ y; scalar_t__ x; TYPE_1__* parent; } ;
struct TYPE_7__ {int curvalue; TYPE_2__ generic; } ;
typedef TYPE_3__ menulist_s ;
struct TYPE_8__ {int * fxPic; int fxBasePic; } ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,char*,int,float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 float* VAR_5 ;
 float* VAR_6 ;

__attribute__((used)) static void FUNC_2( void *VAR_7 ) {
 menulist_s *VAR_8;
 qboolean VAR_9;
 int VAR_10;
 float *VAR_11;

 VAR_8 = (menulist_s *)VAR_7;
 VAR_9 = (VAR_8->generic.parent->cursor == VAR_8->generic.menuPosition);

 VAR_10 = VAR_1|VAR_3;
 VAR_11 = VAR_6;
 if( VAR_9 ) {
  VAR_10 |= VAR_2;
  VAR_11 = VAR_5;
 }

 FUNC_1( VAR_8->generic.x, VAR_8->generic.y, "Effects", VAR_10, VAR_11 );

 FUNC_0( VAR_8->generic.x + 64, VAR_8->generic.y + VAR_0 + 8, 128, 8, VAR_4.fxBasePic );
 FUNC_0( VAR_8->generic.x + 64 + VAR_8->curvalue * 16 + 8, VAR_8->generic.y + VAR_0 + 6, 16, 12, VAR_4.fxPic[VAR_8->curvalue] );
}
