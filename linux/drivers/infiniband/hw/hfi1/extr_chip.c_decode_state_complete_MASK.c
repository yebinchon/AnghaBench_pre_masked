
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,...) ;
 int FUNC_1 (struct hfi1_pportdata*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hfi1_pportdata *VAR_0, u32 VAR_1,
      const char *VAR_2)
{
 struct hfi1_devdata *VAR_3 = VAR_0->dd;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 VAR_4 = VAR_1 & 0x1;
 VAR_5 = (VAR_1 >> 1) & 0x7;
 VAR_6 = (VAR_1 >> 8) & 0xff;
 VAR_7 = (VAR_1 >> 16) & 0xffff;

 FUNC_0(VAR_3, "Last %s LNI state complete frame 0x%08x:\n",
     VAR_2, VAR_1);
 FUNC_0(VAR_3, "    last reported state state: %s (0x%x)\n",
     FUNC_2(VAR_5), VAR_5);
 FUNC_0(VAR_3, "    state successfully completed: %s\n",
     VAR_4 ? "yes" : "no");
 FUNC_0(VAR_3, "    fail reason 0x%x: %s\n",
     VAR_6, FUNC_1(VAR_0, VAR_6));
 FUNC_0(VAR_3, "    passing lane mask: 0x%x", VAR_7);
}
