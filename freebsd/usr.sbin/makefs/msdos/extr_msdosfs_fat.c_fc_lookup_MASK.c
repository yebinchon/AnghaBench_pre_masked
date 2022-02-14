
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct fatcache {scalar_t__ fc_frcn; scalar_t__ fc_fsrcn; } ;
struct denode {struct fatcache* de_fc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct denode *VAR_2, u_long VAR_3, u_long *VAR_4, u_long *VAR_5)
{
 int VAR_6;
 u_long VAR_7;
 struct fatcache *VAR_8 = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = VAR_2->de_fc[VAR_6].fc_frcn;
  if (VAR_7 != VAR_0 && VAR_7 <= VAR_3) {
   if (VAR_8 == ((void*)0) || VAR_7 > VAR_8->fc_frcn)
    VAR_8 = &VAR_2->de_fc[VAR_6];
  }
 }
 if (VAR_8) {
  *VAR_4 = VAR_8->fc_frcn;
  *VAR_5 = VAR_8->fc_fsrcn;
 }
}
