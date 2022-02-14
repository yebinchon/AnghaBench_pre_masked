
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_log_stailq {int dummy; } ;
struct tcp_log_mem {int dummy; } ;


 struct tcp_log_mem* FUNC_0 (struct tcp_log_stailq*) ;
 int FUNC_1 (struct tcp_log_stailq*,int ) ;
 int FUNC_2 (struct tcp_log_mem*) ;
 int FUNC_3 (struct tcp_log_mem*,int*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct tcp_log_stailq *VAR_1, int *VAR_2)
{
 struct tcp_log_mem *VAR_3;


 while ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_2(VAR_3);
  FUNC_3(VAR_3, VAR_2);
 }
}
