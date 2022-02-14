
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bufferevent_ctrl_data {TYPE_1__* ptr; void* fd; } ;
struct bufferevent_openssl {TYPE_1__* underlying; int old_state; int ssl; } ;
struct bufferevent {int ev_read; } ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;
struct TYPE_2__ {int ev_read; } ;
typedef int BIO ;






 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (struct bufferevent_openssl*,int ,void*) ;
 void* FUNC_4 (int *) ;
 struct bufferevent_openssl* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_0,
    enum bufferevent_ctrl_op VAR_1, union bufferevent_ctrl_data *VAR_2)
{
 struct bufferevent_openssl *VAR_3 = FUNC_5(VAR_0);
 switch (VAR_1) {
 case 128:
  if (!VAR_3->underlying) {
   BIO *VAR_4;
   VAR_4 = FUNC_1((int)VAR_2->fd, 0);
   FUNC_2(VAR_3->ssl, VAR_4, VAR_4);
  } else {
   BIO *VAR_5;
   if (!(VAR_5 = FUNC_0(VAR_3->underlying)))
    return -1;
   FUNC_2(VAR_3->ssl, VAR_5, VAR_5);
  }

  return FUNC_3(VAR_3, VAR_3->old_state, VAR_2->fd);
 case 130:
  if (VAR_3->underlying) {
   VAR_2->fd = FUNC_4(&VAR_3->underlying->ev_read);
  } else {
   VAR_2->fd = FUNC_4(&VAR_0->ev_read);
  }
  return 0;
 case 129:
  VAR_2->ptr = VAR_3->underlying;
  return 0;
 case 131:
 default:
  return -1;
 }
}
