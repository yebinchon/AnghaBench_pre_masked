
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int lba_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;

__attribute__((used)) static lba_t
FUNC_2(u_int VAR_4, lba_t VAR_5)
{

 if (VAR_4 == VAR_2)
  VAR_5 += VAR_0 / VAR_3;
 else if (VAR_4 == VAR_1)
  VAR_5 = FUNC_1(VAR_5);
 else
  VAR_5 = FUNC_0(VAR_5);
 return (VAR_5);
}
