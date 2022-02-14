
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_13__ {scalar_t__ timeout; int entitynum; size_t iteminfo; scalar_t__* origin; int flags; void* goalareanum; int goalorigin; scalar_t__ number; struct TYPE_13__* next; } ;
typedef TYPE_2__ levelitem_t ;
struct TYPE_14__ {int numiteminfo; TYPE_1__* iteminfo; } ;
typedef TYPE_3__ itemconfig_t ;
struct TYPE_15__ {scalar_t__* origin; scalar_t__* lastvisorigin; } ;
typedef TYPE_4__ aas_entityinfo_t ;
struct TYPE_12__ {int modelindex; int maxs; int mins; int classname; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__*,int ,int ,int ) ;
 int FUNC_2 (int,TYPE_4__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (scalar_t__*,scalar_t__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_15(void)
{
 int VAR_10, VAR_11, VAR_12;
 vec3_t VAR_13;
 levelitem_t *VAR_14, *VAR_15;
 aas_entityinfo_t VAR_16;
 itemconfig_t *VAR_17;


 for (VAR_14 = VAR_8; VAR_14; VAR_14 = VAR_15)
 {
  VAR_15 = VAR_14->next;

  if (VAR_14->timeout)
  {

   if (VAR_14->timeout < FUNC_6())
   {
    FUNC_11(VAR_14);
    FUNC_9(VAR_14);
   }
  }
 }

 VAR_17 = VAR_7;
 if (!VAR_7) return;

 for (VAR_10 = FUNC_5(0); VAR_10; VAR_10 = FUNC_5(VAR_10))
 {
  if (FUNC_4(VAR_10) != VAR_0) continue;

  VAR_12 = FUNC_3(VAR_10);

  if (!VAR_12) continue;

  FUNC_2(VAR_10, &VAR_16);




  if (VAR_16.origin[0] != VAR_16.lastvisorigin[0] ||
    VAR_16.origin[1] != VAR_16.lastvisorigin[1] ||
    VAR_16.origin[2] != VAR_16.lastvisorigin[2]) continue;

  for (VAR_14 = VAR_8; VAR_14; VAR_14 = VAR_14->next)
  {

   if (VAR_14->entitynum && VAR_14->entitynum == VAR_10)
   {

    if (VAR_17->iteminfo[VAR_14->iteminfo].modelindex != VAR_12)
    {

     FUNC_11(VAR_14);
     FUNC_9(VAR_14);
     VAR_14 = ((void*)0);
     break;
    }
    else
    {
     if (VAR_16.origin[0] != VAR_14->origin[0] ||
      VAR_16.origin[1] != VAR_14->origin[1] ||
      VAR_16.origin[2] != VAR_14->origin[2])
     {
      FUNC_12(VAR_16.origin, VAR_14->origin);

      VAR_14->goalareanum = FUNC_1(VAR_14->origin,
          VAR_17->iteminfo[VAR_14->iteminfo].mins, VAR_17->iteminfo[VAR_14->iteminfo].maxs,
          VAR_14->goalorigin);
     }
     break;
    }
   }
  }
  if (VAR_14) continue;

  for (VAR_14 = VAR_8; VAR_14; VAR_14 = VAR_14->next)
  {

   if (VAR_14->entitynum) continue;

   if (VAR_6 == VAR_1) {
    if (VAR_14->flags & VAR_4) continue;
   }
   else if (VAR_6 >= VAR_2) {
    if (VAR_14->flags & VAR_5) continue;
   }
   else {
    if (VAR_14->flags & VAR_3) continue;
   }

   if (VAR_17->iteminfo[VAR_14->iteminfo].modelindex == VAR_12)
   {

    FUNC_14(VAR_14->origin, VAR_16.origin, VAR_13);
    if (FUNC_13(VAR_13) < 30)
    {

     VAR_14->entitynum = VAR_10;

     if (VAR_16.origin[0] != VAR_14->origin[0] ||
      VAR_16.origin[1] != VAR_14->origin[1] ||
      VAR_16.origin[2] != VAR_14->origin[2])
     {

      FUNC_12(VAR_16.origin, VAR_14->origin);

      VAR_14->goalareanum = FUNC_1(VAR_14->origin,
          VAR_17->iteminfo[VAR_14->iteminfo].mins, VAR_17->iteminfo[VAR_14->iteminfo].maxs,
          VAR_14->goalorigin);
     }



     break;
    }
   }
  }
  if (VAR_14) continue;

  for (VAR_11 = 0; VAR_11 < VAR_17->numiteminfo; VAR_11++)
  {
   if (VAR_17->iteminfo[VAR_11].modelindex == VAR_12)
   {
    break;
   }
  }

  if (VAR_11 >= VAR_17->numiteminfo) continue;

  VAR_14 = FUNC_8();

  if (!VAR_14) continue;

  VAR_14->entitynum = VAR_10;

  VAR_14->number = VAR_9 + VAR_10;

  VAR_14->iteminfo = VAR_11;

  FUNC_12(VAR_16.origin, VAR_14->origin);

  VAR_14->goalareanum = FUNC_1(VAR_14->origin,
         VAR_17->iteminfo[VAR_11].mins, VAR_17->iteminfo[VAR_11].maxs,
         VAR_14->goalorigin);

  if (FUNC_0(VAR_14->goalareanum))
  {
   FUNC_9(VAR_14);
   continue;
  }


  VAR_14->timeout = FUNC_6() + 30;

  FUNC_7(VAR_14);

 }
}
