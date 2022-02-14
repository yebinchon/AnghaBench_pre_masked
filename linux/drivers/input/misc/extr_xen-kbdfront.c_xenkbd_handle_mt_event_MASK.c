
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int minor; int major; } ;
struct TYPE_4__ {int abs_y; int abs_x; } ;
struct TYPE_6__ {int orientation; TYPE_2__ shape; TYPE_1__ pos; } ;
struct xenkbd_mtouch {scalar_t__ contact_id; int event_type; TYPE_3__ u; } ;
struct xenkbd_info {scalar_t__ mtouch_cur_contact_id; int mtouch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct xenkbd_info *VAR_6,
       struct xenkbd_mtouch *VAR_7)
{
 if (FUNC_5(!VAR_6->mtouch))
  return;

 if (VAR_7->contact_id != VAR_6->mtouch_cur_contact_id) {
  VAR_6->mtouch_cur_contact_id = VAR_7->contact_id;
  FUNC_1(VAR_6->mtouch, VAR_7->contact_id);
 }

 switch (VAR_7->event_type) {
 case 133:
  FUNC_0(VAR_6->mtouch, VAR_5, 1);


 case 132:
  FUNC_3(VAR_6->mtouch, VAR_1,
     VAR_7->u.pos.abs_x);
  FUNC_3(VAR_6->mtouch, VAR_2,
     VAR_7->u.pos.abs_y);
  break;

 case 130:
  FUNC_3(VAR_6->mtouch, VAR_3,
     VAR_7->u.shape.major);
  FUNC_3(VAR_6->mtouch, VAR_4,
     VAR_7->u.shape.minor);
  break;

 case 131:
  FUNC_3(VAR_6->mtouch, VAR_0,
     VAR_7->u.orientation);
  break;

 case 128:
  FUNC_0(VAR_6->mtouch, VAR_5, 0);
  break;

 case 129:
  FUNC_2(VAR_6->mtouch);
  FUNC_4(VAR_6->mtouch);
  break;
 }
}
