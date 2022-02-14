
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_fastopen_callout {int c; int v; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,void (*) (void*),struct tcp_fastopen_callout*) ;
 int VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct tcp_fastopen_callout *VAR_3 = VAR_2;

 FUNC_1(VAR_3->v);
 FUNC_3();
 FUNC_2(&VAR_3->c, VAR_0 * VAR_1,
        FUNC_4, VAR_3);
 FUNC_0();
}
