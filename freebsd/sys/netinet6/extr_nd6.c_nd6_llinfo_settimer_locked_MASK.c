
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {long ln_ntick; int lle_timer; scalar_t__ la_expire; } ;


 long VAR_0 ;
 int FUNC_0 (struct llentry*) ;
 int FUNC_1 (struct llentry*) ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (int *,long,int ,struct llentry*) ;
 int FUNC_4 (int *) ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct llentry *VAR_4, long VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4);

 if (VAR_5 < 0) {
  VAR_4->la_expire = 0;
  VAR_4->ln_ntick = 0;
  VAR_6 = FUNC_4(&VAR_4->lle_timer);
 } else {
  VAR_4->la_expire = VAR_3 + VAR_5 / VAR_1;
  FUNC_0(VAR_4);
  if (VAR_5 > VAR_0) {
   VAR_4->ln_ntick = VAR_5 - VAR_0;
   VAR_6 = FUNC_3(&VAR_4->lle_timer, VAR_0,
       VAR_2, VAR_4);
  } else {
   VAR_4->ln_ntick = 0;
   VAR_6 = FUNC_3(&VAR_4->lle_timer, VAR_5,
       VAR_2, VAR_4);
  }
 }
 if (VAR_6 > 0)
  FUNC_1(VAR_4);
}
