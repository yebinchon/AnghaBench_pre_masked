
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; scalar_t__ setup_data; } ;
typedef int evutil_socket_t ;
typedef enum regress_openssl_type { ____Placeholder_regress_openssl_type } regress_openssl_type ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct bufferevent*,int) ;
 int FUNC_4 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_5 (int ,int ,int *,int ,int) ;
 int FUNC_6 (struct bufferevent*,int ,int *,int ,void*) ;
 int FUNC_7 (struct evconnlistener*) ;
 int FUNC_8 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int VAR_9 ;
 int FUNC_9 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_11(struct evconnlistener *VAR_13, evutil_socket_t VAR_14,
    struct sockaddr *VAR_15, int VAR_16, void *VAR_17)
{
 struct basic_test_data *VAR_18 = VAR_17;
 struct bufferevent *VAR_19;
 enum regress_openssl_type VAR_20;
 SSL *VAR_21 = FUNC_0(FUNC_9());

 VAR_20 = (enum regress_openssl_type)VAR_18->setup_data;

 FUNC_2(VAR_21, VAR_11);
 FUNC_1(VAR_21, VAR_12);

 VAR_19 = FUNC_5(
  VAR_18->base, VAR_14, VAR_21, VAR_2,
  VAR_0|VAR_1);
 FUNC_10(VAR_19);

 FUNC_6(VAR_19, VAR_10, ((void*)0), VAR_9,
     (void*)(VAR_6));

 if (VAR_20 & VAR_7) {
  struct timeval VAR_22 = { 1, 0 };
  FUNC_8(VAR_18->base, -1, VAR_4,
      VAR_8, VAR_19, &VAR_22);
  FUNC_3(VAR_19, VAR_3|VAR_5);
 } else {
  FUNC_4(VAR_19, VAR_3|VAR_5);
 }


 FUNC_7(VAR_13);

end:
 ;
}
