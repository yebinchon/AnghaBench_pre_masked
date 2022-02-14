
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct evbuffer*,struct evbuffer*,int ) ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_1(struct evbuffer *VAR_2, struct evbuffer *VAR_3, ev_ssize_t VAR_4,
        enum bufferevent_flush_mode VAR_5, void *VAR_6)
{
 (void)VAR_5;
 if (FUNC_0(VAR_2, VAR_3, VAR_4) >= 0)
  return VAR_1;
 else
  return VAR_0;
}
