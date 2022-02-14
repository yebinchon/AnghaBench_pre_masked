
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct ib_gid_attr {struct net_device* ndev; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int sgid_index; } ;
struct TYPE_5__ {int ppath_sgid_index; } ;
struct TYPE_6__ {TYPE_1__ sidr_req_rcvd; TYPE_2__ req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; TYPE_3__ param; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_device*,int ,int ,union ib_gid*,struct ib_gid_attr*) ;

__attribute__((used)) static struct net_device *
FUNC_1(struct ib_device *VAR_3, u8 VAR_4,
    const struct ib_cm_event *VAR_5)
{
 struct ib_gid_attr VAR_6;
 union ib_gid VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_5->event == VAR_1) {
  VAR_8 = FUNC_0(VAR_3, VAR_4,
      VAR_5->param.req_rcvd.ppath_sgid_index, &VAR_7, &VAR_6);
 } else if (VAR_5->event == VAR_2) {
  VAR_8 = FUNC_0(VAR_3, VAR_4,
      VAR_5->param.sidr_req_rcvd.sgid_index, &VAR_7, &VAR_6);
 }
 if (VAR_8)
  return (((void*)0));
 return (VAR_6.ndev);
}
