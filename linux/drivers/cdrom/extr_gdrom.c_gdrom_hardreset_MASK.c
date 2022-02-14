
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct cdrom_device_info *VAR_1)
{
 int VAR_2;
 FUNC_1(0x1fffff, VAR_0);
 for (VAR_2 = 0xa0000000; VAR_2 < 0xa0200000; VAR_2 += 4)
  FUNC_0(VAR_2);
 return 0;
}
