
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct parallel_fetch_state {int result; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct strbuf *VAR_0, void *VAR_1, void *VAR_2)
{
 struct parallel_fetch_state *VAR_3 = VAR_1;
 const char *VAR_4 = VAR_2;

 VAR_3->result = FUNC_1(FUNC_0("Could not fetch %s"), VAR_4);

 return 0;
}
