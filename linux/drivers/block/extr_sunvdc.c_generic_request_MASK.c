
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vio_dring_state {int prod; } ;
struct vio_disk_vtoc {int dummy; } ;
struct vio_disk_geom {int dummy; } ;
struct vio_disk_devid {int dummy; } ;
struct TYPE_3__ {int state; int ack; } ;
struct vio_disk_desc {int operation; int size; int ncookies; TYPE_1__ hdr; scalar_t__ offset; int status; scalar_t__ slice; int req_id; int cookies; } ;
struct vio_completion {int err; int com; int waiting_for; } ;
struct TYPE_4__ {int lock; struct vio_completion* cmp; int lp; struct vio_dring_state* drings; } ;
struct vdc_port {int operations; TYPE_2__ vio; int req_id; int ring_cookies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct vdc_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,void*,int,int ,int ,unsigned int) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct vio_disk_desc* FUNC_8 (struct vio_dring_state*) ;
 int FUNC_9 (struct vio_dring_state*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct vdc_port *VAR_14, u8 VAR_15, void *VAR_16, int VAR_17)
{
 struct vio_dring_state *VAR_18;
 struct vio_completion VAR_19;
 struct vio_disk_desc *VAR_20;
 unsigned int VAR_21;
 unsigned long VAR_22;
 int VAR_23, VAR_24;
 void *VAR_25;

 if (!(((u64)1 << (u64)VAR_15) & VAR_14->operations))
  return -VAR_2;

 switch (VAR_15) {
 case 140:
 case 139:
 default:
  return -VAR_0;

 case 138:
  VAR_23 = 0;
  VAR_21 = 0;
  break;

 case 133:
  VAR_23 = sizeof(u32);
  VAR_21 = VAR_9;
  break;

 case 128:
  VAR_23 = sizeof(u32);
  VAR_21 = VAR_6;
  break;

 case 134:
  VAR_23 = sizeof(struct vio_disk_vtoc);
  VAR_21 = VAR_9;
  break;

 case 129:
  VAR_23 = sizeof(struct vio_disk_vtoc);
  VAR_21 = VAR_6;
  break;

 case 136:
  VAR_23 = sizeof(struct vio_disk_geom);
  VAR_21 = VAR_9;
  break;

 case 131:
  VAR_23 = sizeof(struct vio_disk_geom);
  VAR_21 = VAR_6;
  break;

 case 132:
  VAR_23 = 16;
  VAR_21 = VAR_7;
  break;

 case 137:
  VAR_23 = sizeof(struct vio_disk_devid);
  VAR_21 = VAR_9;
  break;

 case 135:
 case 130:
  return -VAR_2;
 };

 VAR_21 |= VAR_8 | VAR_4 | VAR_5;

 VAR_23 = (VAR_23 + 7) & ~7;
 VAR_25 = FUNC_3(VAR_23, VAR_3);
 if (!VAR_25)
  return -VAR_1;

 if (VAR_17 > VAR_23)
  VAR_17 = VAR_23;

 if (VAR_21 & VAR_6)
  FUNC_5(VAR_25, VAR_16, VAR_17);

 FUNC_6(&VAR_14->vio.lock, VAR_22);

 VAR_18 = &VAR_14->vio.drings[VAR_12];




 VAR_20 = FUNC_8(VAR_18);

 VAR_24 = FUNC_4(VAR_14->vio.lp, VAR_25, VAR_23,
        VAR_20->cookies, VAR_14->ring_cookies,
        VAR_21);
 if (VAR_24 < 0) {
  FUNC_7(&VAR_14->vio.lock, VAR_22);
  FUNC_2(VAR_25);
  return VAR_24;
 }

 FUNC_1(&VAR_19.com);
 VAR_19.waiting_for = VAR_13;
 VAR_14->vio.cmp = &VAR_19;

 VAR_20->hdr.ack = VAR_10;
 VAR_20->req_id = VAR_14->req_id;
 VAR_20->operation = VAR_15;
 VAR_20->slice = 0;
 VAR_20->status = ~0;
 VAR_20->offset = 0;
 VAR_20->size = VAR_23;
 VAR_20->ncookies = VAR_24;




 FUNC_11();
 VAR_20->hdr.state = VAR_11;

 VAR_24 = FUNC_0(VAR_14);
 if (VAR_24 >= 0) {
  VAR_14->req_id++;
  VAR_18->prod = FUNC_9(VAR_18, VAR_18->prod);
  FUNC_7(&VAR_14->vio.lock, VAR_22);

  FUNC_10(&VAR_19.com);
  VAR_24 = VAR_19.err;
 } else {
  VAR_14->vio.cmp = ((void*)0);
  FUNC_7(&VAR_14->vio.lock, VAR_22);
 }

 if (VAR_21 & VAR_9)
  FUNC_5(VAR_16, VAR_25, VAR_17);

 FUNC_2(VAR_25);

 return VAR_24;
}
