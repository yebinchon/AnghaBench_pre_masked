
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpi_device {int qd_pcibus; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct qpi_device* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct qpi_device *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 += FUNC_1(VAR_0, VAR_1);
 if (VAR_2->qd_pcibus != -1)
  VAR_3 += FUNC_3(" pcibus %d", VAR_2->qd_pcibus);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
