
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_22__ {size_t size; TYPE_12__* entries; } ;
typedef TYPE_4__ iovec_vector_t ;
struct TYPE_19__ {void* path; void* authority; int * scheme; void* method; } ;
struct TYPE_18__ {int version; void* entity; int headers; int pool; TYPE_10__* hostconf; int pathconf; int query_at; void* path; void* path_normalized; TYPE_1__ input; void* authority; int * scheme; void* method; } ;
struct TYPE_23__ {TYPE_13__ req; } ;
typedef TYPE_5__ h2o_loopback_conn_t ;
struct TYPE_24__ {int member_0; void* document_root; int member_1; } ;
typedef TYPE_6__ h2o_fastcgi_config_vars_t ;
struct TYPE_25__ {TYPE_2__* globalconf; } ;
struct TYPE_21__ {int entries; } ;
struct TYPE_20__ {TYPE_10__** hosts; } ;
struct TYPE_17__ {int len; int base; } ;
struct TYPE_16__ {TYPE_3__ paths; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_13__*,TYPE_4__*,int,int,TYPE_6__*) ;
 int FUNC_2 (TYPE_12__*,size_t*,int,int ) ;
 TYPE_9__ VAR_4 ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 void* FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (TYPE_9__*,TYPE_10__**) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    h2o_loopback_conn_t *VAR_5 = FUNC_5(&VAR_4, VAR_4.globalconf->hosts);
    h2o_fastcgi_config_vars_t VAR_6 = {5000, 0};
    iovec_vector_t VAR_7;
    size_t VAR_8;

    VAR_5->req.input.method = VAR_5->req.method = FUNC_4(FUNC_0("GET"));
    VAR_5->req.input.scheme = VAR_5->req.scheme = &VAR_2;
    VAR_5->req.input.authority = VAR_5->req.authority = FUNC_4(FUNC_0("localhost"));
    VAR_5->req.input.path = VAR_5->req.path = FUNC_4(FUNC_0("/"));
    VAR_5->req.path_normalized = VAR_5->req.path;
    VAR_5->req.query_at = VAR_3;
    VAR_5->req.version = 0x101;
    VAR_5->req.hostconf = *VAR_4.globalconf->hosts;
    VAR_5->req.pathconf = VAR_5->req.hostconf->paths.entries;
    FUNC_3(&VAR_5->req.pool, &VAR_5->req.headers, VAR_0, ((void*)0), FUNC_0("foo=bar"));
    FUNC_3(&VAR_5->req.pool, &VAR_5->req.headers, VAR_1, ((void*)0),
                   FUNC_0("Mozilla/5.0 (X11; Linux) KHTML/4.9.1 (like Gecko) Konqueror/4.9"));


    FUNC_1(&VAR_5->req, &VAR_7, 0x1234, 65535, &VAR_6);
    FUNC_8(FUNC_7(VAR_7.entries[0].base, VAR_7.entries[0].len,
                 FUNC_0("\x01\x01\x12\x34\x00\x08\x00\x00"
                            "\x00\x01\0\0\0\0\0\0")));
    VAR_8 = 1;
    FUNC_8(FUNC_2(VAR_7.entries, &VAR_8, 0x1234,
                    FUNC_0("\x0b\x00SCRIPT_NAME"
                               "\x09\x01PATH_INFO/"
                               "\x0c\x00QUERY_STRING"
                               "\x0b\x09REMOTE_ADDR127.0.0.1"
                               "\x0b\x05REMOTE_PORT55555"
                               "\x0e\x03REQUEST_METHODGET"
                               "\x09\x09HTTP_HOSTlocalhost"
                               "\x0b\x01REQUEST_URI/"
                               "\x0b\x09SERVER_ADDR127.0.0.1"
                               "\x0b\x02SERVER_PORT80"
                               "\x0b\x07SERVER_NAMEdefault"
                               "\x0f\x08SERVER_PROTOCOLHTTP/1.1"
                               "\x0f\x10SERVER_SOFTWAREh2o/1.2.1-alpha1"
                               "\x0f\x3fHTTP_USER_AGENTMozilla/5.0 (X11; Linux) KHTML/4.9.1 (like Gecko) Konqueror/4.9"
                               "\x0b\x07HTTP_COOKIEfoo=bar"
                               )));
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len, FUNC_0("\x01\x05\x12\x34\x00\x00\x00\x00")));
    ++VAR_8;
    FUNC_8(VAR_8 == VAR_7.size);


    VAR_6.document_root = FUNC_4(FUNC_0("/var/www/htdocs"));
    FUNC_3(&VAR_5->req.pool, &VAR_5->req.headers, VAR_0, ((void*)0), FUNC_0("hoge=fuga"));
    VAR_5->req.entity = FUNC_4(FUNC_0("The above copyright notice and this permission notice shall be included in all "
                                                 "copies or substantial portions of the Software."));
    FUNC_1(&VAR_5->req, &VAR_7, 0x1234, 64, &VAR_6);
    FUNC_8(FUNC_7(VAR_7.entries[0].base, VAR_7.entries[0].len,
                 FUNC_0("\x01\x01\x12\x34\x00\x08\x00\x00"
                            "\x00\x01\0\0\0\0\0\0")));
    VAR_8 = 1;
    FUNC_8(FUNC_2(VAR_7.entries, &VAR_8, 0x1234,
                    FUNC_0("\x0e\x03"
                               "CONTENT_LENGTH126"
                               "\x0b\x00SCRIPT_NAME"
                               "\x09\x01PATH_INFO/"
                               "\x0d\x0f"
                               "DOCUMENT_ROOT/var/www/htdocs"
                               "\x0f\x10PATH_TRANSLATED/var/www/htdocs/"
                               "\x0c\x00QUERY_STRING"
                               "\x0b\x09REMOTE_ADDR127.0.0.1"
                               "\x0b\x05REMOTE_PORT55555"
                               "\x0e\x03REQUEST_METHODGET"
                               "\x09\x09HTTP_HOSTlocalhost"
                               "\x0b\x01REQUEST_URI/"
                               "\x0b\x09SERVER_ADDR127.0.0.1"
                               "\x0b\x02SERVER_PORT80"
                               "\x0b\x07SERVER_NAMEdefault"
                               "\x0f\x08SERVER_PROTOCOLHTTP/1.1"
                               "\x0f\x10SERVER_SOFTWAREh2o/1.2.1-alpha1"
                               "\x0f\x3fHTTP_USER_AGENTMozilla/5.0 (X11; Linux) KHTML/4.9.1 (like Gecko) Konqueror/4.9"
                               "\x0b\x11HTTP_COOKIEfoo=bar;hoge=fuga"
                               )));
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len, FUNC_0("\x01\x05\x12\x34\x00\x40\x00\x00")));
    ++VAR_8;
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len,
                 FUNC_0("The above copyright notice and this permission notice shall be i")));
    ++VAR_8;
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len, FUNC_0("\x01\x05\x12\x34\x00\x3e\x00\x00")));
    ++VAR_8;
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len,
                 FUNC_0("ncluded in all copies or substantial portions of the Software.")));
    ++VAR_8;
    FUNC_8(FUNC_7(VAR_7.entries[VAR_8].base, VAR_7.entries[VAR_8].len, FUNC_0("\x01\x05\x12\x34\x00\x00\x00\x00")));
    ++VAR_8;
    FUNC_8(VAR_8 == VAR_7.size);

    FUNC_6(VAR_5);
}
