
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct evhttp_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int,int ,int ,struct evhttp_request*,struct timeval*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct timeval*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct evhttp_request *VAR_4, void *VAR_5)
{
 struct timeval VAR_6;
 FUNC_2(&VAR_6);
 VAR_6.tv_usec = 500000;

 FUNC_0(VAR_5, -1, VAR_1, VAR_3, VAR_4, &VAR_6);
 FUNC_1(VAR_2, VAR_0);
}
