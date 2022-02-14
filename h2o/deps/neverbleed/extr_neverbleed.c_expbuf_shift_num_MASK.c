
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expbuf_t {int start; } ;


 int FUNC_0 (struct expbuf_t*) ;
 int FUNC_1 (size_t*,int,int) ;

__attribute__((used)) static int FUNC_2(struct expbuf_t *VAR_0, size_t *VAR_1)
{
    if (FUNC_0(VAR_0) < sizeof(*VAR_1))
        return -1;
    FUNC_1(VAR_1, VAR_0->start, sizeof(*VAR_1));
    VAR_0->start += sizeof(*VAR_1);
    return 0;
}
