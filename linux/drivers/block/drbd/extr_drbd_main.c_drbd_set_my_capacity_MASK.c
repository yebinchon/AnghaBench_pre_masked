
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct drbd_device*,int) ;
 int FUNC_1 (struct drbd_device*,char*,int ,unsigned long long) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(struct drbd_device *VAR_0, sector_t VAR_1)
{
 char VAR_2[10];
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, "size = %s (%llu KB)\n",
  FUNC_2(VAR_2, VAR_1>>1), (unsigned long long)VAR_1>>1);
}
