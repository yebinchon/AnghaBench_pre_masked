
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct cdrom_device_info *VAR_2,
           unsigned int VAR_3, int VAR_4)
{

 return (FUNC_0(VAR_1) & 0xF0) == 0x60 ?
  VAR_0 : 0;
}
