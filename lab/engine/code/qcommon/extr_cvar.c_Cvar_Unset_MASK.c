
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t hashIndex; TYPE_2__* hashPrev; TYPE_4__* hashNext; TYPE_1__* prev; struct TYPE_11__* next; scalar_t__ description; scalar_t__ resetString; scalar_t__ latchedString; scalar_t__ string; scalar_t__ name; int flags; } ;
typedef TYPE_3__ cvar_t ;
struct TYPE_12__ {TYPE_2__* hashPrev; } ;
struct TYPE_10__ {TYPE_4__* hashNext; } ;
struct TYPE_9__ {TYPE_3__* next; } ;


 int FUNC_0 (TYPE_3__*,char,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_4__** VAR_2 ;

cvar_t *FUNC_2(cvar_t *VAR_3)
{
 cvar_t *VAR_4 = VAR_3->next;


 VAR_0 |= VAR_3->flags;

 if(VAR_3->name)
  FUNC_1(VAR_3->name);
 if(VAR_3->string)
  FUNC_1(VAR_3->string);
 if(VAR_3->latchedString)
  FUNC_1(VAR_3->latchedString);
 if(VAR_3->resetString)
  FUNC_1(VAR_3->resetString);
 if(VAR_3->description)
  FUNC_1(VAR_3->description);

 if(VAR_3->prev)
  VAR_3->prev->next = VAR_3->next;
 else
  VAR_1 = VAR_3->next;
 if(VAR_3->next)
  VAR_3->next->prev = VAR_3->prev;

 if(VAR_3->hashPrev)
  VAR_3->hashPrev->hashNext = VAR_3->hashNext;
 else
  VAR_2[VAR_3->hashIndex] = VAR_3->hashNext;
 if(VAR_3->hashNext)
  VAR_3->hashNext->hashPrev = VAR_3->hashPrev;

 FUNC_0(VAR_3, '\0', sizeof(*VAR_3));

 return VAR_4;
}
