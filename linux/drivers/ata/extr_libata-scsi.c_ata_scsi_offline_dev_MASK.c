
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ sdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

int FUNC_1(struct ata_device *VAR_1)
{
 if (VAR_1->sdev) {
  FUNC_0(VAR_1->sdev, VAR_0);
  return 1;
 }
 return 0;
}
