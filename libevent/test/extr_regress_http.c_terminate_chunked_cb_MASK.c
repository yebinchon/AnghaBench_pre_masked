
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct terminate_state {int base; struct evhttp_request* req; } ;
struct evhttp_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,void*,struct timeval*) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (struct evhttp_request*) ;
 int FUNC_3 (struct evhttp_request*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct evhttp_request *VAR_4, void *VAR_5)
{
 struct terminate_state *VAR_6 = VAR_5;
 struct timeval VAR_7;


 FUNC_1(
  FUNC_2(VAR_4),
  VAR_2, VAR_5);

 VAR_6->req = VAR_4;

 FUNC_3(VAR_4, VAR_1, "OK");

 VAR_7.tv_sec = 0;
 VAR_7.tv_usec = 3000;
 FUNC_0(VAR_6->base, -1, VAR_0, VAR_3, VAR_5, &VAR_7);
}
