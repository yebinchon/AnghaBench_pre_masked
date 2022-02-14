
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pango_desc; } ;
struct TYPE_7__ {int type; int height; TYPE_1__ specific; } ;
typedef TYPE_2__ i3Font ;
typedef int gint ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_8__ {int root; } ;
typedef int PangoLayout ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int,int) ;
 int VAR_2 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int ) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_14(i3Font *VAR_5, const char *VAR_6) {

    VAR_5->specific.pango_desc = FUNC_9(VAR_6);
    if (!VAR_5->specific.pango_desc) {
        FUNC_0("Could not open font %s with Pango, fallback to X font.\n", VAR_6);
        return 0;
    }

    FUNC_1("Using Pango font %s, size %d\n",
        FUNC_10(VAR_5->specific.pango_desc),
        FUNC_11(VAR_5->specific.pango_desc) / VAR_1);




    VAR_4 = FUNC_8(VAR_3);


    cairo_surface_t *VAR_7 = FUNC_5(VAR_2, VAR_3->root, VAR_4, 1, 1);
    cairo_t *VAR_8 = FUNC_2(VAR_7);
    PangoLayout *VAR_9 = FUNC_6(VAR_8);
    FUNC_13(VAR_9, VAR_5->specific.pango_desc);


    gint VAR_10;
    FUNC_12(VAR_9, ((void*)0), &VAR_10);
    VAR_5->height = VAR_10;


    FUNC_7(VAR_9);
    FUNC_3(VAR_8);
    FUNC_4(VAR_7);


    VAR_5->type = VAR_0;
    return 1;
}
