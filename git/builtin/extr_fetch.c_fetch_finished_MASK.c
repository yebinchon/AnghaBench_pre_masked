
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct parallel_fetch_state {int result; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct strbuf *VAR_1,
     void *VAR_2, void *VAR_3)
{
 struct parallel_fetch_state *VAR_4 = VAR_2;
 const char *VAR_5 = VAR_3;

 if (VAR_0) {
  FUNC_1(VAR_1, FUNC_0("could not fetch '%s' (exit code: %d)\n"),
       VAR_5, VAR_0);
  VAR_4->result = -1;
 }

 return 0;
}
