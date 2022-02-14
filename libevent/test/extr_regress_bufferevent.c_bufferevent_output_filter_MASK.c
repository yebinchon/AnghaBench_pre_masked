
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bufferevent*,char*,int) ;
 int FUNC_2 (struct evbuffer*,...) ;
 int FUNC_3 (struct evbuffer*,unsigned int) ;
 unsigned int FUNC_4 (struct evbuffer*) ;
 unsigned char* FUNC_5 (struct evbuffer*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_6(struct evbuffer *VAR_3, struct evbuffer *VAR_4,
    ev_ssize_t VAR_5, enum bufferevent_flush_mode VAR_6, void *VAR_7)
{
 const unsigned char *VAR_8;
 unsigned VAR_9;
 struct bufferevent **VAR_10 = VAR_7;

 ++VAR_2;

 if (VAR_2 == 1) {
  VAR_8 = FUNC_5(VAR_3, FUNC_4(VAR_3));
  for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_3); ++VAR_9) {
   FUNC_2(VAR_4, "x", 1);
   FUNC_2(VAR_4, VAR_8 + VAR_9, 1);
  }
  FUNC_3(VAR_3, FUNC_4(VAR_3));
 } else {
  return VAR_0;
 }

 if (VAR_10 && VAR_2 == 1) {
  int VAR_11 = ++VAR_2;
  FUNC_1(*VAR_10, "-", 1);


  FUNC_0(VAR_2 == VAR_11);
  --VAR_2;
 }

 return (VAR_1);
}
