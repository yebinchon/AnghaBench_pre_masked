
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {char* scalar; } ;
struct TYPE_28__ {int type; TYPE_1__ data; } ;
typedef TYPE_5__ yoml_t ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct passwd {int pw_gid; int pw_uid; } ;
struct fastcgi_configurator_t {TYPE_7__* vars; } ;
typedef int sa ;
typedef int h2o_user_buf ;
struct TYPE_27__ {char* base; } ;
struct TYPE_29__ {TYPE_4__ authority; } ;
typedef TYPE_6__ h2o_url_t ;
struct TYPE_26__ {char* data; int dispose; } ;
struct TYPE_30__ {TYPE_3__ callbacks; } ;
typedef TYPE_7__ h2o_fastcgi_config_vars_t ;
struct TYPE_31__ {int pathconf; scalar_t__ dry_run; TYPE_2__* globalconf; } ;
typedef TYPE_8__ h2o_configurator_context_t ;
struct TYPE_32__ {scalar_t__ configurator; } ;
typedef TYPE_9__ h2o_configurator_command_t ;
typedef int argv ;
struct TYPE_25__ {char* user; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;


 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*,char*,char**,struct sockaddr_un*,struct passwd*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_6 (TYPE_9__*,TYPE_5__*,char*,...) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (TYPE_9__*,TYPE_5__*,char*,char*,TYPE_5__***,TYPE_5__***) ;
 int FUNC_9 (int ,TYPE_6__*,TYPE_7__*) ;
 int FUNC_10 (int ,...) ;
 int FUNC_11 (TYPE_6__*,int *,int *,int ,int ) ;
 int FUNC_12 (struct sockaddr_un*,int ,int) ;
 int * FUNC_13 (char*) ;
 int VAR_3 ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(h2o_configurator_command_t *VAR_4, h2o_configurator_context_t *VAR_5, yoml_t *VAR_6)
{
    struct fastcgi_configurator_t *VAR_7 = (void *)VAR_4->configurator;
    char *VAR_8 = VAR_5->globalconf->user, *VAR_9;
    char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    char VAR_12[] = "/tmp/h2o.fcgisock.XXXXXX";
    char *VAR_13[10];
    int VAR_14;
    struct sockaddr_un VAR_15;
    h2o_fastcgi_config_vars_t VAR_16;
    int VAR_17 = -1;
    struct passwd VAR_18, *VAR_19;
    char VAR_20[65536];

    FUNC_12(&VAR_15, 0, sizeof(VAR_15));

    switch (VAR_6->type) {
    case 128:
        VAR_9 = VAR_6->data.scalar;
        break;
    case 129: {
        yoml_t **VAR_21, **VAR_22;
        if (FUNC_8(VAR_4, VAR_6, "command:s", "user:s", &VAR_21, &VAR_22) != 0)
            return -1;
        VAR_9 = (*VAR_21)->data.scalar;
        if (VAR_22 != ((void*)0))
            VAR_8 = (*VAR_22)->data.scalar;
    } break;
    default:
        FUNC_6(VAR_4, VAR_6, "argument must be scalar or mapping");
        return -1;
    }


    if (VAR_5->globalconf->user != ((void*)0)) {

        if (FUNC_5(VAR_5->globalconf->user, &VAR_18, VAR_20, sizeof(VAR_20), &VAR_19) != 0 ||
            VAR_19 == ((void*)0)) {
            FUNC_6(VAR_4, VAR_6, "getpwnam_r(3) failed to obtain uid of user:%s", VAR_5->globalconf->user);
            goto Exit;
        }
    } else {
        VAR_19 = ((void*)0);
    }

    {
        size_t VAR_23 = 0;
        VAR_13[VAR_23++] = VAR_10 = FUNC_7("share/h2o/kill-on-close");
        VAR_13[VAR_23++] = "--rm";
        VAR_13[VAR_23++] = VAR_12;
        VAR_13[VAR_23++] = "--";
        if (VAR_8 != ((void*)0)) {
            VAR_13[VAR_23++] = VAR_11 = FUNC_7("share/h2o/setuidgid");
            VAR_13[VAR_23++] = VAR_8;
        }
        VAR_13[VAR_23++] = "/bin/sh";
        VAR_13[VAR_23++] = "-c";
        VAR_13[VAR_23++] = VAR_9;
        VAR_13[VAR_23++] = ((void*)0);
        FUNC_1(VAR_23 <= sizeof(VAR_13) / sizeof(VAR_13[0]));
    }

    if (VAR_5->dry_run) {
        VAR_12[0] = '\0';
        VAR_14 = -1;
        VAR_15.sun_family = VAR_0;
        FUNC_14(VAR_15.sun_path, "/dry-run.nonexistent");
    } else {

        if (FUNC_13(VAR_12) == ((void*)0)) {
            FUNC_6(VAR_4, VAR_6, "mkdtemp(3) failed to create temporary directory:%s:%s", VAR_12,
                                       FUNC_15(VAR_2));
            VAR_12[0] = '\0';
            goto Exit;
        }

        if (VAR_19 != ((void*)0) && FUNC_2(VAR_12, VAR_19->pw_uid, VAR_19->pw_gid) != 0) {
            FUNC_6(VAR_4, VAR_6, "chown(2) failed to change ownership of temporary directory:%s:%s", VAR_12,
                                       FUNC_15(VAR_2));
            goto Exit;
        }

        if ((VAR_14 = FUNC_3(VAR_4, VAR_6, VAR_12, VAR_13, &VAR_15, VAR_19)) == -1) {
            goto Exit;
        }
    }

    VAR_16 = *VAR_7->vars;
    VAR_16.callbacks.dispose = VAR_3;
    VAR_16.callbacks.data = (char *)((void*)0) + VAR_14;

    h2o_url_t VAR_24;
    FUNC_11(&VAR_24, ((void*)0), &VAR_1, FUNC_10(VAR_15.sun_path, FUNC_16(VAR_15.sun_path)),
                               FUNC_10(FUNC_0("/")));
    FUNC_9(VAR_5->pathconf, &VAR_24, &VAR_16);
    FUNC_4(VAR_24.authority.base);

    VAR_17 = 0;
Exit:
    if (VAR_12[0] != '\0')
        FUNC_17(VAR_12);
    FUNC_4(VAR_10);
    FUNC_4(VAR_11);
    return VAR_17;
}
