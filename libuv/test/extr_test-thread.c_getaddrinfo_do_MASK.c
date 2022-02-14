
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getaddrinfo_req {int handle; int loop; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,char*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct getaddrinfo_req* VAR_1) {
  int VAR_2;

  VAR_2 = FUNC_1(VAR_1->loop,
                     &VAR_1->handle,
                     VAR_0,
                     "localhost",
                     ((void*)0),
                     ((void*)0));
  FUNC_0(VAR_2 == 0);
}
