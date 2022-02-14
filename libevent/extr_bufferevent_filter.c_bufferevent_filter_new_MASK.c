
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {void (* free_context ) (void*) ;void* outbuf_cb; void* inbuf_cb; struct bufferevent* underlying; void* context; void* process_out; void* process_in; int bev; } ;
struct bufferevent {int output; int input; int ev_base; } ;
typedef void* bufferevent_filter_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bufferevent*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (struct bufferevent*) ;
 int VAR_11 ;
 int FUNC_5 (struct bufferevent*,int ,int ,int ,struct bufferevent_filtered*) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 struct bufferevent* FUNC_7 (struct bufferevent_filtered*) ;
 void* FUNC_8 (int ,int ,struct bufferevent_filtered*) ;
 int FUNC_9 (int ,void*,int ) ;
 struct bufferevent_filtered* FUNC_10 (int,int) ;
 int FUNC_11 (struct bufferevent_filtered*) ;

struct bufferevent *
FUNC_12(struct bufferevent *VAR_12,
         bufferevent_filter_cb VAR_13,
         bufferevent_filter_cb VAR_14,
         int VAR_15,
         void (*VAR_16)(void *),
         void *VAR_17)
{
 struct bufferevent_filtered *VAR_18;
 int VAR_19 = VAR_15 & ~VAR_0;

 if (!VAR_12)
  return ((void*)0);

 if (!VAR_13)
  VAR_13 = VAR_8;
 if (!VAR_14)
  VAR_14 = VAR_8;

 VAR_18 = FUNC_10(1, sizeof(struct bufferevent_filtered));
 if (!VAR_18)
  return ((void*)0);

 if (FUNC_3(&VAR_18->bev, VAR_12->ev_base,
        &VAR_11, VAR_19) < 0) {
  FUNC_11(VAR_18);
  return ((void*)0);
 }
 if (VAR_15 & VAR_0) {
  FUNC_1(FUNC_7(VAR_18), ((void*)0));
 }

 VAR_18->underlying = VAR_12;

 VAR_18->process_in = VAR_13;
 VAR_18->process_out = VAR_14;
 VAR_18->free_context = VAR_16;
 VAR_18->context = VAR_17;

 FUNC_5(VAR_18->underlying,
     VAR_6, VAR_7, VAR_5, VAR_18);

 VAR_18->inbuf_cb = FUNC_8(FUNC_7(VAR_18)->input,
  VAR_9, VAR_18);
 FUNC_9(FUNC_7(VAR_18)->input, VAR_18->inbuf_cb,
  VAR_2);

 VAR_18->outbuf_cb = FUNC_8(FUNC_7(VAR_18)->output,
    VAR_10, VAR_18);

 FUNC_4(FUNC_7(VAR_18));
 FUNC_2(VAR_12);

 FUNC_0(VAR_12, VAR_3|VAR_4);
 FUNC_6(VAR_12, VAR_1);

 return FUNC_7(VAR_18);
}
