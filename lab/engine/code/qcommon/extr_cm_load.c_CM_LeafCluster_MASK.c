
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numLeafs; TYPE_1__* leafs; } ;
struct TYPE_3__ {int cluster; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_1( int VAR_2 ) {
 if (VAR_2 < 0 || VAR_2 >= VAR_1.numLeafs) {
  FUNC_0 (VAR_0, "CM_LeafCluster: bad number");
 }
 return VAR_1.leafs[VAR_2].cluster;
}
