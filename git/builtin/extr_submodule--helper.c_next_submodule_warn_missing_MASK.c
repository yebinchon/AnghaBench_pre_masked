
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_clone {scalar_t__ warn_if_uninitialized; } ;
struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,int ,char const*) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_4(struct submodule_update_clone *VAR_0,
  struct strbuf *VAR_1, const char *VAR_2)
{




 if (VAR_0->warn_if_uninitialized) {
  FUNC_2(VAR_1,
   FUNC_0("Submodule path '%s' not initialized"),
   VAR_2);
  FUNC_1(VAR_1, '\n');
  FUNC_3(VAR_1,
   FUNC_0("Maybe you want to use 'update --init'?"));
  FUNC_1(VAR_1, '\n');
 }
}
