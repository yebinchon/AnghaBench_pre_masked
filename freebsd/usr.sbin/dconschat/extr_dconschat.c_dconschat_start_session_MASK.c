
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dcons_state*) ;
 int FUNC_2 (struct dcons_state*) ;
 int FUNC_3 (struct dcons_state*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct dcons_state *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = FUNC_0(1, VAR_2 / 10);
 int VAR_9 = VAR_2 * VAR_0;
 int VAR_10 = VAR_8;
 int VAR_11 = VAR_9 / VAR_10;

 while (1) {
  if (((VAR_5->flags & VAR_1) == 0) && ++VAR_6 > VAR_10) {
   VAR_6 = 0;
   VAR_7 ++;
   if (VAR_7 > VAR_11)
    VAR_10 = VAR_9;
   if (VAR_4) {
    FUNC_5("%d/%d ", VAR_7, VAR_11);
    FUNC_4(VAR_3);
   }
   FUNC_1(VAR_5);
  }
  if ((VAR_5->flags & VAR_1) != 0) {
   VAR_6 = 0;
   VAR_7 = 0;
   VAR_10 = VAR_8;
   FUNC_2(VAR_5);
  }
  FUNC_3(VAR_5);
 }
 return (0);
}
