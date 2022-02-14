
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mevent {int me_state; int me_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mevent*,int ) ;
 int FUNC_1 (struct mevent*,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct mevent *VAR_5, bool VAR_6)
{
 int VAR_7;

 FUNC_4();




 FUNC_2((VAR_5->me_state & VAR_0) == 0);

 VAR_7 = VAR_5->me_state;
 if (VAR_6) {
  VAR_7 |= VAR_2;
  VAR_7 &= ~VAR_1;
 } else {
  VAR_7 |= VAR_1;
  VAR_7 &= ~VAR_2;
 }




 if (VAR_5->me_state != VAR_7) {
  VAR_5->me_state = VAR_7;





  if (VAR_5->me_cq == 0) {
   VAR_5->me_cq = 1;
   FUNC_1(VAR_5, VAR_4);
   FUNC_0(&VAR_3, VAR_5, VAR_4);
   FUNC_3();
  }
 }

 FUNC_5();

 return (0);
}
