
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct grep_source {scalar_t__ driver; scalar_t__ path; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct index_state*,scalar_t__) ;

void FUNC_4(struct grep_source *VAR_0,
        struct index_state *VAR_1)
{
 if (VAR_0->driver)
  return;

 FUNC_0();
 if (VAR_0->path)
  VAR_0->driver = FUNC_3(VAR_1, VAR_0->path);
 if (!VAR_0->driver)
  VAR_0->driver = FUNC_2("default");
 FUNC_1();
}
