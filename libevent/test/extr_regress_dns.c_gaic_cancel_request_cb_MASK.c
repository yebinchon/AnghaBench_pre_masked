
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gaic_request_status {scalar_t__ magic; int canceled; int base; int request; } ;
typedef int evutil_socket_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct gaic_request_status *VAR_4 = VAR_3;

 FUNC_2(VAR_4->magic == VAR_0);
 VAR_4->canceled = 1;
 FUNC_0(VAR_4->request);
 return;
end:
 FUNC_1(VAR_4->base, ((void*)0));
}
