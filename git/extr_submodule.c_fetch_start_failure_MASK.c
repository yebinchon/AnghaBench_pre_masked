
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_parallel_fetch {int result; } ;
struct strbuf {int dummy; } ;
struct fetch_task {int dummy; } ;


 int FUNC_0 (struct fetch_task*) ;

__attribute__((used)) static int FUNC_1(struct strbuf *VAR_0,
          void *VAR_1, void *VAR_2)
{
 struct submodule_parallel_fetch *VAR_3 = VAR_1;
 struct fetch_task *VAR_4 = VAR_2;

 VAR_3->result = 1;

 FUNC_0(VAR_4);
 return 0;
}
