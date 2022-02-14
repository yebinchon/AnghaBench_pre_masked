
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expbuf_t {size_t end; } ;


 int FUNC_0 (struct expbuf_t*,size_t) ;
 int FUNC_1 (struct expbuf_t*,size_t) ;
 int FUNC_2 (size_t,void const*,size_t) ;

__attribute__((used)) static void FUNC_3(struct expbuf_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0, VAR_2);
    FUNC_1(VAR_0, VAR_2);
    FUNC_2(VAR_0->end, VAR_1, VAR_2);
    VAR_0->end += VAR_2;
}
