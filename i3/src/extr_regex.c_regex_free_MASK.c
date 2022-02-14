
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regex {struct regex* extra; struct regex* regex; struct regex* pattern; } ;


 int FUNC_0 (struct regex*) ;

void FUNC_1(struct regex *VAR_0) {
    if (!VAR_0)
        return;
    FUNC_0(VAR_0->pattern);
    FUNC_0(VAR_0->regex);
    FUNC_0(VAR_0->extra);
    FUNC_0(VAR_0);
}
