
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evhttp_request {int type; TYPE_1__* evcon; int * uri; int response_code; scalar_t__ userdone; } ;
struct evhttp_cb {int cbarg; int (* cb ) (struct evhttp_request*,int ) ;} ;
struct evhttp {int allowed_methods; int gencbarg; int (* gencb ) (struct evhttp_request*,int ) ;int callbacks; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {int bufev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct evbuffer*,int ,char*) ;
 int FUNC_2 (struct evbuffer*) ;
 struct evbuffer* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct evhttp_cb* FUNC_6 (int *,struct evhttp_request*) ;
 int FUNC_7 (struct evhttp*,struct evhttp**,char const*) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (struct evhttp_request*) ;
 int FUNC_10 (struct evhttp_request*,int ,char*) ;
 int FUNC_11 (struct evhttp_request*,int ,int *) ;
 int FUNC_12 (struct evhttp_request*,struct evbuffer*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct evhttp_request*,int ) ;
 int FUNC_15 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_16(struct evhttp_request *VAR_4, void *VAR_5)
{
 struct evhttp *VAR_6 = VAR_5;
 struct evhttp_cb *VAR_7 = ((void*)0);
 const char *VAR_8;


 VAR_4->userdone = 0;

 FUNC_0(VAR_4->evcon->bufev, VAR_1);

 if (VAR_4->uri == ((void*)0)) {
  FUNC_11(VAR_4, VAR_4->response_code, ((void*)0));
  return;
 }

 if ((VAR_6->allowed_methods & VAR_4->type) == 0) {
  FUNC_4(("Rejecting disallowed method %x (allowed: %x)\n",
   (unsigned)VAR_4->type, (unsigned)VAR_6->allowed_methods));
  FUNC_11(VAR_4, VAR_3, ((void*)0));
  return;
 }


 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8 != ((void*)0)) {
  FUNC_7(VAR_6, &VAR_6, VAR_8);
 }

 if ((VAR_7 = FUNC_6(&VAR_6->callbacks, VAR_4)) != ((void*)0)) {
  (*VAR_7->cb)(VAR_4, VAR_7->cbarg);
  return;
 }


 if (VAR_6->gencb) {
  (*VAR_6->gencb)(VAR_4, VAR_6->gencbarg);
  return;
 } else {
  char *VAR_9;
  struct evbuffer *VAR_10;

  if ((VAR_9 = FUNC_8(VAR_4->uri)) == ((void*)0)) {
   FUNC_5(VAR_4->evcon);
   return;
  }

  if ((VAR_10 = FUNC_3()) == ((void*)0)) {
   FUNC_13(VAR_9);
   FUNC_5(VAR_4->evcon);
   return;
  }

  FUNC_10(VAR_4, VAR_2, "Not Found");

  FUNC_1(VAR_10, "<html><head>" "<title>404 Not Found</title>" "</head><body>" "<h1>Not Found</h1>" "<p>The requested URL %s was not found on this server.</p>" "</body></html>\n", VAR_9);

  FUNC_13(VAR_9);

  FUNC_12(VAR_4, VAR_10);

  FUNC_2(VAR_10);

 }
}
