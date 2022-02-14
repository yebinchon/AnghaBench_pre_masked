
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min_per; int max_per; int visited; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_3, VAR_4;

 VAR_3 = 100 - ((VAR_1 * 100) / VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (VAR_3 < VAR_2[VAR_4].min_per ||
      VAR_3 > VAR_2[VAR_4].max_per)
   continue;
  if (VAR_2[VAR_4].visited)
   return;
  VAR_2[VAR_4].visited = 1;
  FUNC_1("..%d%%", VAR_3);
  return;
 }
}
