
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_info {scalar_t__ refcount; int root; int pwd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fs_info*) ;

void FUNC_2(struct fs_info *VAR_0) {
    if (--VAR_0->refcount == 0) {
        FUNC_0(VAR_0->pwd);
        FUNC_0(VAR_0->root);
        FUNC_1(VAR_0);
    }
}
