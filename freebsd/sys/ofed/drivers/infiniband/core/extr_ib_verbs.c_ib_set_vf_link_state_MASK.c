
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int (* set_vf_link_state ) (struct ib_device*,int,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int,int ,int) ;

int FUNC_1(struct ib_device *VAR_1, int VAR_2, u8 VAR_3,
    int VAR_4)
{
 if (!VAR_1->set_vf_link_state)
  return -VAR_0;

 return VAR_1->set_vf_link_state(VAR_1, VAR_2, VAR_3, VAR_4);
}
