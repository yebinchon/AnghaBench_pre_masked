
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {size_t n_errors; unsigned long* errors; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_openssl* FUNC_2 (struct bufferevent*) ;

unsigned long
FUNC_3(struct bufferevent *VAR_0)
{
 unsigned long VAR_1 = 0;
 struct bufferevent_openssl *VAR_2;
 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 && VAR_2->n_errors) {
  VAR_1 = VAR_2->errors[--VAR_2->n_errors];
 }
 FUNC_1(VAR_0);
 return VAR_1;
}
