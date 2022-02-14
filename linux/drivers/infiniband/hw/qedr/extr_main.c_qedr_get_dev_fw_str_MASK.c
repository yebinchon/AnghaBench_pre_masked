
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fw_ver; } ;
struct qedr_dev {TYPE_1__ attr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct qedr_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (char*,int ,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_1, char *VAR_2)
{
 struct qedr_dev *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = (u32)VAR_3->attr.fw_ver;

 FUNC_1(VAR_2, VAR_0, "%d.%d.%d.%d",
   (VAR_4 >> 24) & 0xFF, (VAR_4 >> 16) & 0xFF,
   (VAR_4 >> 8) & 0xFF, VAR_4 & 0xFF);
}
