
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {struct netbuf* buf; } ;


 int FUNC_0 (struct netbuf*) ;

__attribute__((used)) static void
FUNC_1(struct netbuf *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->buf);
 VAR_0->buf = ((void*)0);
 FUNC_0(VAR_0);
}
