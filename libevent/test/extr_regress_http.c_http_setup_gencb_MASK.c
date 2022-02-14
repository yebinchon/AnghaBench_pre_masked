
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
typedef struct evhttp event_base ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 struct evhttp* FUNC_0 (struct evhttp*) ;
 int FUNC_1 (struct evhttp*,int ,int *) ;
 int FUNC_2 (struct evhttp*,char*,int ,struct evhttp*) ;
 int FUNC_3 (struct evhttp*,int ) ;
 int FUNC_4 (struct evhttp*,void (*) (struct evhttp_request*,void*),void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct evhttp*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 () ;

__attribute__((used)) static struct evhttp *
FUNC_7(ev_uint16_t *VAR_16, struct event_base *VAR_17, int VAR_18,
 void (*VAR_19)(struct evhttp_request *, void *), void *VAR_20)
{
 struct evhttp *VAR_21;


 VAR_21 = FUNC_0(VAR_17);

 if (FUNC_5(VAR_21, VAR_16, VAR_18) < 0)
  return ((void*)0);







 FUNC_4(VAR_21, VAR_19, VAR_20);


 FUNC_3(VAR_21, VAR_1);


 FUNC_2(VAR_21, "/test", VAR_3, VAR_21);
 FUNC_2(VAR_21, "/test nonconformant", VAR_3, VAR_21);
 FUNC_2(VAR_21, "/timeout", VAR_14, VAR_21);
 FUNC_2(VAR_21, "/large", VAR_9, VAR_17);
 FUNC_2(VAR_21, "/chunked", VAR_4, VAR_17);
 FUNC_2(VAR_21, "/streamed", VAR_4, VAR_17);
 FUNC_2(VAR_21, "/postit", VAR_12, VAR_17);
 FUNC_2(VAR_21, "/putit", VAR_13, VAR_17);
 FUNC_2(VAR_21, "/deleteit", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/propfind", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/proppatch", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/mkcol", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/lockit", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/unlockit", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/copyit", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/moveit", VAR_8, VAR_17);
 FUNC_2(VAR_21, "/custom", VAR_5, VAR_17);
 FUNC_2(VAR_21, "/delay", VAR_6, VAR_17);
 FUNC_2(VAR_21, "/largedelay", VAR_10, VAR_17);
 FUNC_2(VAR_21, "/badrequest", VAR_2, VAR_17);
 FUNC_2(VAR_21, "/oncomplete", VAR_11, VAR_17);
 FUNC_2(VAR_21, "/", VAR_7, VAR_17);
 return (VAR_21);
}
