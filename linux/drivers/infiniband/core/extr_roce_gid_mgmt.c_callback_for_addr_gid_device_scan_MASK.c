
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct update_gid_event_work {int gid_attr; int gid; int gid_op; } ;
struct net_device {int dummy; } ;
struct ib_device {int dummy; } ;


 void FUNC_0 (int ,struct ib_device*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ib_device *VAR_0,
           u8 VAR_1,
           struct net_device *VAR_2,
           void *VAR_3)
{
 struct update_gid_event_work *VAR_4 = VAR_3;

 return FUNC_0(VAR_4->gid_op, VAR_0,
     VAR_1, &VAR_4->gid,
     &VAR_4->gid_attr);
}
