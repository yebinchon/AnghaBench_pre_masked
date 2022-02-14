
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,char const*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_0, int VAR_1, const char *VAR_2,
   u16 VAR_3)
{
 if (VAR_3 != 0)
  FUNC_0(VAR_0, "Invalid %s limit %d on VL %d, ignoring\n",
       VAR_2, (int)VAR_3, VAR_1);
}
