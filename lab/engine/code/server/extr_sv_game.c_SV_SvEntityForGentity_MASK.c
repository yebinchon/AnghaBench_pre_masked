
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svEntity_t ;
struct TYPE_5__ {size_t number; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
typedef TYPE_2__ sharedEntity_t ;
struct TYPE_7__ {int * svEntities; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;

svEntity_t *FUNC_1( sharedEntity_t *VAR_3 ) {
 if ( !VAR_3 || VAR_3->s.number < 0 || VAR_3->s.number >= VAR_1 ) {
  FUNC_0( VAR_0, "SV_SvEntityForGentity: bad gEnt" );
 }
 return &VAR_2.svEntities[ VAR_3->s.number ];
}
