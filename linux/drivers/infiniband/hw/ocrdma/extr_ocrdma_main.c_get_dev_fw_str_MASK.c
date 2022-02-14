
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* fw_ver; } ;
struct ocrdma_dev {TYPE_1__ attr; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ocrdma_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_1, char *VAR_2)
{
 struct ocrdma_dev *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, "%s", &VAR_3->attr.fw_ver[0]);
}
