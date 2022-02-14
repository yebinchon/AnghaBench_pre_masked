
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bisect_terms {void* term_bad; void* term_good; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct bisect_terms *VAR_0, const char *VAR_1,
        const char *VAR_2)
{
 FUNC_0((void *)VAR_0->term_good);
 VAR_0->term_good = FUNC_1(VAR_2);
 FUNC_0((void *)VAR_0->term_bad);
 VAR_0->term_bad = FUNC_1(VAR_1);
}
