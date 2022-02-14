
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rvt_dev_info {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibdev {int dummy; } ;
struct TYPE_2__ {int dc8051_ver; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct hfi1_ibdev*) ;
 struct hfi1_ibdev* FUNC_4 (struct rvt_dev_info*) ;
 struct rvt_dev_info* FUNC_5 (struct ib_device*) ;
 int FUNC_6 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_1, char *VAR_2)
{
 struct rvt_dev_info *VAR_3 = FUNC_5(VAR_1);
 struct hfi1_ibdev *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5 = FUNC_3(VAR_4)->dc8051_ver;

 FUNC_6(VAR_2, VAR_0, "%u.%u.%u", FUNC_0(VAR_5),
   FUNC_1(VAR_5), FUNC_2(VAR_5));
}
