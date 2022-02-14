
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; } ;
struct TYPE_9__ {int num; int fullscreen_mode; void* layout; void* name; int type; TYPE_1__ rect; } ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,int *) ;
 int * VAR_6 ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

__attribute__((used)) static Con *FUNC_7(void) {
    Con *VAR_7 = FUNC_4(VAR_6, ((void*)0));
    FUNC_1(VAR_7->name);
    VAR_7->name = FUNC_5("__i3");
    VAR_7->type = VAR_2;
    VAR_7->layout = VAR_4;
    FUNC_3(VAR_6);
    FUNC_6(VAR_7, "[i3 con] pseudo-output __i3");





    VAR_7->rect.width = 1280;
    VAR_7->rect.height = 1024;


    FUNC_0("adding main content container\n");
    Con *VAR_8 = FUNC_4(((void*)0), ((void*)0));
    VAR_8->type = VAR_1;
    FUNC_1(VAR_8->name);
    VAR_8->name = FUNC_5("content");
    VAR_8->layout = VAR_5;

    FUNC_6(VAR_8, "[i3 con] content __i3");
    FUNC_2(VAR_8, VAR_7, 0);


    Con *VAR_9 = FUNC_4(((void*)0), ((void*)0));
    VAR_9->type = VAR_3;
    VAR_9->num = -1;
    VAR_9->name = FUNC_5("__i3_scratch");
    VAR_9->layout = VAR_5;
    FUNC_2(VAR_9, VAR_8, 0);
    FUNC_6(VAR_9, "[i3 con] workspace __i3_scratch");
    VAR_9->fullscreen_mode = VAR_0;

    return VAR_7;
}
