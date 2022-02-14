
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t outgoingSequence; } ;
struct TYPE_8__ {TYPE_2__ netchan; TYPE_4__* frames; } ;
typedef TYPE_3__ client_t ;
struct TYPE_9__ {int num_entities; int first_entity; } ;
typedef TYPE_4__ clientSnapshot_t ;
struct TYPE_10__ {int numSnapshotEntities; TYPE_1__* snapshotEntities; TYPE_3__* clients; } ;
struct TYPE_6__ {int number; } ;


 size_t VAR_0 ;
 TYPE_5__ VAR_1 ;

int FUNC_0( int VAR_2, int VAR_3 ) {
 client_t *VAR_4;
 clientSnapshot_t *VAR_5;

 VAR_4 = &VAR_1.clients[VAR_2];
 VAR_5 = &VAR_4->frames[VAR_4->netchan.outgoingSequence & VAR_0];
 if (VAR_3 < 0 || VAR_3 >= VAR_5->num_entities) {
  return -1;
 }
 return VAR_1.snapshotEntities[(VAR_5->first_entity + VAR_3) % VAR_1.numSnapshotEntities].number;
}
