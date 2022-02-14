
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_connection {scalar_t__ cstate; int flags; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drbd_connection*,union drbd_state,union drbd_state,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static enum drbd_state_rv
FUNC_2(struct drbd_connection *VAR_7, union drbd_state VAR_8, union drbd_state VAR_9)
{
 enum drbd_state_rv VAR_10, VAR_11 = VAR_6; ;

 if (FUNC_1(VAR_1, &VAR_7->flags))
  VAR_11 = VAR_4;

 if (FUNC_1(VAR_0, &VAR_7->flags))
  VAR_11 = VAR_3;

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9, 0);
 if (VAR_10 == VAR_5 && VAR_7->cstate == VAR_2)
  return VAR_11;

 return VAR_10;
}
