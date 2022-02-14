
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct evhttp_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,struct evhttp_request*,struct timeval*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct timeval VAR_5 = { 0, 100 };
 FUNC_0(VAR_1, -1, VAR_0,
     VAR_2, VAR_3, &VAR_5);
}
