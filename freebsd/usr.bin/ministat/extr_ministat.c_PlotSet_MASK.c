
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plot {scalar_t__ span; char** bar; int width; int x0; int dx; int height; char* data; int num_datasets; scalar_t__ separate_bars; } ;
struct dataset {unsigned int n; int* points; } ;


 int FUNC_0 (struct dataset*) ;
 int FUNC_1 (struct dataset*) ;
 int FUNC_2 (struct dataset*) ;
 int FUNC_3 (int ) ;
 char** FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int) ;
 struct plot VAR_0 ;
 char* FUNC_8 (char*,int) ;

__attribute__((used)) static void
FUNC_9(struct dataset *VAR_1, int VAR_2)
{
 struct plot *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned VAR_8;
 int VAR_9;

 VAR_3 = &VAR_0;
 if (VAR_3->span == 0)
  return;

 if (VAR_3->separate_bars)
  VAR_9 = VAR_2-1;
 else
  VAR_9 = 0;

 if (VAR_3->bar == ((void*)0)) {
  VAR_3->bar = FUNC_4(sizeof(char *), VAR_3->num_datasets);
  FUNC_3(VAR_3->bar != ((void*)0));
 }

 if (VAR_3->bar[VAR_9] == ((void*)0)) {
  VAR_3->bar[VAR_9] = FUNC_6(VAR_3->width);
  FUNC_3(VAR_3->bar[VAR_9] != ((void*)0));
  FUNC_7(VAR_3->bar[VAR_9], 0, VAR_3->width);
 }

 VAR_6 = 1;
 VAR_4 = -1;
 VAR_5 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_1->n; VAR_8++) {
  VAR_7 = (VAR_1->points[VAR_8] - VAR_3->x0) / VAR_3->dx;
  if (VAR_7 == VAR_4) {
   VAR_5++;
   if (VAR_5 > VAR_6)
    VAR_6 = VAR_5;
  } else {
   VAR_5 = 1;
   VAR_4 = VAR_7;
  }
 }
 VAR_6 += 1;
 if (VAR_6 > VAR_3->height) {
  VAR_3->data = FUNC_8(VAR_3->data, VAR_3->width * VAR_6);
  FUNC_3(VAR_3->data != ((void*)0));
  FUNC_7(VAR_3->data + VAR_3->height * VAR_3->width, 0,
      (VAR_6 - VAR_3->height) * VAR_3->width);
 }
 VAR_3->height = VAR_6;
 VAR_4 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_1->n; VAR_8++) {
  VAR_7 = (VAR_1->points[VAR_8] - VAR_3->x0) / VAR_3->dx;
  if (VAR_7 == VAR_4) {
   VAR_5++;
  } else {
   VAR_5 = 1;
   VAR_4 = VAR_7;
  }
  VAR_3->data[VAR_5 * VAR_3->width + VAR_7] |= VAR_2;
 }
 if (!FUNC_5(FUNC_2(VAR_1))) {
  VAR_7 = ((FUNC_0(VAR_1) - FUNC_2(VAR_1)) - VAR_3->x0) / VAR_3->dx;
  VAR_6 = ((FUNC_0(VAR_1) + FUNC_2(VAR_1)) - VAR_3->x0) / VAR_3->dx;
  VAR_3->bar[VAR_9][VAR_6] = '|';
  VAR_3->bar[VAR_9][VAR_7] = '|';
  for (VAR_4 = VAR_7 + 1; VAR_4 < VAR_6; VAR_4++)
   if (VAR_3->bar[VAR_9][VAR_4] == 0)
    VAR_3->bar[VAR_9][VAR_4] = '_';
 }
 VAR_7 = (FUNC_1(VAR_1) - VAR_3->x0) / VAR_3->dx;
 VAR_3->bar[VAR_9][VAR_7] = 'M';
 VAR_7 = (FUNC_0(VAR_1) - VAR_3->x0) / VAR_3->dx;
 VAR_3->bar[VAR_9][VAR_7] = 'A';
}
