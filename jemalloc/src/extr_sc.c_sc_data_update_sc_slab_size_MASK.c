
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgs; } ;
typedef TYPE_1__ sc_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(sc_t *VAR_2, size_t VAR_3, size_t VAR_4) {
 size_t VAR_5 = VAR_3 / VAR_1;
 if (VAR_3 % VAR_1 != 0) {
  VAR_5++;
 }




 size_t VAR_6 = VAR_0 * VAR_3 / VAR_1;

 FUNC_0(VAR_5 <= VAR_6);
 FUNC_0(VAR_5 > 0);
 FUNC_0(VAR_6 >= 1);
 if (VAR_4 < VAR_5) {
  VAR_2->pgs = (int)VAR_5;
 } else if (VAR_4 > VAR_6) {
  VAR_2->pgs = (int)VAR_6;
 } else {
  VAR_2->pgs = (int)VAR_4;
 }
}
