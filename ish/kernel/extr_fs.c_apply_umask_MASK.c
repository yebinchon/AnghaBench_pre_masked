
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_info {int lock; int umask; } ;
typedef int mode_t_ ;
struct TYPE_2__ {struct fs_info* fs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(mode_t_ *VAR_1) {
    struct fs_info *VAR_2 = VAR_0->fs;
    FUNC_0(&VAR_2->lock);
    *VAR_1 &= ~VAR_2->umask;
    FUNC_1(&VAR_2->lock);
}
