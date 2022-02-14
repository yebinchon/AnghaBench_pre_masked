
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_device {int lg_pcibus; } ;
typedef int device_t ;


 struct legacy_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct legacy_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 VAR_3 += FUNC_1(VAR_0, VAR_1);
 if (VAR_2->lg_pcibus != -1)
  VAR_3 += FUNC_2(" pcibus %d", VAR_2->lg_pcibus);
 VAR_3 += FUNC_2("\n");

 return (VAR_3);
}
