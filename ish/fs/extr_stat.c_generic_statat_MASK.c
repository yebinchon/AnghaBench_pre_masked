
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {int dummy; } ;
struct mount {TYPE_1__* fs; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int (* stat ) (struct mount*,char*,struct statbuf*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mount* FUNC_0 (char*) ;
 int FUNC_1 (struct statbuf*,int ,int) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct fd*,char const*,char*,int ) ;
 int FUNC_4 (struct mount*,char*,struct statbuf*,int) ;

int FUNC_5(struct fd *VAR_3, const char *VAR_4, struct statbuf *VAR_5, bool VAR_6) {
    char VAR_7[VAR_0];
    int VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_7, VAR_6 ? VAR_1 : VAR_2);
    if (VAR_8 < 0)
        return VAR_8;
    struct mount *VAR_9 = FUNC_0(VAR_7);
    FUNC_1(VAR_5, 0, sizeof(*VAR_5));
    VAR_8 = VAR_9->fs->stat(VAR_9, VAR_7, VAR_5, VAR_6);
    FUNC_2(VAR_9);
    return VAR_8;
}
