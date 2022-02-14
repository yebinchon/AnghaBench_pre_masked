
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void) {
    void *VAR_0 = ((void*)0);
    void *VAR_1 = ((void*)0);

    FUNC_2("Don't fail when redisFree is passed a NULL value: ");
    FUNC_1(VAR_0);
    FUNC_3(VAR_0 == ((void*)0));

    FUNC_2("Don't fail when freeReplyObject is passed a NULL value: ");
    FUNC_0(VAR_1);
    FUNC_3(VAR_1 == ((void*)0));
}
