
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Error ) (int ,char*,int,int) ;} ;
struct TYPE_3__ {int numVertexes; int numIndexes; int fogNum; int shader; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 TYPE_1__ VAR_4 ;

void FUNC_4( int VAR_5, int VAR_6 ) {
 if (VAR_4.numVertexes + VAR_5 < VAR_2
  && VAR_4.numIndexes + VAR_6 < VAR_1) {
  return;
 }

 FUNC_1();

 if ( VAR_5 >= VAR_2 ) {
  VAR_3.Error(VAR_0, "RB_CheckOverflow: verts > MAX (%d > %d)", VAR_5, VAR_2 );
 }
 if ( VAR_6 >= VAR_1 ) {
  VAR_3.Error(VAR_0, "RB_CheckOverflow: indices > MAX (%d > %d)", VAR_6, VAR_1 );
 }

 FUNC_0(VAR_4.shader, VAR_4.fogNum );
}
