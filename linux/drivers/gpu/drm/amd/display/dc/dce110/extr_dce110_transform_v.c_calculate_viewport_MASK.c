
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int width; int height; } ;
struct scaler_data {scalar_t__ format; TYPE_1__ viewport; } ;
struct rect {int x; int y; int width; int height; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(
  const struct scaler_data *VAR_1,
  struct rect *VAR_2,
  struct rect *VAR_3)
{

 VAR_2->x = VAR_1->viewport.x - VAR_1->viewport.x % 2;
 VAR_2->y = VAR_1->viewport.y - VAR_1->viewport.y % 2;
 VAR_2->width =
  VAR_1->viewport.width - VAR_1->viewport.width % 2;
 VAR_2->height =
  VAR_1->viewport.height - VAR_1->viewport.height % 2;
 VAR_3->x = VAR_2->x;
 VAR_3->y = VAR_2->y;
 VAR_3->height = VAR_2->height;
 VAR_3->width = VAR_2->width;

 if (VAR_1->format == VAR_0) {
  VAR_2->height += VAR_2->height % 2;
  VAR_2->width += VAR_2->width % 2;



  VAR_3->x = VAR_2->x / 2;
  VAR_3->y = VAR_2->y / 2;
  VAR_3->height = VAR_2->height / 2;
  VAR_3->width = VAR_2->width / 2;
 }
}
