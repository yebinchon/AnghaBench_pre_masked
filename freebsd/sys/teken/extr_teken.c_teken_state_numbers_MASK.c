
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t t_curnum; int t_stateflags; char* t_nums; } ;
typedef TYPE_1__ teken_t ;
typedef char teken_char_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(teken_t *VAR_4, teken_char_t VAR_5)
{

 FUNC_0(VAR_4->t_curnum < VAR_1);

 if (VAR_5 >= '0' && VAR_5 <= '9') {
  if (VAR_4->t_stateflags & VAR_0) {

   VAR_4->t_stateflags &= ~VAR_0;
   VAR_4->t_nums[VAR_4->t_curnum] = VAR_5 - '0';
  } else if (VAR_4->t_nums[VAR_4->t_curnum] < VAR_2 / 100) {
   VAR_4->t_nums[VAR_4->t_curnum] =
       VAR_4->t_nums[VAR_4->t_curnum] * 10 + VAR_5 - '0';
  }
  return (1);
 } else if (VAR_5 == ';') {
  if (VAR_4->t_stateflags & VAR_0)
   VAR_4->t_nums[VAR_4->t_curnum] = 0;


  if (++VAR_4->t_curnum == VAR_1) {
   FUNC_1(VAR_4, VAR_3);
   return (1);
  }

  VAR_4->t_stateflags |= VAR_0;
  return (1);
 } else {
  if (VAR_4->t_stateflags & VAR_0 && VAR_4->t_curnum > 0) {

   VAR_4->t_nums[VAR_4->t_curnum] = 0;
   VAR_4->t_curnum++;
  } else if ((VAR_4->t_stateflags & VAR_0) == 0) {

   VAR_4->t_curnum++;
  }
 }

 return (0);
}
