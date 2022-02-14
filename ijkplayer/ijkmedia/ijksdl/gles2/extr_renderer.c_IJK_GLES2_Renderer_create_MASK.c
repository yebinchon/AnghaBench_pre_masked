
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int format; } ;
struct TYPE_13__ {int format; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ IJK_GLES2_Renderer ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
IJK_GLES2_Renderer *FUNC_9(SDL_VoutOverlay *VAR_4)
{
    if (!VAR_4)
        return ((void*)0);

    FUNC_8("Version", VAR_3);
    FUNC_8("Vendor", VAR_2);
    FUNC_8("Renderer", VAR_1);
    FUNC_8("Extensions", VAR_0);

    IJK_GLES2_Renderer *VAR_5 = ((void*)0);
    switch (VAR_4->format) {
        case 132: VAR_5 = FUNC_1(); break;
        case 131: VAR_5 = FUNC_2(); break;
        case 130: VAR_5 = FUNC_3(); break;




        case 129: VAR_5 = FUNC_4(); break;
        case 135: VAR_5 = FUNC_4(); break;
        case 134: VAR_5 = FUNC_7(); break;
        default:
            FUNC_0("[GLES2] unknown format %4s(%d)\n", (char *)&VAR_4->format, VAR_4->format);
            return ((void*)0);
    }

    VAR_5->format = VAR_4->format;
    return VAR_5;
}
