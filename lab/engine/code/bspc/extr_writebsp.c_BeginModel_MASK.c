
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int maxs; int mins; int numsides; } ;
typedef TYPE_1__ mapbrush_t ;
struct TYPE_8__ {int firstbrush; int numbrushes; } ;
typedef TYPE_2__ entity_t ;
struct TYPE_9__ {int maxs; int mins; void* firstface; } ;
typedef TYPE_3__ dmodel_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;

void FUNC_4 (void)
{
 dmodel_t *VAR_12;
 int VAR_13, VAR_14;
 mapbrush_t *VAR_15;
 int VAR_16;
 entity_t *VAR_17;
 vec3_t VAR_18, VAR_19;

 if (VAR_11 == VAR_0)
  FUNC_2 ("MAX_MAP_MODELS");
 VAR_12 = &VAR_1[VAR_11];

 VAR_12->firstface = VAR_9;

 VAR_6 = VAR_10;
 VAR_4 = VAR_8;
 VAR_5 = VAR_9;




 VAR_17 = &VAR_2[VAR_3];

 VAR_13 = VAR_17->firstbrush;
 VAR_14 = VAR_13 + VAR_17->numbrushes;
 FUNC_1 (VAR_18, VAR_19);

 for (VAR_16=VAR_13 ; VAR_16<VAR_14 ; VAR_16++)
 {
  VAR_15 = &VAR_7[VAR_16];
  if (!VAR_15->numsides)
   continue;
  FUNC_0 (VAR_15->mins, VAR_18, VAR_19);
  FUNC_0 (VAR_15->maxs, VAR_18, VAR_19);
 }

 FUNC_3 (VAR_18, VAR_12->mins);
 FUNC_3 (VAR_19, VAR_12->maxs);
}
