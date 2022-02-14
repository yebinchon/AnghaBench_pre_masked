
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr; TYPE_1__* items; } ;
struct testsuite {scalar_t__ next; scalar_t__ write_junit_xml; scalar_t__ trace; scalar_t__ verbose_log; scalar_t__ verbose; scalar_t__ immediate; scalar_t__ quiet; TYPE_2__ tests; } ;
struct strbuf {int dummy; } ;
struct child_process {int args; } ;
struct TYPE_3__ {char* string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char const*,int *) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct child_process *VAR_0, struct strbuf *VAR_1, void *VAR_2,
       void **VAR_3)
{
 struct testsuite *VAR_4 = VAR_2;
 const char *VAR_5;
 if (VAR_4->next >= VAR_4->tests.nr)
  return 0;

 VAR_5 = VAR_4->tests.items[VAR_4->next++].string;
 FUNC_1(&VAR_0->args, "sh", VAR_5, ((void*)0));
 if (VAR_4->quiet)
  FUNC_0(&VAR_0->args, "--quiet");
 if (VAR_4->immediate)
  FUNC_0(&VAR_0->args, "-i");
 if (VAR_4->verbose)
  FUNC_0(&VAR_0->args, "-v");
 if (VAR_4->verbose_log)
  FUNC_0(&VAR_0->args, "-V");
 if (VAR_4->trace)
  FUNC_0(&VAR_0->args, "-x");
 if (VAR_4->write_junit_xml)
  FUNC_0(&VAR_0->args, "--write-junit-xml");

 FUNC_2(VAR_1, "Output of '%s':\n", VAR_5);
 *VAR_3 = (void *)VAR_5;

 return 1;
}
