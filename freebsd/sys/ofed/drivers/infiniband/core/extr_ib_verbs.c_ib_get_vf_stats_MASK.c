
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ifla_vf_stats {int dummy; } ;
struct ib_device {int (* get_vf_stats ) (struct ib_device*,int,int ,struct ifla_vf_stats*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int,int ,struct ifla_vf_stats*) ;

int FUNC_1(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
      struct ifla_vf_stats *VAR_4)
{
 if (!VAR_1->get_vf_stats)
  return -VAR_0;

 return VAR_1->get_vf_stats(VAR_1, VAR_2, VAR_3, VAR_4);
}
