
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** next; TYPE_2__** nodes; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_7__ {scalar_t__ planenum; int cluster; int contents; TYPE_1__* portals; struct TYPE_7__** children; int detail_seperator; } ;
typedef TYPE_2__ node_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2 (node_t *VAR_4)
{
 portal_t *VAR_5;

 if (VAR_4->planenum != VAR_1 && !VAR_4->detail_seperator)
 {
  VAR_4->cluster = -99;
  FUNC_2 (VAR_4->children[0]);
  FUNC_2 (VAR_4->children[1]);
  return;
 }



 if ( VAR_4->contents & VAR_0 )
 {
  VAR_4->cluster = -1;
  return;
 }

 FUNC_0 (VAR_4, VAR_2);
 VAR_2++;


 for (VAR_5 = VAR_4->portals ; VAR_5 ; )
 {
  if (VAR_5->nodes[0] == VAR_4)
  {
   if (FUNC_1 (VAR_5))
    VAR_3++;
   VAR_5 = VAR_5->next[0];
  }
  else
   VAR_5 = VAR_5->next[1];
 }

}
