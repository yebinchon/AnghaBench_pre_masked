
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* timestamp_t ;
struct reflog_expire_cfg {void* expire_unreachable; void* expire_total; } ;




 void* VAR_0 ;
 void* VAR_1 ;
 struct reflog_expire_cfg* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (void**,char const*,char const*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 const char *VAR_5, *VAR_6;
 int VAR_7;
 timestamp_t VAR_8;
 int VAR_9;
 struct reflog_expire_cfg *VAR_10;

 if (FUNC_3(VAR_2, "gc", &VAR_5, &VAR_7, &VAR_6) < 0)
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 if (!FUNC_4(VAR_6, "reflogexpire")) {
  VAR_9 = 129;
  if (FUNC_1(&VAR_8, VAR_2, VAR_3))
   return -1;
 } else if (!FUNC_4(VAR_6, "reflogexpireunreachable")) {
  VAR_9 = 128;
  if (FUNC_1(&VAR_8, VAR_2, VAR_3))
   return -1;
 } else
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 if (!VAR_5) {
  switch (VAR_9) {
  case 129:
   VAR_0 = VAR_8;
   break;
  case 128:
   VAR_1 = VAR_8;
   break;
  }
  return 0;
 }

 VAR_10 = FUNC_0(VAR_5, VAR_7);
 if (!VAR_10)
  return -1;
 switch (VAR_9) {
 case 129:
  VAR_10->expire_total = VAR_8;
  break;
 case 128:
  VAR_10->expire_unreachable = VAR_8;
  break;
 }
 return 0;
}
