
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thumb2 {int width; int max_height; int min_height; } ;
struct TYPE_5__ {int width; int height; int x; int y; } ;
typedef TYPE_1__ RectangleInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3 (int VAR_2, int VAR_3, struct thumb2 *VAR_4, RectangleInfo *VAR_5, RectangleInfo *VAR_6) {
  FUNC_1 (VAR_5, 0, sizeof (RectangleInfo));
  FUNC_1 (VAR_6, 0, sizeof (RectangleInfo));
  int VAR_7 = 0;
  if (VAR_2 <= VAR_4->width) {
    if (VAR_3 > VAR_4->max_height) {
      VAR_7 |= VAR_0;
      VAR_6->width = VAR_2;
      VAR_6->height = VAR_4->max_height;
      VAR_6->x = VAR_6->y = 0;
    }
    return VAR_7;
  }
  int VAR_8 = FUNC_2 (VAR_2, VAR_4->width, VAR_3);
  if (VAR_8 >= VAR_4->min_height) {
    VAR_7 |= VAR_1;
    VAR_5->width = VAR_4->width;
    VAR_5->height = VAR_8;
    if (VAR_8 > VAR_4->max_height) {
      VAR_7 |= VAR_0;
      VAR_6->width = VAR_4->width;
      VAR_6->height = VAR_4->max_height;
      VAR_6->x = VAR_6->y = 0;
    }
    return VAR_7;
  }
  if (VAR_3 < VAR_4->min_height) {
    VAR_6->width = VAR_4->width;
    VAR_6->height = VAR_3;
    VAR_6->x = (VAR_2 - VAR_4->width) / 2;
    VAR_6->y = 0;
    return VAR_0;
  }
  FUNC_0 (VAR_2 > VAR_4->width && VAR_3 >= VAR_4->min_height);
  int VAR_9 = FUNC_2 (VAR_3, VAR_4->min_height, VAR_2);
  VAR_5->width = VAR_9;
  VAR_5->height = VAR_4->min_height;
  VAR_6->width = VAR_4->width;
  VAR_6->height = VAR_4->min_height;
  VAR_6->x = (VAR_9 - VAR_4->width) / 2;
  VAR_6->y = 0;
  return VAR_1 | VAR_0;
}
