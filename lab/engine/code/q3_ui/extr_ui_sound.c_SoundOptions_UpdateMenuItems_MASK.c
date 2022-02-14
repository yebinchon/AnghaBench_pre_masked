
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {TYPE_6__ generic; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_13__ {scalar_t__ curvalue; TYPE_1__ generic; } ;
struct TYPE_12__ {scalar_t__ curvalue; } ;
struct TYPE_11__ {scalar_t__ curvalue; } ;
struct TYPE_10__ {scalar_t__ curvalue; } ;
struct TYPE_16__ {scalar_t__ sfxvolume_original; scalar_t__ musicvolume_original; scalar_t__ soundSystem_original; scalar_t__ quality_original; TYPE_7__ apply; TYPE_5__ quality; TYPE_4__ soundSystem; TYPE_3__ musicvolume; TYPE_2__ sfxvolume; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_8__ VAR_4 ;

__attribute__((used)) static void FUNC_0( void )
{
 if ( VAR_4.soundSystem.curvalue == VAR_3 )
 {
  VAR_4.quality.generic.flags &= ~VAR_0;
 }
 else
 {
  VAR_4.quality.generic.flags |= VAR_0;
 }

 VAR_4.apply.generic.flags |= VAR_1|VAR_2;

 if ( VAR_4.sfxvolume_original != VAR_4.sfxvolume.curvalue )
 {
  VAR_4.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.musicvolume_original != VAR_4.musicvolume.curvalue )
 {
  VAR_4.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.soundSystem_original != VAR_4.soundSystem.curvalue )
 {
  VAR_4.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
 if ( VAR_4.quality_original != VAR_4.quality.curvalue )
 {
  VAR_4.apply.generic.flags &= ~(VAR_1|VAR_2);
 }
}
