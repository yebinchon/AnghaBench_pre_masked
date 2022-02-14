
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union drbd_state {scalar_t__ conn; scalar_t__ pdsk; scalar_t__ disk; scalar_t__ role; int susp_fen; int susp_nod; scalar_t__ user_isp; scalar_t__ peer_isp; scalar_t__ aftr_isp; int peer; } ;
struct TYPE_9__ {scalar_t__ disk; scalar_t__ pdsk; } ;
struct drbd_device {scalar_t__ ed_uuid; TYPE_5__* resource; TYPE_3__ new_state_tmp; TYPE_2__* ldev; } ;
typedef enum sanitize_state_warnings { ____Placeholder_sanitize_state_warnings } sanitize_state_warnings ;
typedef enum drbd_fencing_p { ____Placeholder_drbd_fencing_p } drbd_fencing_p ;
typedef enum drbd_disk_state { ____Placeholder_drbd_disk_state } drbd_disk_state ;
typedef enum drbd_conns { ____Placeholder_drbd_conns } drbd_conns ;
struct TYPE_12__ {int fencing; } ;
struct TYPE_10__ {scalar_t__ on_no_data; } ;
struct TYPE_11__ {TYPE_4__ res_opts; } ;
struct TYPE_7__ {scalar_t__* uuid; } ;
struct TYPE_8__ {TYPE_1__ md; int disk_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 scalar_t__ FUNC_0 (struct drbd_device*) ;
 scalar_t__ FUNC_1 (struct drbd_device*,scalar_t__) ;
 int FUNC_2 (struct drbd_device*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static union drbd_state FUNC_6(struct drbd_device *VAR_21, union drbd_state VAR_22,
           union drbd_state VAR_23, enum sanitize_state_warnings *VAR_24)
{
 enum drbd_fencing_p VAR_25;
 enum drbd_disk_state VAR_26, VAR_27, VAR_28, VAR_29;

 if (VAR_24)
  *VAR_24 = VAR_15;

 VAR_25 = VAR_11;
 if (FUNC_0(VAR_21)) {
  FUNC_4();
  VAR_25 = FUNC_3(VAR_21->ldev->disk_conf)->fencing;
  FUNC_5();
  FUNC_2(VAR_21);
 }


 if (VAR_23.conn < 149) {
  VAR_23.peer_isp = 0;
  VAR_23.peer = VAR_19;
  if (VAR_23.pdsk > VAR_9 || VAR_23.pdsk < VAR_6)
   VAR_23.pdsk = VAR_9;
 }


 if (VAR_23.conn == 142 && VAR_23.disk == VAR_4 && VAR_23.role == VAR_18)
  VAR_23.aftr_isp = 0;



 if (VAR_23.conn > 149 && (VAR_23.disk <= VAR_5 || VAR_23.pdsk <= VAR_5)) {
  if (VAR_24)
   *VAR_24 = VAR_23.conn == 134 || VAR_23.conn == 133 ?
    VAR_0 : VAR_1;
  VAR_23.conn = 149;
 }


 if (VAR_23.conn < 149 && VAR_23.disk == VAR_7 &&
     FUNC_1(VAR_21, VAR_7)) {
  if (VAR_21->ed_uuid == VAR_21->ldev->md.uuid[VAR_20]) {
   VAR_23.disk = VAR_21->new_state_tmp.disk;
   VAR_23.pdsk = VAR_21->new_state_tmp.pdsk;
  } else {
   if (VAR_24)
    *VAR_24 = VAR_2;
   VAR_23.disk = VAR_4;
   VAR_23.pdsk = VAR_9;
  }
  FUNC_2(VAR_21);
 }


 if (VAR_23.conn >= 149 && VAR_23.conn < 152) {
  if (VAR_23.disk == VAR_3 || VAR_23.disk == VAR_8)
   VAR_23.disk = VAR_10;
  if (VAR_23.pdsk == VAR_3 || VAR_23.pdsk == VAR_8)
   VAR_23.pdsk = VAR_10;
 }


 VAR_26 = VAR_4;
 VAR_27 = VAR_10;
 VAR_28 = VAR_6;
 VAR_29 = VAR_9;
 switch ((enum drbd_conns)VAR_23.conn) {
 case 131:
 case 144:
 case 140:
 case 128:
 case 151:
  VAR_26 = VAR_6;
  VAR_27 = VAR_8;
  VAR_28 = VAR_10;
  VAR_29 = VAR_10;
  break;
 case 134:
 case 133:
  VAR_26 = VAR_10;
  VAR_27 = VAR_10;
  VAR_28 = VAR_10;
  VAR_29 = VAR_10;
  break;
 case 149:
  VAR_26 = VAR_4;
  VAR_27 = VAR_10;
  VAR_28 = VAR_4;
  VAR_29 = VAR_10;
  break;
 case 132:
 case 145:
 case 141:
 case 152:
  VAR_26 = VAR_10;
  VAR_27 = VAR_10;
  VAR_28 = VAR_6;
  VAR_29 = VAR_3;
  break;
 case 138:
  VAR_26 = VAR_6;
  VAR_27 = VAR_6;
  VAR_28 = VAR_10;
  VAR_29 = VAR_10;
  break;
 case 139:
  VAR_26 = VAR_10;
  VAR_27 = VAR_10;
  VAR_28 = VAR_6;
  VAR_29 = VAR_6;
  break;
 case 142:
 case 148:
 case 135:
 case 136:
 case 150:
 case 146:
 case 143:
 case 137:
 case 130:
 case 129:
 case 147:
  break;
 }
 if (VAR_23.disk > VAR_27)
  VAR_23.disk = VAR_27;

 if (VAR_23.disk < VAR_26) {
  if (VAR_24)
   *VAR_24 = VAR_13;
  VAR_23.disk = VAR_26;
 }
 if (VAR_23.pdsk > VAR_29)
  VAR_23.pdsk = VAR_29;

 if (VAR_23.pdsk < VAR_28) {
  if (VAR_24)
   *VAR_24 = VAR_14;
  VAR_23.pdsk = VAR_28;
 }

 if (VAR_25 == VAR_12 &&
     (VAR_23.role == VAR_17 && VAR_23.conn < 149 && VAR_23.pdsk > VAR_8) &&
     !(VAR_22.role == VAR_17 && VAR_22.conn < 149 && VAR_22.pdsk > VAR_8))
  VAR_23.susp_fen = 1;

 if (VAR_21->resource->res_opts.on_no_data == VAR_16 &&
     (VAR_23.role == VAR_17 && VAR_23.disk < VAR_10 && VAR_23.pdsk < VAR_10) &&
     !(VAR_22.role == VAR_17 && VAR_22.disk < VAR_10 && VAR_22.pdsk < VAR_10))
  VAR_23.susp_nod = 1;

 if (VAR_23.aftr_isp || VAR_23.peer_isp || VAR_23.user_isp) {
  if (VAR_23.conn == 139)
   VAR_23.conn = 145;
  if (VAR_23.conn == 138)
   VAR_23.conn = 144;
 } else {
  if (VAR_23.conn == 145)
   VAR_23.conn = 139;
  if (VAR_23.conn == 144)
   VAR_23.conn = 138;
 }

 return VAR_23;
}
