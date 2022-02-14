
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef enum regress_openssl_type { ____Placeholder_regress_openssl_type } regress_openssl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct bufferevent*,int ) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int FUNC_6 (struct bufferevent*) ;
 struct evbuffer* FUNC_7 (struct bufferevent*) ;
 int FUNC_8 (struct bufferevent*) ;
 int FUNC_9 (struct bufferevent*) ;
 int FUNC_10 (int ,char*,int) ;
 char* FUNC_11 (struct evbuffer*,int *,int ) ;
 int FUNC_12 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_13(struct bufferevent *VAR_6, void *VAR_7)
{
 struct evbuffer *VAR_8 = FUNC_7(VAR_6);
 char *VAR_9;
 int VAR_10;

 enum regress_openssl_type VAR_11;
 VAR_11 = (enum regress_openssl_type)VAR_7;

 VAR_9 = FUNC_11(VAR_8, ((void*)0), VAR_0);
 if (! VAR_9)
  return;
 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 <= 0)
  FUNC_2(("Bad number: %s", VAR_9));
 FUNC_12(VAR_9);
 FUNC_1(("The number was %d", VAR_10));
 if (VAR_10 == 1001) {
  ++VAR_5;
  FUNC_6(VAR_6);
  return;
 }
 if ((VAR_11 & VAR_3) && VAR_10 == VAR_4) {
  FUNC_0(FUNC_9(VAR_6));
 }
 ++VAR_10;
 FUNC_10(FUNC_8(VAR_6),
     "%d\n", VAR_10);
 FUNC_1(("Done reading; now writing."));
 FUNC_5(VAR_6, VAR_2);
 FUNC_4(VAR_6, VAR_1);
}
