
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct httpd_thread_statep {int hts_fd; } ;
struct TYPE_2__ {int listen_sock; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1)
{
 struct httpd_thread_statep *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1;

 while (1) {
  VAR_3 = FUNC_0(VAR_0->listen_sock, ((void*)0), ((void*)0));
  if (VAR_3 < 0)
   continue;
  (void)FUNC_2(VAR_3, VAR_2->hts_fd);
  FUNC_1(VAR_3);
 }
}
