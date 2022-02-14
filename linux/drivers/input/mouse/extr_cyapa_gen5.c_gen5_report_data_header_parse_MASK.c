
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int state; int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct cyapa *VAR_10, u8 *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_0(&VAR_11[VAR_5]);
 switch (VAR_11[VAR_6]) {
 case 129:
  if (VAR_12 < VAR_7 ||
   VAR_12 > VAR_8)
   return -VAR_2;
  break;
 case 131:
 case 132:
 case 130:
  if (VAR_12 < VAR_3 ||
   VAR_12 > VAR_4)
   return -VAR_2;
  break;
 case 128:
  if (VAR_12 != VAR_9)
   return -VAR_2;
  break;
 default:
  return -VAR_2;
 }

 VAR_10->gen = VAR_0;
 VAR_10->state = VAR_1;
 return 0;
}
