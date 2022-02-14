
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int reply_count; int* reply; struct TYPE_2__* next; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 () ;
 size_t VAR_10 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int * VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_5 (unsigned long) ;
 int* VAR_14 ;

__attribute__((used)) static void FUNC_6(int VAR_15)
{
 int VAR_16;

 if (!VAR_15) {
  VAR_13->flags |= VAR_1;
  VAR_13->flags |= VAR_2;
 } else {
  VAR_13->reply_count = VAR_11;
  if (VAR_13->reply_count > VAR_9)
   VAR_13->reply_count = 0;
  for (VAR_16 = 0; VAR_16 < VAR_13->reply_count; VAR_16++)
   VAR_13->reply[VAR_16] = VAR_14[VAR_16];

  if (VAR_13->flags & (VAR_4 | VAR_8)) {
   unsigned long VAR_17;
   VAR_17 = FUNC_0();
   VAR_13->length = FUNC_2();
   FUNC_5(VAR_17);
  }

  if ((VAR_13->flags & VAR_5) &&
      (!VAR_13->reply_count || (VAR_13->reply[0] & 0xc0)))
   VAR_13->flags |= VAR_1;

  if (FUNC_1(VAR_10))
   VAR_13->flags |= VAR_0;
  else
   VAR_13->flags &= ~VAR_0;
  if (VAR_13->flags & VAR_3)
   FUNC_4(&VAR_12[VAR_10]);

  if (VAR_13->next &&
      (!(VAR_13->flags & VAR_1) ||
       !(VAR_13->flags & VAR_6)) &&
      ((VAR_13->flags & VAR_1) ||
       !(VAR_13->flags & VAR_7))) {
   VAR_13 = VAR_13->next;
   return;
  }
 }
 FUNC_3(VAR_15);
}
