
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gint ;
typedef double gfloat ;
typedef int cellRendererButton ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int width; int height; } ;
typedef TYPE_1__ PangoRectangle ;
typedef int PangoLayout ;
typedef int GtkWidget ;
typedef TYPE_2__ GdkRectangle ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,double*,double*) ;
 int FUNC_2 (int ,int*,int*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(cellRendererButton *VAR_1, GtkWidget *VAR_2, PangoLayout *VAR_3, const GdkRectangle *VAR_4, gint *VAR_5, gint *VAR_6, gint *VAR_7, gint *VAR_8)
{
 PangoRectangle VAR_9;
 gint VAR_10, VAR_11;
 gfloat VAR_12, VAR_13;

 FUNC_2(FUNC_0(VAR_1), &VAR_10, &VAR_11);
 FUNC_4(VAR_3, ((void*)0), &VAR_9);
 if (VAR_9.width > VAR_4->width - (2 * VAR_10))
  VAR_9.width = VAR_4->width - (2 * VAR_10);
 if (VAR_9.height > VAR_4->height - (2 * VAR_11))
  VAR_9.height = VAR_4->height - (2 * VAR_11);

 FUNC_1(FUNC_0(VAR_1), &VAR_12, &VAR_13);
 if (FUNC_3(VAR_2) == VAR_0)
  VAR_12 = 1.0 - VAR_12;
 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_4->width - (VAR_9.width + (2 * VAR_10));
  *VAR_5 = (gint) ((gfloat) (*VAR_5) * VAR_12);
 }
 if (VAR_6 != ((void*)0)) {
  *VAR_6 = VAR_4->height - (VAR_9.height + (2 * VAR_11));
  *VAR_6 = (gint) ((gfloat) (*VAR_6) * VAR_13);
  if (*VAR_6 < 0)
   *VAR_6 = 0;
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_9.width - (2 * VAR_10);
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_9.height - (2 * VAR_11);
}
