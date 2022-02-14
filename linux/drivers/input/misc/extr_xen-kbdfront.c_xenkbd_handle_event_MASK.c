
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union xenkbd_in_event {int type; int mtouch; int pos; int key; int motion; } ;
struct xenkbd_info {int dummy; } ;






 int FUNC_0 (struct xenkbd_info*,int *) ;
 int FUNC_1 (struct xenkbd_info*,int *) ;
 int FUNC_2 (struct xenkbd_info*,int *) ;
 int FUNC_3 (struct xenkbd_info*,int *) ;

__attribute__((used)) static void FUNC_4(struct xenkbd_info *VAR_0,
    union xenkbd_in_event *VAR_1)
{
 switch (VAR_1->type) {
 case 130:
  FUNC_1(VAR_0, &VAR_1->motion);
  break;

 case 131:
  FUNC_0(VAR_0, &VAR_1->key);
  break;

 case 128:
  FUNC_3(VAR_0, &VAR_1->pos);
  break;

 case 129:
  FUNC_2(VAR_0, &VAR_1->mtouch);
  break;
 }
}
