
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int cluster; int area; scalar_t__ contents; scalar_t__ visframe; struct TYPE_14__* parent; } ;
typedef TYPE_4__ mnode_t ;
typedef int byte ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ integer; scalar_t__ modified; } ;
struct TYPE_16__ {int (* Printf ) (int ,char*,int,int) ;} ;
struct TYPE_13__ {int* areamask; int areamaskModified; } ;
struct TYPE_11__ {int pvsOrigin; } ;
struct TYPE_15__ {int viewCluster; scalar_t__ visCount; TYPE_3__ refdef; TYPE_2__* world; TYPE_1__ viewParms; } ;
struct TYPE_12__ {int numnodes; int numClusters; TYPE_4__* nodes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_8__* VAR_4 ;
 TYPE_7__* VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_2 (int ,char*,int,int) ;
 TYPE_5__ VAR_7 ;

__attribute__((used)) static void FUNC_3 (void) {
 const byte *VAR_8;
 mnode_t *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;



 if ( VAR_3->integer ) {
  return;
 }


 VAR_9 = FUNC_1( VAR_7.viewParms.pvsOrigin );
 VAR_12 = VAR_9->cluster;





 if ( VAR_7.viewCluster == VAR_12 && !VAR_7.refdef.areamaskModified
  && !VAR_5->modified ) {
  return;
 }

 if ( VAR_5->modified || VAR_5->integer ) {
  VAR_5->modified = VAR_2;
  if ( VAR_5->integer ) {
   VAR_6.Printf( VAR_1, "cluster:%i  area:%i\n", VAR_12, VAR_9->area );
  }
 }

 VAR_7.visCount++;
 VAR_7.viewCluster = VAR_12;

 if ( VAR_4->integer || VAR_7.viewCluster == -1 ) {
  for (VAR_11=0 ; VAR_11<VAR_7.world->numnodes ; VAR_11++) {
   if (VAR_7.world->nodes[VAR_11].contents != VAR_0) {
    VAR_7.world->nodes[VAR_11].visframe = VAR_7.visCount;
   }
  }
  return;
 }

 VAR_8 = FUNC_0 (VAR_7.viewCluster);

 for (VAR_11=0,VAR_9=VAR_7.world->nodes ; VAR_11<VAR_7.world->numnodes ; VAR_11++, VAR_9++) {
  VAR_12 = VAR_9->cluster;
  if ( VAR_12 < 0 || VAR_12 >= VAR_7.world->numClusters ) {
   continue;
  }


  if ( !(VAR_8[VAR_12>>3] & (1<<(VAR_12&7))) ) {
   continue;
  }


  if ( (VAR_7.refdef.areamask[VAR_9->area>>3] & (1<<(VAR_9->area&7)) ) ) {
   continue;
  }

  VAR_10 = VAR_9;
  do {
   if (VAR_10->visframe == VAR_7.visCount)
    break;
   VAR_10->visframe = VAR_7.visCount;
   VAR_10 = VAR_10->parent;
  } while (VAR_10);
 }
}
