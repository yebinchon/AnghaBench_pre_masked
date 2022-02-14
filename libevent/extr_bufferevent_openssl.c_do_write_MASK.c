
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer_iovec {scalar_t__ iov_len; int iov_base; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {struct evbuffer* output; } ;
struct TYPE_2__ {scalar_t__ write_suspended; struct bufferevent bev; } ;
struct bufferevent_openssl {int last_write; scalar_t__ underlying; scalar_t__ write_blocked_on_read; int ssl; TYPE_1__ bev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct bufferevent*,int ,int ) ;
 scalar_t__ FUNC_6 (struct bufferevent_openssl*) ;
 int FUNC_7 (struct bufferevent_openssl*,int ,int,int) ;
 int FUNC_8 (struct bufferevent_openssl*) ;
 int FUNC_9 (struct evbuffer*,int) ;
 int FUNC_10 (struct evbuffer*,int,int *,struct evbuffer_iovec*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct bufferevent_openssl*) ;

__attribute__((used)) static int
FUNC_13(struct bufferevent_openssl *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 struct bufferevent *VAR_12 = &VAR_6->bev.bev;
 struct evbuffer *VAR_13 = VAR_12->output;
 struct evbuffer_iovec VAR_14[8];
 int VAR_15 = 0;

 if (VAR_6->last_write > 0)
  VAR_7 = VAR_6->last_write;
 else
  VAR_7 = FUNC_4(&VAR_6->bev);

 VAR_10 = FUNC_10(VAR_13, VAR_7, ((void*)0), VAR_14, 8);
 if (VAR_10 < 0)
  return VAR_4 | VAR_15;

 if (VAR_10 > 8)
  VAR_10 = 8;
 for (VAR_8=0; VAR_8 < VAR_10; ++VAR_8) {
  if (VAR_6->bev.write_suspended)
   break;




  if (VAR_14[VAR_8].iov_len == 0)
   continue;

  FUNC_1();
  VAR_9 = FUNC_3(VAR_6->ssl, VAR_14[VAR_8].iov_base,
      VAR_14[VAR_8].iov_len);
  if (VAR_9 > 0) {
   VAR_15 |= VAR_5;
   if (VAR_6->write_blocked_on_read)
    if (FUNC_6(VAR_6) < 0)
     return VAR_4 | VAR_15;
   VAR_11 += VAR_9;
   VAR_6->last_write = -1;
   FUNC_8(VAR_6);
  } else {
   int VAR_16 = FUNC_2(VAR_6->ssl, VAR_9);
   FUNC_11(VAR_16);
   switch (VAR_16) {
   case 128:

    if (VAR_6->write_blocked_on_read)
     if (FUNC_6(VAR_6) < 0)
      return VAR_4 | VAR_15;
    VAR_6->last_write = VAR_14[VAR_8].iov_len;
    break;
   case 129:


    if (!VAR_6->write_blocked_on_read)
     if (FUNC_12(VAR_6) < 0)
      return VAR_4 | VAR_15;
    VAR_6->last_write = VAR_14[VAR_8].iov_len;
    break;
   default:
    FUNC_7(VAR_6, VAR_0, VAR_16, VAR_9);
    VAR_6->last_write = -1;
    break;
   }
   VAR_15 |= VAR_3;
   break;
  }
 }
 if (VAR_11) {
  FUNC_9(VAR_13, VAR_11);
  if (VAR_6->underlying)
   FUNC_0(VAR_12);

  FUNC_5(VAR_12, VAR_2, VAR_1);
 }
 return VAR_15;
}
