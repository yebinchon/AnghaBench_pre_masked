
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swblk {scalar_t__* d; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct swblk *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(0 <= VAR_3 && VAR_3 <= VAR_4 && VAR_4 <= VAR_1);
 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2->d[VAR_5] != VAR_0)
   return (0);
 }
 return (1);
}
