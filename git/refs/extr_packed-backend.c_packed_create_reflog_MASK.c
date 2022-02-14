
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_store {int dummy; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct ref_store *VAR_0,
          const char *VAR_1, int VAR_2,
          struct strbuf *VAR_3)
{
 FUNC_0("packed reference store does not support reflogs");
}
