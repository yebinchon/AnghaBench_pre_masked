
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int on ;
typedef int evutil_socket_t ;
typedef int evconnlistener_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 struct evconnlistener* FUNC_1 (struct event_base*,int ,void*,unsigned int,int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int,int ) ;
 scalar_t__ FUNC_9 (int,int ,int ,void*,int) ;

struct evconnlistener *
FUNC_10(struct event_base *VAR_12, evconnlistener_cb VAR_13,
    void *VAR_14, unsigned VAR_15, int VAR_16, const struct sockaddr *VAR_17,
    int VAR_18)
{
 struct evconnlistener *VAR_19;
 evutil_socket_t VAR_20;
 int VAR_21 = 1;
 int VAR_22 = VAR_17 ? VAR_17->sa_family : VAR_1;
 int VAR_23 = VAR_9 | VAR_3;
 int VAR_24 = 1;

 if (VAR_16 == 0)
  return ((void*)0);

 if (VAR_15 & VAR_5)
  VAR_23 |= VAR_2;

 VAR_20 = FUNC_8(VAR_22, VAR_23, 0);
 if (VAR_20 == -1)
  return ((void*)0);
 if (VAR_24) {
  if (FUNC_9(VAR_20, VAR_10, VAR_11, (void*)&VAR_21, sizeof(VAR_21))<0)
   goto err;
 }

 if (VAR_15 & VAR_7) {
  if (FUNC_5(VAR_20) < 0)
   goto err;
 }

 if (VAR_15 & VAR_8) {
  if (FUNC_6(VAR_20) < 0)
   goto err;
 }

 if (VAR_15 & VAR_6) {
  if (FUNC_7(VAR_20) < 0)
   goto err;
 }

 if (VAR_15 & VAR_4) {
  if (FUNC_4(VAR_20) < 0)
   goto err;
 }

 if (VAR_17) {
  if (FUNC_0(VAR_20, VAR_17, VAR_18)<0)
   goto err;
 }

 VAR_19 = FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_20);
 if (!VAR_19)
  goto err;

 return VAR_19;
err:
 FUNC_3(VAR_20);
 return ((void*)0);
}
