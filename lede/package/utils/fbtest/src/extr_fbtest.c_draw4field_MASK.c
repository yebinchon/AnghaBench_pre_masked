
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidsize {int height; int width; } ;
struct rect {int height; int width; int x; int y; struct colour* col; } ;
struct pixelformat {scalar_t__ pixenum; } ;
struct colour {int r; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct colour* VAR_2 ;
 int FUNC_0 (void*,struct rect*,struct pixelformat const*,struct vidsize const*) ;

void FUNC_1(void *VAR_3, const struct pixelformat *VAR_4, const struct vidsize *VAR_5){
 struct rect VAR_6;
 struct colour VAR_7;
 int VAR_8, VAR_9;
 VAR_7.r = 1;
 VAR_8 = VAR_5->height;
 VAR_9 = VAR_5->width;

 VAR_6.height = VAR_8>>1;
 VAR_6.width = VAR_9>>1;
 VAR_6.x = 0; VAR_6.y = 0;
 if (VAR_4->pixenum==VAR_0||VAR_4->pixenum==VAR_1) VAR_6.col = &VAR_7;
 else VAR_6.col = &VAR_2[1];
 FUNC_0 (VAR_3, &VAR_6, VAR_4, VAR_5);

 VAR_6.x = VAR_9/2; VAR_6.y = 0;
 if (VAR_4->pixenum==VAR_0||VAR_4->pixenum==VAR_1) VAR_7.r = 2;
 else VAR_6.col = &VAR_2[2];
 FUNC_0 (VAR_3, &VAR_6, VAR_4, VAR_5);

 VAR_6.x = 0; VAR_6.y = VAR_8/2;
 if (VAR_4->pixenum==VAR_0||VAR_4->pixenum==VAR_1) VAR_7.r = 3;
 else VAR_6.col = &VAR_2[3];
 FUNC_0 (VAR_3, &VAR_6, VAR_4, VAR_5);

 VAR_6.x = VAR_9/2; VAR_6.y = VAR_8/2;
 if (VAR_4->pixenum==VAR_0||VAR_4->pixenum==VAR_1) VAR_7.r = 0;
 else VAR_6.col = &VAR_2[0];
 FUNC_0 (VAR_3, &VAR_6, VAR_4, VAR_5);
}
