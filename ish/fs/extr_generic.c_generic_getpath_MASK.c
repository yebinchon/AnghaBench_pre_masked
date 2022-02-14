
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {TYPE_2__* mount; } ;
struct TYPE_4__ {char* point; TYPE_1__* fs; } ;
struct TYPE_3__ {int (* getpath ) (struct fd*,char*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct fd*,char*) ;

int FUNC_5(struct fd *VAR_2, char *VAR_3) {
    int VAR_4 = VAR_2->mount->fs->getpath(VAR_2, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    if (FUNC_2(VAR_3) + FUNC_2(VAR_2->mount->point) >= VAR_0)
        return VAR_1;
    FUNC_0(VAR_3 + FUNC_2(VAR_2->mount->point), VAR_3, FUNC_2(VAR_3) + 1);
    FUNC_3(VAR_3, VAR_2->mount->point, FUNC_2(VAR_2->mount->point));
    if (VAR_3[0] == '\0')
        FUNC_1(VAR_3, "/");
    return 0;
}
