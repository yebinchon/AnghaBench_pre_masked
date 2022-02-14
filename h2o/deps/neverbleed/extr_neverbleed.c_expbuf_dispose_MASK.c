
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expbuf_t {scalar_t__ capacity; int buf; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct expbuf_t*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct expbuf_t *VAR_0)
{
    if (VAR_0->capacity != 0)
        FUNC_0(VAR_0->buf, VAR_0->capacity);
    FUNC_1(VAR_0->buf);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
