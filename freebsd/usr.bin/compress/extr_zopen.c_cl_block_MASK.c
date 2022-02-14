
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_zstate {int dummy; } ;
typedef int count_int ;
typedef int code_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct s_zstate*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct s_zstate*,int ) ;
 long VAR_9 ;

__attribute__((used)) static int
FUNC_2(struct s_zstate *VAR_10)
{
 long VAR_11;

 VAR_4 = VAR_8 + VAR_0;

 if (VAR_8 > 0x007fffff) {
  VAR_11 = VAR_3 >> 8;
  if (VAR_11 == 0)
   VAR_11 = 0x7fffffff;
  else
   VAR_11 = VAR_8 / VAR_11;
 } else
  VAR_11 = (VAR_8 << 8) / VAR_3;
 if (VAR_11 > VAR_9)
  VAR_9 = VAR_11;
 else {
  VAR_9 = 0;
  FUNC_0(VAR_10, (count_int) VAR_7);
  VAR_6 = VAR_2;
  VAR_5 = 1;
  if (FUNC_1(VAR_10, (code_int) VAR_1) == -1)
   return (-1);
 }
 return (0);
}
