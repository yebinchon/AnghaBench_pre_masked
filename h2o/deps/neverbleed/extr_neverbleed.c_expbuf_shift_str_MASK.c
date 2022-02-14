
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expbuf_t {char* start; } ;


 int FUNC_0 (struct expbuf_t*) ;
 char* FUNC_1 (char*,char,int ) ;

__attribute__((used)) static char *FUNC_2(struct expbuf_t *VAR_0)
{
    char *VAR_1 = FUNC_1(VAR_0->start, '\0', FUNC_0(VAR_0)), *VAR_2;
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_2 = VAR_0->start;
    VAR_0->start = VAR_1 + 1;
    return VAR_2;
}
