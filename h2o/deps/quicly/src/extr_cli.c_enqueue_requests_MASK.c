
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_stream_data_t {int * outfp; } ;
struct TYPE_6__ {struct st_stream_data_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;
typedef int quicly_conn_t ;
struct TYPE_7__ {char* path; scalar_t__ to_file; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (int *,TYPE_1__**,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (char*,char*,char*) ;
 int VAR_4 ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static void FUNC_10(quicly_conn_t *VAR_5)
{
    size_t VAR_6;
    int VAR_7;

    for (VAR_6 = 0; VAR_3[VAR_6].path != ((void*)0); ++VAR_6) {
        char VAR_8[1024], VAR_9[1024];
        quicly_stream_t *VAR_10;
        VAR_7 = FUNC_4(VAR_5, &VAR_10, 0);
        FUNC_0(VAR_7 == 0);
        FUNC_7(VAR_8, "GET %s\r\n", VAR_3[VAR_6].path);
        FUNC_6(VAR_10, VAR_8);
        FUNC_5(VAR_10);

        if (VAR_3[VAR_6].to_file) {
            struct st_stream_data_t *VAR_11 = VAR_10->data;
            FUNC_7(VAR_9, "%s.downloaded", FUNC_9(VAR_3[VAR_6].path, '/') + 1);
            VAR_11->outfp = FUNC_2(VAR_9, "w");
            if (VAR_11->outfp == ((void*)0)) {
                FUNC_3(VAR_4, "failed to open destination file:%s:%s\n", VAR_3[VAR_6].path, FUNC_8(VAR_2));
                FUNC_1(1);
            }
        }
    }
    VAR_1 = VAR_0;
}
