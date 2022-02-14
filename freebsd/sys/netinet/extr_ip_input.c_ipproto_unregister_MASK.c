
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protosw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct protosw* VAR_7 ;
 int* VAR_8 ;
 struct protosw* FUNC_0 (int ,int ,int ) ;

int
FUNC_1(short VAR_9)
{
 struct protosw *VAR_10;


 if (VAR_9 <= 0 || VAR_9 >= VAR_3)
  return (VAR_2);


 VAR_10 = FUNC_0(VAR_5, VAR_4, VAR_6);
 if (VAR_10 == ((void*)0))
  return (VAR_1);
 if (VAR_8[VAR_9] == VAR_10 - VAR_7)
  return (VAR_0);


 VAR_8[VAR_9] = VAR_10 - VAR_7;
 return (0);
}
