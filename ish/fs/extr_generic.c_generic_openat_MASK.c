
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {int mode; int rdev; int inode; } ;
struct mount {TYPE_1__* fs; } ;
struct fd {int type; int flags; int inode; struct mount* mount; } ;
struct TYPE_2__ {int (* fstat ) (struct fd*,struct statbuf*) ;struct fd* (* open ) (struct mount*,char*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct fd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct statbuf*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,struct fd*) ;
 int FUNC_12 (struct fd*) ;
 struct mount* FUNC_13 (char*) ;
 int FUNC_14 (struct mount*,int ) ;
 int FUNC_15 (struct mount*) ;
 int FUNC_16 (struct fd*,char const*,char*,int) ;
 struct fd* FUNC_17 (struct mount*,char*,int,int) ;
 int FUNC_18 (struct fd*,struct statbuf*) ;

struct fd *FUNC_19(struct fd *VAR_16, const char *VAR_17, int VAR_18, int VAR_19) {
    if (VAR_18 & VAR_9 && VAR_18 & VAR_10)
        return FUNC_0(VAR_12);


    char VAR_20[VAR_4];
    int VAR_21 = FUNC_16(VAR_16, VAR_17, VAR_20, VAR_6 |
            (VAR_18 & VAR_7 ? VAR_5 : 0));
    if (VAR_21 < 0)
        return FUNC_0(VAR_21);
    struct mount *VAR_22 = FUNC_13(VAR_20);
    struct fd *VAR_23 = VAR_22->fs->open(VAR_22, VAR_20, VAR_18, VAR_19);
    if (FUNC_1(VAR_23)) {


        FUNC_15(VAR_22);
        return VAR_23;
    }
    VAR_23->mount = VAR_22;

    struct statbuf VAR_24;
    VAR_21 = VAR_23->mount->fs->fstat(VAR_23, &VAR_24);
    if (VAR_21 < 0)
        goto error;
    VAR_23->inode = FUNC_14(VAR_22, VAR_24.inode);
    VAR_23->type = VAR_24.mode & VAR_11;
    VAR_23->flags = VAR_18;

    int VAR_25;
    if (VAR_18 & VAR_9) VAR_25 = VAR_0 | VAR_1;
    else if (VAR_18 & VAR_10) VAR_25 = VAR_1;
    else VAR_25 = VAR_0;
    VAR_21 = FUNC_7(&VAR_24, VAR_25);
    if (VAR_21 < 0)
        goto error;

    FUNC_8(!FUNC_5(VAR_23->type));
    if (FUNC_2(VAR_23->type) || FUNC_3(VAR_23->type)) {
        int VAR_26;
        if (FUNC_2(VAR_23->type))
            VAR_26 = VAR_2;
        else
            VAR_26 = VAR_3;
        VAR_21 = FUNC_11(FUNC_9(VAR_24.rdev), FUNC_10(VAR_24.rdev), VAR_26, VAR_23);
        if (VAR_21 < 0)
            goto error;
    }
    VAR_21 = VAR_15;
    if (FUNC_6(VAR_23->type))
        goto error;
    VAR_21 = VAR_13;
    if (FUNC_4(VAR_23->type) && VAR_18 & (VAR_9 | VAR_10))
        goto error;
    VAR_21 = VAR_14;
    if (!FUNC_4(VAR_23->type) && VAR_18 & VAR_8)
        goto error;
    return VAR_23;

error:
    FUNC_12(VAR_23);
    return FUNC_0(VAR_21);
}
