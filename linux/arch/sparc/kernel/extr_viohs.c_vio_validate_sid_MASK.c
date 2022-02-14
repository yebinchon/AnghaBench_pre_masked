
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_msg_tag {scalar_t__ type; scalar_t__ stype; scalar_t__ stype_env; scalar_t__ sid; } ;
struct vio_driver_state {int dev_class; scalar_t__ _peer_sid; scalar_t__ _local_sid; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_1(struct vio_driver_state *VAR_5, struct vio_msg_tag *VAR_6)
{
 u32 VAR_7;




 if (VAR_6->type == VAR_3 &&
     VAR_6->stype == VAR_2 &&
     VAR_6->stype_env == VAR_4)
  return 0;


 switch (VAR_5->dev_class) {
 case 129:
 case 128:
 case 130:
 default:
  VAR_7 = VAR_5->_peer_sid;
  break;

 case 131:
  VAR_7 = VAR_5->_local_sid;
  break;
 }

 if (VAR_7 == VAR_6->sid)
  return 0;
 FUNC_0(VAR_0, "BAD SID tag->sid[%08x] peer_sid[%08x] local_sid[%08x]\n",
        VAR_6->sid, VAR_5->_peer_sid, VAR_5->_local_sid);
 return -VAR_1;
}
