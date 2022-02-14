
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int flags; } ;
struct evbuffer {size_t total_len; struct evbuffer_chain* first; scalar_t__ freeze_start; } ;
typedef int evutil_socket_t ;
typedef size_t ev_ssize_t ;


 int FUNC_0 (struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct evbuffer*,int) ;
 void* FUNC_4 (struct evbuffer*,size_t) ;
 int FUNC_5 (struct evbuffer*,int ,size_t) ;
 int FUNC_6 (struct evbuffer*,int ,size_t) ;
 int FUNC_7 (int ,void*,size_t,int ) ;
 int FUNC_8 (int ,void*,size_t) ;

int
FUNC_9(struct evbuffer *VAR_1, evutil_socket_t VAR_2,
    ev_ssize_t VAR_3)
{
 int VAR_4 = -1;

 FUNC_0(VAR_1);

 if (VAR_1->freeze_start) {
  goto done;
 }

 if (VAR_3 < 0 || (size_t)VAR_3 > VAR_1->total_len)
  VAR_3 = VAR_1->total_len;

 if (VAR_3 > 0) {
  void *VAR_5 = FUNC_4(VAR_1, VAR_3);
  FUNC_2(VAR_5 || !VAR_3);
  VAR_4 = FUNC_8(VAR_2, VAR_5, VAR_3);




 }

 if (VAR_4 > 0)
  FUNC_3(VAR_1, VAR_4);

done:
 FUNC_1(VAR_1);
 return (VAR_4);
}
