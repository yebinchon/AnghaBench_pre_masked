
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expbuf_t {void* start; } ;


 scalar_t__ FUNC_0 (struct expbuf_t*,size_t*) ;
 size_t FUNC_1 (struct expbuf_t*) ;

__attribute__((used)) static void *FUNC_2(struct expbuf_t *VAR_0, size_t *VAR_1)
{
    void *VAR_2;
    if (FUNC_0(VAR_0, VAR_1) != 0)
        return ((void*)0);
    if (FUNC_1(VAR_0) < *VAR_1)
        return ((void*)0);
    VAR_2 = VAR_0->start;
    VAR_0->start += *VAR_1;
    return VAR_2;
}
