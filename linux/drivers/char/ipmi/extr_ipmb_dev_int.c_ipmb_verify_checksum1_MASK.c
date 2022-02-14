
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ checksum1; scalar_t__ netfn_rs_lun; } ;
struct ipmb_dev {TYPE_1__ request; } ;



__attribute__((used)) static u8 FUNC_0(struct ipmb_dev *VAR_0, u8 VAR_1)
{

 return (VAR_1 + VAR_0->request.netfn_rs_lun +
  VAR_0->request.checksum1);
}
