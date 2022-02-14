
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_state {int last_key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;
 int FUNC_2 (size_t,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
    struct sync_state *VAR_3 = VAR_0;
    FUNC_0(VAR_3->last_key);
    VAR_3->last_key = FUNC_2(VAR_2 + 1, 1);
    FUNC_1(VAR_3->last_key, VAR_1, VAR_2);
    return 1;
}
