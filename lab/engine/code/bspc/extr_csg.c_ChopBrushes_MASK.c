
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* next; } ;
typedef TYPE_1__ bspbrush_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (char*,TYPE_1__*,int) ;
 int FUNC_10 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_1 ;

bspbrush_t *FUNC_12 (bspbrush_t *VAR_2)
{
 bspbrush_t *VAR_3, *VAR_4, *VAR_5;
 bspbrush_t *VAR_6;
 bspbrush_t *VAR_7;
 bspbrush_t *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 FUNC_6("-------- Brush CSG ---------\n");
 FUNC_6("%6d original brushes\n", FUNC_3 (VAR_2));

 VAR_12 = 0;
 FUNC_11("%6d output brushes", VAR_12);





 VAR_7 = ((void*)0);

newlist:

 if (!VAR_2) return ((void*)0);

 for (VAR_6 = VAR_2; VAR_6->next; VAR_6 = VAR_6->next)
  ;

 for (VAR_3=VAR_2 ; VAR_3 ; VAR_3=VAR_5)
 {
  VAR_5 = VAR_3->next;


  if (VAR_0)
  {
   VAR_3->next = VAR_7;
   VAR_7 = VAR_3;
   continue;
  }

  for (VAR_4 = VAR_3->next; VAR_4; VAR_4 = VAR_4->next)
  {
   if (FUNC_2 (VAR_3, VAR_4))
    continue;

   VAR_8 = ((void*)0);
   VAR_9 = ((void*)0);
   VAR_10 = 999999;
   VAR_11 = 999999;

   if (FUNC_1 (VAR_4, VAR_3))
   {
    VAR_8 = FUNC_8 (VAR_3, VAR_4);
    if (VAR_8 == VAR_3)
    {
     continue;
    }
    if (!VAR_8)
    {
     VAR_2 = FUNC_4 (VAR_3, VAR_3);
     goto newlist;
    }
    VAR_10 = FUNC_3 (VAR_8);
   }

   if ( FUNC_1 (VAR_3, VAR_4) )
   {
    VAR_9 = FUNC_8 (VAR_4, VAR_3);
    if (VAR_9 == VAR_4)
     continue;
    if (!VAR_9)
    {
     FUNC_5 (VAR_8);
     VAR_2 = FUNC_4 (VAR_3, VAR_4);
     goto newlist;
    }
    VAR_11 = FUNC_3 (VAR_9);
   }

   if (!VAR_8 && !VAR_9)
    continue;



   if (VAR_10 > 1 && VAR_11 > 1)
   {
    if (VAR_9)
     FUNC_5 (VAR_9);
    if (VAR_8)
     FUNC_5 (VAR_8);
    continue;
   }

   if (VAR_10 < VAR_11)
   {
    if (VAR_9) FUNC_5 (VAR_9);
    VAR_6 = FUNC_0 (VAR_8, VAR_6);
    VAR_2 = FUNC_4 (VAR_3, VAR_3);
    goto newlist;
   }
   else
   {
    if (VAR_8) FUNC_5 (VAR_8);
    VAR_6 = FUNC_0 (VAR_9, VAR_6);
    VAR_2 = FUNC_4 (VAR_3, VAR_4);
    goto newlist;
   }
  }

  if (!VAR_4)
  {
   VAR_3->next = VAR_7;
   VAR_7 = VAR_3;
  }
  VAR_12++;
  FUNC_11("\r%6d", VAR_12);
 }

 if (VAR_0) return VAR_7;

 FUNC_11("\n");
 FUNC_7("%6d output brushes\r\n", VAR_12);
 return VAR_7;
}
