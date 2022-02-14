
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union drbd_state {scalar_t__ role; scalar_t__ peer; scalar_t__ conn; scalar_t__ disk; scalar_t__ pdsk; } ;
struct net_conf {int fencing; scalar_t__* verify_alg; int two_primaries; } ;
struct drbd_device {scalar_t__ open_cnt; TYPE_1__* ldev; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum drbd_fencing_p { ____Placeholder_drbd_fencing_p } drbd_fencing_p ;
struct TYPE_6__ {int agreed_pro_version; int net_conf; } ;
struct TYPE_5__ {TYPE_3__* connection; } ;
struct TYPE_4__ {int disk_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (struct drbd_device*) ;
 scalar_t__ FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (struct drbd_device*) ;
 struct net_conf* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static enum drbd_state_rv
FUNC_7(struct drbd_device *VAR_28, union drbd_state VAR_29)
{


 enum drbd_fencing_p VAR_30;
 enum drbd_state_rv VAR_31 = VAR_26;
 struct net_conf *VAR_32;

 FUNC_5();
 VAR_30 = VAR_12;
 if (FUNC_2(VAR_28)) {
  VAR_30 = FUNC_4(VAR_28->ldev->disk_conf)->fencing;
  FUNC_3(VAR_28);
 }

 VAR_32 = FUNC_4(FUNC_1(VAR_28)->connection->net_conf);
 if (VAR_32) {
  if (!VAR_32->two_primaries && VAR_29.role == VAR_14) {
   if (VAR_29.peer == VAR_14)
    VAR_31 = VAR_27;
   else if (FUNC_0(FUNC_1(VAR_28)->connection) == VAR_14)
    VAR_31 = VAR_24;
  }
 }

 if (VAR_31 <= 0)
  goto out;
 else if (VAR_29.role == VAR_15 && VAR_28->open_cnt)
  VAR_31 = VAR_17;

 else if (VAR_29.role == VAR_14 && VAR_29.conn < VAR_0 && VAR_29.disk < VAR_11)
  VAR_31 = VAR_22;

 else if (VAR_30 >= VAR_13 &&
   VAR_29.role == VAR_14 && VAR_29.conn < VAR_0 && VAR_29.pdsk >= VAR_10)
  VAR_31 = VAR_25;

 else if (VAR_29.role == VAR_14 && VAR_29.disk <= VAR_8 && VAR_29.pdsk <= VAR_8)
  VAR_31 = VAR_22;

 else if (VAR_29.conn > VAR_0 && VAR_29.disk < VAR_8)
  VAR_31 = VAR_20;

 else if (VAR_29.conn > VAR_0 && VAR_29.pdsk < VAR_8)
  VAR_31 = VAR_21;

 else if (VAR_29.conn > VAR_0 && VAR_29.disk < VAR_11 && VAR_29.pdsk < VAR_11)
  VAR_31 = VAR_22;

 else if ((VAR_29.conn == VAR_0 ||
    VAR_29.conn == VAR_7 ||
    VAR_29.conn == VAR_4 ||
    VAR_29.conn == VAR_1) &&
    VAR_29.disk == VAR_9)
  VAR_31 = VAR_16;

 else if ((VAR_29.conn == VAR_5 || VAR_29.conn == VAR_6) &&
   (VAR_32->verify_alg[0] == 0))
  VAR_31 = VAR_23;

 else if ((VAR_29.conn == VAR_5 || VAR_29.conn == VAR_6) &&
    FUNC_1(VAR_28)->connection->agreed_pro_version < 88)
  VAR_31 = VAR_19;

 else if (VAR_29.role == VAR_14 && VAR_29.disk < VAR_11 && VAR_29.pdsk < VAR_11)
  VAR_31 = VAR_22;

 else if ((VAR_29.conn == VAR_2 || VAR_29.conn == VAR_3) &&
                 VAR_29.pdsk == VAR_10)
  VAR_31 = VAR_18;

 else if (VAR_29.conn >= VAR_0 && VAR_29.pdsk == VAR_10)
  VAR_31 = VAR_16;

out:
 FUNC_6();

 return VAR_31;
}
