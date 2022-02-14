
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct llentry {int r_skip_req; long lle_remtime; scalar_t__ lle_hittime; } ;


 int FUNC_0 (struct llentry*) ;
 int FUNC_1 (struct llentry*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct llentry *VAR_4, long *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 time_t VAR_10;
 long VAR_11;

 *VAR_6 = 0;
 VAR_8 = VAR_1;
 VAR_7 = VAR_0;

 FUNC_0(VAR_4);
 VAR_9 = VAR_4->r_skip_req;
 VAR_10 = VAR_4->lle_hittime;
 FUNC_1(VAR_4);

 if (VAR_9 > 0) {







  VAR_11 = (long)(FUNC_2(VAR_8, VAR_7));
  VAR_11 *= VAR_2;
  if (VAR_4->lle_remtime > VAR_11)
   VAR_4->lle_remtime -= VAR_11;
  else {
   VAR_11 = VAR_4->lle_remtime;
   VAR_4->lle_remtime = 0;
  }

  if (VAR_11 == 0) {





   return (0);
  }

  *VAR_5 = VAR_11;
  return (1);
 }




 VAR_11 = (long)(VAR_3 - VAR_10);
 if (VAR_11 < VAR_7) {






  *VAR_5 = (long)(VAR_7 - VAR_11) * VAR_2;
  return (1);
 }


 *VAR_6 = 1;
 return (0);
}
