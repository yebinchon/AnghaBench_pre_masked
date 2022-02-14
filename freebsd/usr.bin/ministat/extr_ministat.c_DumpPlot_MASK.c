
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plot {scalar_t__ span; int width; int height; int* data; int num_datasets; int** bar; } ;


 int VAR_0 ;
 struct plot VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct plot *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = &VAR_1;
 if (VAR_3->span == 0) {
  FUNC_0("[no plot, span is zero width]\n");
  return;
 }

 FUNC_1('+');
 for (VAR_4 = 0; VAR_4 < VAR_3->width; VAR_4++)
  FUNC_1('-');
 FUNC_1('+');
 FUNC_1('\n');
 for (VAR_4 = 1; VAR_4 < VAR_3->height; VAR_4++) {
  FUNC_1('|');
  for (VAR_5 = 0; VAR_5 < VAR_3->width; VAR_5++) {
   VAR_6 = VAR_3->data[(VAR_3->height - VAR_4) * VAR_3->width + VAR_5];
   if (VAR_6 >= 0 && VAR_6 < VAR_0)
    FUNC_1(VAR_2[VAR_6]);
   else
    FUNC_0("[%02x]", VAR_6);
  }
  FUNC_1('|');
  FUNC_1('\n');
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->num_datasets; VAR_4++) {
  if (VAR_3->bar[VAR_4] == ((void*)0))
   continue;
  FUNC_1('|');
  for (VAR_5 = 0; VAR_5 < VAR_3->width; VAR_5++) {
   VAR_6 = VAR_3->bar[VAR_4][VAR_5];
   if (VAR_6 == 0)
    VAR_6 = ' ';
   FUNC_1(VAR_6);
  }
  FUNC_1('|');
  FUNC_1('\n');
 }
 FUNC_1('+');
 for (VAR_4 = 0; VAR_4 < VAR_3->width; VAR_4++)
  FUNC_1('-');
 FUNC_1('+');
 FUNC_1('\n');
}
