
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct cper_mem_err_compact {int dummy; } ;


 scalar_t__ FUNC_0 (struct cper_mem_err_compact*,int ) ;
 scalar_t__ FUNC_1 (struct cper_mem_err_compact*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,int ) ;
 int FUNC_4 (struct trace_seq*,char) ;

const char *FUNC_5(struct trace_seq *VAR_1,
    struct cper_mem_err_compact *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2, VAR_0))
  FUNC_3(VAR_1, "%s", VAR_0);
 if (FUNC_0(VAR_2, VAR_0))
  FUNC_3(VAR_1, "%s", VAR_0);
 FUNC_4(VAR_1, '\0');

 return VAR_3;
}
