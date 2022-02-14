
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hfi1_devdata *VAR_0, const char *VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 if (VAR_2 == VAR_3)
  return 0;

 FUNC_0(VAR_0,
     "invalid firmware header field %s: expected 0x%x, actual 0x%x\n",
     VAR_1, VAR_3, VAR_2);
 return 1;
}
