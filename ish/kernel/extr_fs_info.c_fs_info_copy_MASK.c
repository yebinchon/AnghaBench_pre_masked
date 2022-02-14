
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_info {void* root; void* pwd; int umask; } ;


 void* FUNC_0 (void*) ;
 struct fs_info* FUNC_1 () ;

struct fs_info *FUNC_2(struct fs_info *VAR_0) {
    struct fs_info *VAR_1 = FUNC_1();
    VAR_1->umask = VAR_0->umask;
    VAR_1->pwd = FUNC_0(VAR_0->pwd);
    VAR_1->root = FUNC_0(VAR_0->root);
    return VAR_1;
}
