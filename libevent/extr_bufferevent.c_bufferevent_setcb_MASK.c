
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {void* cbarg; int errorcb; void* writecb; void* readcb; } ;
typedef int bufferevent_event_cb ;
typedef void* bufferevent_data_cb ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;

void
FUNC_2(struct bufferevent *VAR_0,
    bufferevent_data_cb VAR_1, bufferevent_data_cb VAR_2,
    bufferevent_event_cb VAR_3, void *VAR_4)
{
 FUNC_0(VAR_0);

 VAR_0->readcb = VAR_1;
 VAR_0->writecb = VAR_2;
 VAR_0->errorcb = VAR_3;

 VAR_0->cbarg = VAR_4;
 FUNC_1(VAR_0);
}
