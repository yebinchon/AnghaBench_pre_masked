
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int window; } ;
typedef TYPE_1__ uiprivDateTimePickerWidget ;
typedef scalar_t__ gint ;
struct TYPE_13__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct TYPE_12__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_11__ {scalar_t__ width; int height; } ;
typedef TYPE_2__ GtkRequisition ;
typedef TYPE_3__ GtkAllocation ;
typedef int GdkWindow ;
typedef int GdkScreen ;
typedef TYPE_4__ GdkRectangle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*,int *) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(uiprivDateTimePickerWidget *VAR_1, gint *VAR_2, gint *VAR_3)
{
 GdkWindow *VAR_4;
 GtkAllocation VAR_5;
 GtkRequisition VAR_6;
 GdkScreen *VAR_7;
 GdkRectangle VAR_8;
 int VAR_9;

 FUNC_4(FUNC_0(VAR_1), &VAR_5);
 FUNC_7(VAR_1->window, &VAR_6, ((void*)0));
 *VAR_2 = 0;
 *VAR_3 = 0;
 if (!FUNC_6(FUNC_0(VAR_1))) {
  *VAR_2 = VAR_5.x;
  *VAR_3 = VAR_5.y;
 }
 VAR_4 = FUNC_9(FUNC_0(VAR_1));
 FUNC_3(VAR_4, *VAR_2, *VAR_3, VAR_2, VAR_3);
 if (FUNC_5(FUNC_0(VAR_1)) == VAR_0)
  *VAR_2 += VAR_5.width - VAR_6.width;


 VAR_7 = FUNC_8(FUNC_0(VAR_1));
 FUNC_2(VAR_7,
  FUNC_1(VAR_7, VAR_4),
  &VAR_8);
 if (*VAR_2 < VAR_8.x)
  *VAR_2 = VAR_8.x;
 else if (*VAR_2 + VAR_6.width > (VAR_8.x + VAR_8.width))
  *VAR_2 = (VAR_8.x + VAR_8.width) - VAR_6.width;


 VAR_9 = *VAR_3 - VAR_6.height;
 *VAR_3 += VAR_5.height;

 if (*VAR_3 + VAR_6.height >= VAR_8.y + VAR_8.height)
  *VAR_3 = VAR_9;
}
