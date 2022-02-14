
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sharedEntity_t ;
typedef int byte ;
struct TYPE_2__ {int gentitySize; scalar_t__ gentities; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0( sharedEntity_t *VAR_1 ) {
 int VAR_2;

 VAR_2 = ( (byte *)VAR_1 - (byte *)VAR_0.gentities ) / VAR_0.gentitySize;

 return VAR_2;
}
