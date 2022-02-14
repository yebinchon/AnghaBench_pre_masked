
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*,int *,void*,size_t) ;
 scalar_t__ FUNC_3 (struct evbuffer*,int) ;

int
FUNC_4(struct evbuffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 ev_ssize_t VAR_3;
 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0, ((void*)0), VAR_1, VAR_2);
 if (VAR_3 > 0) {
  if (FUNC_3(VAR_0, VAR_3)<0)
   VAR_3 = -1;
 }
 FUNC_1(VAR_0);
 return (int)VAR_3;
}
