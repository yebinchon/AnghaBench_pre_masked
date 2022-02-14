
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int x; int y; size_t id; int flags; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int parent; } ;
struct TYPE_7__ {TYPE_1__ generic; } ;
typedef TYPE_2__ menuaction_s ;
struct TYPE_9__ {int bind1; int bind2; char* label; } ;
struct TYPE_8__ {scalar_t__ waitingforkey; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int,int,int,int ) ;
 int FUNC_3 (int,int,char*,int,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void FUNC_8( void *VAR_17 )
{
 menuaction_s* VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 qboolean VAR_23;
 char VAR_24[32];
 char VAR_25[32];

 VAR_18 = (menuaction_s*) VAR_17;

 VAR_19 = VAR_18->generic.x;
 VAR_20 = VAR_18->generic.y;

 VAR_23 = (FUNC_0( VAR_18->generic.parent ) == VAR_18);

 VAR_21 = VAR_12[VAR_18->generic.id].bind1;
 if (VAR_21 == -1)
  FUNC_6(VAR_24,"???");
 else
 {
  FUNC_7( VAR_21, VAR_24, 32 );
  FUNC_1(VAR_24);

  VAR_22 = VAR_12[VAR_18->generic.id].bind2;
  if (VAR_22 != -1)
  {
   FUNC_7( VAR_22, VAR_25, 32 );
   FUNC_1(VAR_25);

   FUNC_5( VAR_24, " or " );
   FUNC_5( VAR_24, VAR_25 );
  }
 }

 if (VAR_23)
 {
  FUNC_4( VAR_18->generic.left, VAR_18->generic.top, VAR_18->generic.right-VAR_18->generic.left+1, VAR_18->generic.bottom-VAR_18->generic.top+1, VAR_13 );

  FUNC_3( VAR_19 - VAR_3, VAR_20, VAR_12[VAR_18->generic.id].label, VAR_8|VAR_9, VAR_16 );
  FUNC_3( VAR_19 + VAR_3, VAR_20, VAR_24, VAR_6|VAR_9|VAR_7, VAR_16 );

  if (VAR_14.waitingforkey)
  {
   FUNC_2( VAR_19, VAR_20, '=', VAR_5|VAR_4|VAR_9, VAR_16);
   FUNC_3(VAR_2 * 0.50, VAR_1 * 0.80, "Waiting for new key ... ESCAPE to cancel", VAR_9|VAR_5|VAR_7, VAR_10 );
  }
  else
  {
   FUNC_2( VAR_19, VAR_20, 13, VAR_5|VAR_4|VAR_9, VAR_16);
   FUNC_3(VAR_2 * 0.50, VAR_1 * 0.78, "Press ENTER or CLICK to change", VAR_9|VAR_5, VAR_10 );
   FUNC_3(VAR_2 * 0.50, VAR_1 * 0.82, "Press BACKSPACE to clear", VAR_9|VAR_5, VAR_10 );
  }
 }
 else
 {
  if (VAR_18->generic.flags & VAR_0)
  {
   FUNC_3( VAR_19 - VAR_3, VAR_20, VAR_12[VAR_18->generic.id].label, VAR_8|VAR_9, VAR_15 );
   FUNC_3( VAR_19 + VAR_3, VAR_20, VAR_24, VAR_6|VAR_9, VAR_15 );
  }
  else
  {
   FUNC_3( VAR_19 - VAR_3, VAR_20, VAR_12[VAR_18->generic.id].label, VAR_8|VAR_9, VAR_11 );
   FUNC_3( VAR_19 + VAR_3, VAR_20, VAR_24, VAR_6|VAR_9, VAR_11 );
  }
 }
}
