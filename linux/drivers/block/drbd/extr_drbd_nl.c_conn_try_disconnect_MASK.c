
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_connection {int cstate; int receiver; TYPE_1__* resource; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum drbd_conns { ____Placeholder_drbd_conns } drbd_conns ;
struct TYPE_2__ {int req_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;


 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct drbd_connection*,int ,int) ;
 int VAR_11 ;
 int FUNC_3 (struct drbd_connection*,char*,int) ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static enum drbd_state_rv FUNC_7(struct drbd_connection *VAR_13, bool VAR_14)
{
 enum drbd_conns VAR_15;
 enum drbd_state_rv VAR_16;

repeat:
 VAR_16 = FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_2),
   VAR_14 ? VAR_0 : 0);

 switch (VAR_16) {
 case 129:
  break;
 case 131:
  return VAR_9;
 case 128:

  VAR_16 = FUNC_2(VAR_13, FUNC_1(VAR_10, VAR_2, VAR_12, VAR_5), 0);

  if (VAR_16 == VAR_8)
   VAR_16 = FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_2), VAR_1);

  break;
 case 130:
  FUNC_5(&VAR_13->resource->req_lock);
  VAR_15 = VAR_13->cstate;
  FUNC_6(&VAR_13->resource->req_lock);
  if (VAR_15 <= VAR_4)
   goto repeat;

  VAR_16 = FUNC_2(VAR_13, FUNC_1(VAR_10, VAR_2,
       VAR_11, VAR_5), 0);
  if (VAR_16 == VAR_6 || VAR_16 == VAR_7) {
   VAR_16 = FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_2),
     VAR_0);
  }
  break;
 default:;

 }

 if (VAR_16 >= VAR_9) {
  enum drbd_state_rv VAR_17;




  FUNC_4(&VAR_13->receiver);







  VAR_17 = FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_3),
    VAR_1 | VAR_0);
  if (VAR_17 < VAR_9)
   FUNC_3(VAR_13,
    "unexpected rv2=%d in conn_try_disconnect()\n",
    VAR_17);


 }
 return VAR_16;
}
