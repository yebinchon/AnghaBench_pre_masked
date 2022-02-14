
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct evhttp_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ,int ,struct evhttp_request*,struct timeval*) ;
 int FUNC_1 (struct timeval*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct evhttp_request *VAR_2, void *VAR_3)
{
 struct timeval VAR_4;
 FUNC_1(&VAR_4);
 VAR_4.tv_sec = 0;
 VAR_4.tv_usec = 200 * 1000;

 FUNC_0(VAR_3, -1, VAR_0, VAR_1, VAR_2, &VAR_4);
}
