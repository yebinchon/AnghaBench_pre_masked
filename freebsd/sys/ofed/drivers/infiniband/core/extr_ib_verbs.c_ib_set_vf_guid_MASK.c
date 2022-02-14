
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ib_device {int (* set_vf_guid ) (struct ib_device*,int,int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int,int ,int ,int) ;

int FUNC_1(struct ib_device *VAR_1, int VAR_2, u8 VAR_3, u64 VAR_4,
     int VAR_5)
{
 if (!VAR_1->set_vf_guid)
  return -VAR_0;

 return VAR_1->set_vf_guid(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
