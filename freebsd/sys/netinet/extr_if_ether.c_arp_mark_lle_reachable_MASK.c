
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {int la_flags; int la_preempt; scalar_t__ la_asked; int lle_timer; scalar_t__ la_expire; int ln_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct llentry*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct llentry*) ;
 int FUNC_2 (struct llentry*) ;
 int VAR_2 ;
 int FUNC_3 (struct llentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int,int ,struct llentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_5(struct llentry *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_3(VAR_10);

 VAR_10->ln_state = VAR_0;
 FUNC_0(VAR_8, VAR_10, VAR_1);

 if (!(VAR_10->la_flags & VAR_2)) {
  FUNC_1(VAR_10);
  VAR_10->la_expire = VAR_9 + VAR_4;
  VAR_12 = VAR_4 - VAR_3 * VAR_5;
  if (VAR_12 < 0)
   VAR_12 = VAR_4;
  VAR_11 = FUNC_4(&VAR_10->lle_timer,
      VAR_7 * VAR_12, VAR_6, VAR_10);
  if (VAR_11)
   FUNC_2(VAR_10);
 }
 VAR_10->la_asked = 0;
 VAR_10->la_preempt = VAR_3;
}
