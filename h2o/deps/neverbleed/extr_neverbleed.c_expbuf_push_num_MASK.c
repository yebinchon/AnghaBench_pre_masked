
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct expbuf_t {int end; } ;


 int FUNC_0 (struct expbuf_t*,int) ;
 int FUNC_1 (int,size_t*,int) ;

__attribute__((used)) static void FUNC_2(struct expbuf_t *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_0, sizeof(VAR_1));
    FUNC_1(VAR_0->end, &VAR_1, sizeof(VAR_1));
    VAR_0->end += sizeof(VAR_1);
}
