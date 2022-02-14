
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p4_event_bind {int** cntr; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_1(int VAR_1, unsigned long *VAR_2,
   struct p4_event_bind *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_3->cntr[VAR_1][VAR_4];
  if (VAR_5 != -1 && !FUNC_0(VAR_5, VAR_2))
   return VAR_5;
 }

 return -1;
}
