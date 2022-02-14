
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lba_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(lba_t VAR_4)
{
 lba_t VAR_5, VAR_6;

 VAR_5 = (VAR_2 + VAR_3 - 1) / VAR_3;
 VAR_6 = (VAR_1 + VAR_3 - 1) / VAR_3;

 if (VAR_6 != 0 && VAR_4 > VAR_6)
  return (VAR_0);
 if (VAR_4 >= VAR_5)
  return (0);

 return (FUNC_0(VAR_5));
}
