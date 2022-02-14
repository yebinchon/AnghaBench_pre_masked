
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* EMIT ) (char const,void*) ;


 int FUNC_0 (char const,void*) ;
 int FUNC_1 (char const,void*) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_0, unsigned VAR_1, char VAR_2, EMIT *VAR_3, void *VAR_4)
{
    const char *VAR_5 = "0123456789ABCDEF";
    if (VAR_2 && ((int)VAR_0 < 0)) {
 (*VAR_3)('-', VAR_4);
 VAR_0 = (unsigned)-((int)VAR_0);
    }
    if (VAR_0 >= VAR_1)
 FUNC_2(VAR_0/VAR_1, VAR_1, 0, VAR_3, VAR_4);
    (*VAR_3)(VAR_5[VAR_0%VAR_1], VAR_4);
}
