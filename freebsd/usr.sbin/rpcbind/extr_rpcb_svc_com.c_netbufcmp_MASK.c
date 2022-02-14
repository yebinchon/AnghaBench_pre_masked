
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {scalar_t__ len; int buf; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct netbuf *VAR_0, struct netbuf *VAR_1)
{
 return ((VAR_0->len != VAR_1->len) || FUNC_0(VAR_0->buf, VAR_1->buf, VAR_0->len));
}
