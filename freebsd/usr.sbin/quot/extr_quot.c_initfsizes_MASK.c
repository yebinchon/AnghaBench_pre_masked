
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsizes {scalar_t__* fsz_sz; scalar_t__* fsz_count; struct fsizes* fsz_next; } ;


 int VAR_0 ;
 struct fsizes* VAR_1 ;

__attribute__((used)) static void
FUNC_0(void)
{
 struct fsizes *VAR_2;
 int VAR_3;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->fsz_next) {
  for (VAR_3 = VAR_0; --VAR_3 >= 0;) {
   VAR_2->fsz_count[VAR_3] = 0;
   VAR_2->fsz_sz[VAR_3] = 0;
  }
 }
}
