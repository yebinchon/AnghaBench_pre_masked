
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_4,
  unsigned long VAR_5)
{
 FUNC_1(VAR_1, "%sabling debug\n", VAR_5 ? "En" : "Dis");

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 VAR_3 = VAR_5 ? 1 : 0;
 return VAR_3;
}
