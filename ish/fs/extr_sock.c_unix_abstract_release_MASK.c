
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_abstract {scalar_t__ refcount; int links; } ;


 int FUNC_0 (struct unix_abstract*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct unix_abstract *VAR_1) {
    FUNC_2(&VAR_0);
    if (--VAR_1->refcount == 0) {
        FUNC_1(&VAR_1->links);
        FUNC_0(VAR_1);
    }
    FUNC_3(&VAR_0);
}
