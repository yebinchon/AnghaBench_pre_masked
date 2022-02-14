
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gint ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_6__ {int root; } ;
struct TYPE_4__ {int pango_desc; } ;
struct TYPE_5__ {TYPE_1__ specific; } ;
typedef int PangoLayout ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,int,int) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int*,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char const*,size_t) ;
 int FUNC_10 (int *,char const*,size_t) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_11(const char *VAR_4, size_t VAR_5, bool VAR_6) {


    cairo_surface_t *VAR_7 = FUNC_3(VAR_0, VAR_1->root, VAR_2, 1, 1);
    cairo_t *VAR_8 = FUNC_0(VAR_7);
    PangoLayout *VAR_9 = FUNC_4(VAR_8);


    gint VAR_10;
    FUNC_8(VAR_9, VAR_3->specific.pango_desc);

    if (VAR_6)
        FUNC_9(VAR_9, VAR_4, VAR_5);
    else
        FUNC_10(VAR_9, VAR_4, VAR_5);

    FUNC_6(VAR_8, VAR_9);
    FUNC_7(VAR_9, &VAR_10, ((void*)0));


    FUNC_5(VAR_9);
    FUNC_1(VAR_8);
    FUNC_2(VAR_7);

    return VAR_10;
}
