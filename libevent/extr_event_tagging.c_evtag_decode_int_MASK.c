
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (int *,struct evbuffer*,int ) ;
 int FUNC_1 (struct evbuffer*,int) ;

int
FUNC_2(ev_uint32_t *VAR_0, struct evbuffer *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 if (VAR_2 != -1)
  FUNC_1(VAR_1, VAR_2);

 return (VAR_2 == -1 ? -1 : 0);
}
