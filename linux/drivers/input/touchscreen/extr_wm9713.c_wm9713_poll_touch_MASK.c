
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_data {int p; int y; int x; } ;
struct wm97xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct wm97xx*,struct wm97xx_data*) ;
 int FUNC_1 (struct wm97xx*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct wm97xx *VAR_8, struct wm97xx_data *VAR_9)
{
 int VAR_10;

 if (VAR_6) {
  VAR_10 = FUNC_0(VAR_8, VAR_9);
  if (VAR_10 != VAR_1)
   return VAR_10;
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_3 | VAR_5, &VAR_9->x);
  if (VAR_10 != VAR_1)
   return VAR_10;
  VAR_10 = FUNC_1(VAR_8, VAR_4 | VAR_5, &VAR_9->y);
  if (VAR_10 != VAR_1)
   return VAR_10;
  if (VAR_7) {
   VAR_10 = FUNC_1(VAR_8, VAR_2 | VAR_5,
      &VAR_9->p);
   if (VAR_10 != VAR_1)
    return VAR_10;
  } else
   VAR_9->p = VAR_0;
 }
 return VAR_1;
}
