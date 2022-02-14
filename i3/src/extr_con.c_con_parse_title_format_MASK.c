
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int placeholders ;
struct TYPE_7__ {char* name; char* value; } ;
typedef TYPE_1__ placeholder_t ;
struct TYPE_8__ {char* class_class; char* class_instance; int * name; } ;
typedef TYPE_2__ i3Window ;
typedef int i3String ;
struct TYPE_9__ {int * title_format; TYPE_2__* window; } ;
typedef TYPE_3__ Con ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *,TYPE_1__*,size_t const) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int const) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

i3String *FUNC_10(Con *VAR_0) {
    FUNC_1(VAR_0->title_format != ((void*)0));

    i3Window *VAR_1 = VAR_0->window;



    const bool VAR_2 = FUNC_3();

    char *VAR_3;
    char *VAR_4;
    char *VAR_5;
    if (VAR_1 == ((void*)0)) {
        VAR_3 = FUNC_8(FUNC_2(VAR_0));
        VAR_4 = FUNC_9("i3-frame");
        VAR_5 = FUNC_9("i3-frame");
    } else {
        VAR_3 = FUNC_8(FUNC_9((VAR_1->name == ((void*)0)) ? "" : FUNC_5(VAR_1->name)));
        VAR_4 = FUNC_8(FUNC_9((VAR_1->class_class == ((void*)0)) ? "" : VAR_1->class_class));
        VAR_5 = FUNC_8(FUNC_9((VAR_1->class_instance == ((void*)0)) ? "" : VAR_1->class_instance));
    }

    placeholder_t VAR_6[] = {
        {.name = "%title", .value = VAR_3},
        {.name = "%class", .value = VAR_4},
        {.name = "%instance", .value = VAR_5}};
    const size_t VAR_7 = sizeof(VAR_6) / sizeof(placeholder_t);

    char *VAR_8 = FUNC_4(VAR_0->title_format, &VAR_6[0], VAR_7);
    i3String *VAR_9 = FUNC_6(VAR_8);
    FUNC_7(VAR_9, VAR_2);
    FUNC_0(VAR_8);

    for (size_t VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        FUNC_0(VAR_6[VAR_10].value);
    }

    return VAR_9;
}
