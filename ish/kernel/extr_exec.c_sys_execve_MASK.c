
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int threadname ;
struct statbuf {int mode; int gid; int uid; } ;
struct sigaction_ {scalar_t__ handler; } ;
struct fd {TYPE_2__* mount; } ;
struct TYPE_9__ {char* comm; int did_exec; TYPE_3__* sighand; int files; int general_lock; int egid; int sgid; int euid; int suid; } ;
struct TYPE_8__ {int lock; scalar_t__ altstack; struct sigaction_* action; } ;
struct TYPE_7__ {TYPE_1__* fs; } ;
struct TYPE_6__ {int (* fstat ) (struct fd*,struct statbuf*) ;} ;


 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fd*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fd*,char const*,char const*,char const*) ;
 struct fd* FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct fd*,char const*,char const*,char const*) ;
 int FUNC_10 (char*,char const*,int) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (struct fd*,struct statbuf*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*) ;

int FUNC_15(const char *VAR_9, const char *VAR_10, const char *VAR_11) {
    struct fd *VAR_12 = FUNC_5(VAR_9, VAR_1, 0);
    if (FUNC_0(VAR_12))
        return FUNC_1(VAR_12);

    struct statbuf VAR_13;
    int VAR_14 = VAR_12->mount->fs->fstat(VAR_12, &VAR_13);
    if (VAR_14 < 0) {
        FUNC_2(VAR_12);
        return VAR_14;
    }


    if (!(VAR_13.mode & 0111)) {
        FUNC_2(VAR_12);
        return VAR_6;
    }

    VAR_14 = FUNC_4(VAR_12, VAR_9, VAR_10, VAR_11);
    if (VAR_14 == VAR_7)
        VAR_14 = FUNC_9(VAR_12, VAR_9, VAR_10, VAR_11);
    FUNC_2(VAR_12);
    if (VAR_14 < 0)
        return VAR_14;


    if (VAR_13.mode & VAR_5) {
        VAR_8->suid = VAR_8->euid;
        VAR_8->euid = VAR_13.uid;
    }
    if (VAR_13.mode & VAR_4) {
        VAR_8->sgid = VAR_8->egid;
        VAR_8->egid = VAR_13.gid;
    }


    FUNC_6(&VAR_8->general_lock);
    const char *VAR_15 = FUNC_11(VAR_9, '/');
    if (VAR_15 == ((void*)0))
        VAR_15 = VAR_9;
    else
        VAR_15++;
    FUNC_10(VAR_8->comm, VAR_15, sizeof(VAR_8->comm));
    FUNC_13(&VAR_8->general_lock);


    char VAR_16[16];
    FUNC_10(VAR_16, VAR_8->comm, sizeof(VAR_16)-1);
    VAR_16[15] = '\0';



    FUNC_8(FUNC_7(), VAR_16);




    FUNC_3(VAR_8->files);


    FUNC_6(&VAR_8->sighand->lock);
    for (int VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
        struct sigaction_ *VAR_18 = &VAR_8->sighand->action[VAR_17];
        if (VAR_18->handler != VAR_3)
            VAR_18->handler = VAR_2;
    }
    VAR_8->sighand->altstack = 0;
    FUNC_13(&VAR_8->sighand->lock);

    VAR_8->did_exec = 1;
    FUNC_14(VAR_8);
    return 0;
}
