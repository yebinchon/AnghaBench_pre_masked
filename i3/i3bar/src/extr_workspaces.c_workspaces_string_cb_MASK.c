
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ws_num ;
struct workspaces_json_params {char* cur_key; TYPE_4__* workspaces_walk; } ;
struct TYPE_5__ {int workspaces; } ;
typedef TYPE_1__ i3_output ;
struct TYPE_7__ {scalar_t__ num; TYPE_1__* output; void* name; int name_width; int canonical_name; } ;
struct TYPE_6__ {scalar_t__ strip_ws_numbers; scalar_t__ strip_ws_name; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__* FUNC_3 (char*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 void* FUNC_6 (char const*,size_t) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (char**,char*,size_t,unsigned char const*) ;
 int FUNC_10 (char*,int,char*,scalar_t__) ;
 int FUNC_11 (char const*,size_t) ;
 int FUNC_12 (char*,char*) ;
 size_t FUNC_13 (char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_14(void *VAR_2, const unsigned char *VAR_3, size_t VAR_4) {
    struct workspaces_json_params *VAR_5 = (struct workspaces_json_params *)VAR_2;

    if (!FUNC_12(VAR_5->cur_key, "name")) {
        const char *VAR_6 = (const char *)VAR_3;
        VAR_5->workspaces_walk->canonical_name = FUNC_11(VAR_6, VAR_4);

        if ((VAR_0.strip_ws_numbers || VAR_0.strip_ws_name) && VAR_5->workspaces_walk->num >= 0) {

            static char VAR_7[10];

            FUNC_10(VAR_7, sizeof(VAR_7), "%d", VAR_5->workspaces_walk->num);


            size_t VAR_8 = FUNC_13(VAR_6, VAR_7);


            if (VAR_8 && VAR_6[VAR_8] == ':')
                VAR_8 += 1;

            if (VAR_0.strip_ws_numbers) {

                VAR_5->workspaces_walk->name = (VAR_8 < VAR_4
                                                     ? FUNC_6(VAR_6 + VAR_8, VAR_4 - VAR_8)
                                                     : FUNC_5(VAR_7));
            } else {
                VAR_5->workspaces_walk->name = FUNC_5(VAR_7);
            }
        } else {

            VAR_5->workspaces_walk->name = FUNC_6(VAR_6, VAR_4);
        }


        VAR_5->workspaces_walk->name_width =
            FUNC_8(VAR_5->workspaces_walk->name);

        FUNC_0("Got workspace canonical: %s, name: '%s', name_width: %d, glyphs: %zu\n",
             VAR_5->workspaces_walk->canonical_name,
             FUNC_4(VAR_5->workspaces_walk->name),
             VAR_5->workspaces_walk->name_width,
             FUNC_7(VAR_5->workspaces_walk->name));
        FUNC_1(VAR_5->cur_key);

        return 1;
    }

    if (!FUNC_12(VAR_5->cur_key, "output")) {

        char *VAR_9 = ((void*)0);
        FUNC_9(&VAR_9, "%.*s", VAR_4, VAR_3);

        i3_output *VAR_10 = FUNC_3(VAR_9);
        if (VAR_10 != ((void*)0)) {
            VAR_5->workspaces_walk->output = VAR_10;

            FUNC_2(VAR_5->workspaces_walk->output->workspaces,
                              VAR_5->workspaces_walk,
                              VAR_1);
        }

        FUNC_1(VAR_9);
        return 1;
    }

    return 0;
}
