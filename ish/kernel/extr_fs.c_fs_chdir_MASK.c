
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_info {int lock; struct fd* pwd; } ;
struct fd {int dummy; } ;


 int FUNC_0 (struct fd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct fs_info *VAR_0, struct fd *VAR_1) {
    FUNC_1(&VAR_0->lock);
    FUNC_0(VAR_0->pwd);
    VAR_0->pwd = VAR_1;
    FUNC_2(&VAR_0->lock);
}
