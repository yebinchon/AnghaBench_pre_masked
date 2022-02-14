
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
struct TYPE_20__ {char* string; } ;
typedef TYPE_1__ token_t ;
struct TYPE_21__ {size_t planenum; int texinfo; } ;
typedef TYPE_2__ side_t ;
typedef int script_t ;
typedef int qboolean ;
struct TYPE_22__ {int numsides; int contents; TYPE_2__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;
struct TYPE_23__ {struct TYPE_23__* next; } ;
typedef TYPE_4__ epair_t ;
struct TYPE_24__ {int firstbrush; int numbrushes; int areaportalnum; scalar_t__* origin; TYPE_4__* epairs; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_25__ {int normal; scalar_t__ dist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,char*,scalar_t__*) ;
 size_t VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,char*,char*) ;
 int FUNC_11 (TYPE_7__*,int *,scalar_t__*) ;
 char* FUNC_12 (TYPE_5__*,char*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_7__* VAR_6 ;
 int FUNC_13 (TYPE_5__*,int ,int) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;

qboolean FUNC_16(script_t *VAR_10)
{
 entity_t *VAR_11;
 epair_t *VAR_12;
 side_t *VAR_13;
 int VAR_14, VAR_15;
 vec_t VAR_16;
 mapbrush_t *VAR_17;
 token_t VAR_18;

 if (!FUNC_5(VAR_10, &VAR_18)) return 0;

 if (FUNC_15(VAR_18.string, "{") )
  FUNC_1 ("ParseEntity: { not found");

 if (VAR_7 == VAR_1)
  FUNC_1 ("num_entities == MAX_MAP_ENTITIES");

 VAR_11 = &VAR_4[VAR_7];
 VAR_7++;
 FUNC_13 (VAR_11, 0, sizeof(*VAR_11));
 VAR_11->firstbrush = VAR_8;
 VAR_11->numbrushes = 0;



 do
 {
  if (!FUNC_5(VAR_10, &VAR_18))
  {
   FUNC_1("ParseEntity: EOF without closing brace");
  }
  if (!FUNC_15(VAR_18.string, "}")) break;
  if (!FUNC_15(VAR_18.string, "{"))
  {
   FUNC_9(VAR_10, VAR_11);
  }
  else
  {
   FUNC_6(VAR_10);
   VAR_12 = FUNC_7(VAR_10);
   VAR_12->next = VAR_11->epairs;
   VAR_11->epairs = VAR_12;
  }
 } while(1);

 FUNC_3(VAR_11, "origin", VAR_11->origin);




 if (VAR_11->origin[0] || VAR_11->origin[1] || VAR_11->origin[2])
 {
  for (VAR_14=0 ; VAR_14<VAR_11->numbrushes ; VAR_14++)
  {
   VAR_17 = &VAR_5[VAR_11->firstbrush + VAR_14];
   for (VAR_15=0 ; VAR_15<VAR_17->numsides ; VAR_15++)
   {
    VAR_13 = &VAR_17->original_sides[VAR_15];
    VAR_16 = VAR_6[VAR_13->planenum].dist -
     FUNC_0 (VAR_6[VAR_13->planenum].normal, VAR_11->origin);
    VAR_13->planenum = FUNC_2 (VAR_6[VAR_13->planenum].normal, VAR_16);
    VAR_13->texinfo = FUNC_11 (&VAR_6[VAR_13->planenum],
     &VAR_9[VAR_13-VAR_2], VAR_11->origin);
   }
   FUNC_4 (VAR_17);
  }
 }



 if (!FUNC_15 ("func_group", FUNC_12 (VAR_11, "classname")))
 {
  FUNC_8 (VAR_11);
  VAR_11->numbrushes = 0;
  return 1;
 }



 if (!FUNC_15 ("func_areaportal", FUNC_12 (VAR_11, "classname")))
 {
  char VAR_19[128];

  if (VAR_11->numbrushes != 1)
   FUNC_1 ("Entity %i: func_areaportal can only be a single brush", VAR_7-1);

  VAR_17 = &VAR_5[VAR_8-1];
  VAR_17->contents = VAR_0;
  VAR_3++;
  VAR_11->areaportalnum = VAR_3;

  FUNC_14 (VAR_19, "%i", VAR_3);
  FUNC_10 (VAR_11, "style", VAR_19);
  FUNC_8 (VAR_11);
  return 1;
 }

 return 1;
}
