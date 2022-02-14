
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int svFlags; int contents; } ;
struct TYPE_6__ {int angles; } ;
struct TYPE_8__ {TYPE_2__ r; int model; int movedir; TYPE_1__ s; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;

void FUNC_3( gentity_t *VAR_3 ) {
 if (!FUNC_1 (VAR_3->s.angles, VAR_2))
  FUNC_0 (VAR_3->s.angles, VAR_3->movedir);

 FUNC_2( VAR_3, VAR_3->model );
 VAR_3->r.contents = VAR_0;
 VAR_3->r.svFlags = VAR_1;
}
