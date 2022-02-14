
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * targetname; struct TYPE_4__* teammaster; struct TYPE_4__* teamchain; int team; int inuse; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {int num_entities; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( void ) {
 gentity_t *VAR_4, *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = 0;
 VAR_9 = 0;
 for ( VAR_6=VAR_1, VAR_4=VAR_2+VAR_6 ; VAR_6 < VAR_3.num_entities ; VAR_6++,VAR_4++ ) {
  if (!VAR_4->inuse)
   continue;
  if (!VAR_4->team)
   continue;
  if (VAR_4->flags & VAR_0)
   continue;
  VAR_4->teammaster = VAR_4;
  VAR_8++;
  VAR_9++;
  for (VAR_7=VAR_6+1, VAR_5=VAR_4+1 ; VAR_7 < VAR_3.num_entities ; VAR_7++,VAR_5++)
  {
   if (!VAR_5->inuse)
    continue;
   if (!VAR_5->team)
    continue;
   if (VAR_5->flags & VAR_0)
    continue;
   if (!FUNC_1(VAR_4->team, VAR_5->team))
   {
    VAR_9++;
    VAR_5->teamchain = VAR_4->teamchain;
    VAR_4->teamchain = VAR_5;
    VAR_5->teammaster = VAR_4;
    VAR_5->flags |= VAR_0;


    if ( VAR_5->targetname ) {
     VAR_4->targetname = VAR_5->targetname;
     VAR_5->targetname = ((void*)0);
    }
   }
  }
 }

 FUNC_0 ("%i teams with %i entities\n", VAR_8, VAR_9);
}
