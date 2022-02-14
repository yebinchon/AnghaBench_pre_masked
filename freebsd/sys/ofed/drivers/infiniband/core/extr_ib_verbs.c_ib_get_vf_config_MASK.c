
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ifla_vf_info {int dummy; } ;
struct ib_device {int (* get_vf_config ) (struct ib_device*,int,int ,struct ifla_vf_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int,int ,struct ifla_vf_info*) ;

int FUNC_1(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
       struct ifla_vf_info *VAR_4)
{
 if (!VAR_1->get_vf_config)
  return -VAR_0;

 return VAR_1->get_vf_config(VAR_1, VAR_2, VAR_3, VAR_4);
}
