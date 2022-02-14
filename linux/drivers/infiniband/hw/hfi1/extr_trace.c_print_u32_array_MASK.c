
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;


 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,char*,int ) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(
 struct trace_seq *VAR_0,
 u32 *VAR_1, int VAR_2)
{
 int VAR_3;
 const char *VAR_4 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2 ; VAR_3++)
  FUNC_1(VAR_0, "%s%#x", VAR_3 == 0 ? "" : " ", VAR_1[VAR_3]);
 FUNC_2(VAR_0, 0);
 return VAR_4;
}
