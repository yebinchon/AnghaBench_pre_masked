
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
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct wm97xx*,struct wm97xx_data*) ;
 int FUNC_1 (struct wm97xx*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct wm97xx *VAR_9, struct wm97xx_data *VAR_10)
{
 int VAR_11;

 if (VAR_6) {
  VAR_11 = FUNC_0(VAR_9, VAR_10);
  if (VAR_11 != VAR_1)
   return VAR_11;
 } else {
  VAR_11 = FUNC_1(VAR_9, VAR_3 | VAR_5,
     &VAR_10->x);
  if (VAR_11 != VAR_1)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_9, VAR_4 | VAR_5,
     &VAR_10->y);
  if (VAR_11 != VAR_1)
   return VAR_11;

  if (VAR_8 && !VAR_7) {
   VAR_11 = FUNC_1(VAR_9, VAR_2 | VAR_5,
      &VAR_10->p);
   if (VAR_11 != VAR_1)
    return VAR_11;
  } else
   VAR_10->p = VAR_0;
 }
 return VAR_1;
}
