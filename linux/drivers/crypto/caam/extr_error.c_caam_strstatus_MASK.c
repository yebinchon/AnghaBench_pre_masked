
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;






 int FUNC_1 (struct device*,size_t,char const*) ;

int FUNC_2(struct device *VAR_2, u32 VAR_3, bool VAR_4)
{
 static const struct stat_src {
  int (*report_ssed)(struct device *VAR_5, const u32 VAR_6,
       const char *VAR_7);
  const char *error;
 } VAR_8[16] = {
  { ((void*)0), "No error" },
  { ((void*)0), ((void*)0) },
  { 133, "CCB" },
  { 129, "Jump" },
  { 131, "DECO" },
  { 128, "Queue Manager Interface" },
  { 130, "Job Ring" },
  { 132, "Condition Code" },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
  { ((void*)0), ((void*)0) },
 };
 u32 VAR_9 = VAR_3 >> VAR_1;
 const char *VAR_10 = VAR_8[VAR_9].error;





 if (VAR_8[VAR_9].report_ssed)
  return VAR_8[VAR_9].report_ssed(VAR_2, VAR_3, VAR_10);

 if (VAR_10)
  FUNC_0(VAR_2, "%d: %s\n", VAR_9, VAR_10);
 else
  FUNC_0(VAR_2, "%d: unknown error source\n", VAR_9);

 return -VAR_0;
}
