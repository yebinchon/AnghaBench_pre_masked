
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_info {int umask; int lock; } ;
typedef int mode_t_ ;
typedef int dword_t ;
struct TYPE_2__ {struct fs_info* fs; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

dword_t FUNC_3(dword_t VAR_1) {
    FUNC_0("umask(0%o)", VAR_1);
    struct fs_info *VAR_2 = VAR_0->fs;
    FUNC_1(&VAR_2->lock);
    mode_t_ VAR_3 = VAR_2->umask;
    VAR_2->umask = ((mode_t_) VAR_1) & 0777;
    FUNC_2(&VAR_2->lock);
    return VAR_3;
}
