
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


struct TYPE_11__ {scalar_t__ dxfer_len; } ;
struct TYPE_10__ {scalar_t__ resid; scalar_t__ dxfer_len; } ;
struct TYPE_9__ {int status; struct camdd_buf* ccb_buf; } ;
union ccb {TYPE_5__ nvmeio; TYPE_4__ csio; TYPE_3__ ccb_h; } ;
struct camdd_dev_pass {int protocol; TYPE_6__* dev; } ;
struct TYPE_7__ {struct camdd_dev_pass pass; } ;
struct camdd_dev {int mutex; int flags; scalar_t__ bytes_transferred; int cur_active_io; int active_queue; TYPE_1__ dev_spec; } ;
struct camdd_buf_data {scalar_t__ resid; union ccb ccb; } ;
struct TYPE_8__ {struct camdd_buf_data data; } ;
struct camdd_buf {scalar_t__ status; TYPE_2__ buf_type_spec; } ;
typedef int ccb ;
typedef int cam_status ;
struct TYPE_12__ {int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int *,struct camdd_buf*,int ,int ) ;
 int FUNC_1 (union ccb*,union ccb*,int) ;
 int FUNC_2 (TYPE_6__*,union ccb*,int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (union ccb*,int) ;
 int FUNC_4 (struct camdd_dev*,struct camdd_buf*,int*) ;
 int FUNC_5 (int ,int ,union ccb*) ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_11 ;

int
FUNC_8(struct camdd_dev *VAR_12)
{
 struct camdd_dev_pass *VAR_13 = &VAR_12->dev_spec.pass;
 union ccb VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 FUNC_7(&VAR_12->mutex);



 while ((VAR_15 = FUNC_5(VAR_13->dev->fd, VAR_4, &VAR_14)) != -1) {
  struct camdd_buf *VAR_18;
  struct camdd_buf_data *VAR_19;
  cam_status VAR_20;
  union ccb *VAR_21;

  VAR_18 = VAR_14.ccb_h.ccb_buf;
  VAR_19 = &VAR_18->buf_type_spec.data;
  VAR_21 = &VAR_19->ccb;

  VAR_16++;




  FUNC_1(&VAR_14, VAR_21, sizeof(VAR_14));

  FUNC_6(&VAR_12->mutex);




  FUNC_0(&VAR_12->active_queue, VAR_18, VAR_9, VAR_10);
  VAR_12->cur_active_io--;

  VAR_20 = VAR_14.ccb_h.status & VAR_8;
  if (VAR_20 != VAR_7) {
   FUNC_2(VAR_13->dev, &VAR_14, VAR_6,
     VAR_5, VAR_11);
  }

  switch (VAR_13->protocol) {
  case 128:
   VAR_19->resid = VAR_14.csio.resid;
   VAR_12->bytes_transferred += (VAR_14.csio.dxfer_len - VAR_14.csio.resid);
   break;
  case 129:
   VAR_19->resid = 0;
   VAR_12->bytes_transferred += VAR_14.nvmeio.dxfer_len;
   break;
  default:
   return -1;
   break;
  }

  if (VAR_18->status == VAR_3)
   VAR_18->status = FUNC_3(&VAR_14, VAR_13->protocol);
  if (VAR_18->status == VAR_2)
   VAR_17++;
  else if (VAR_18->status == VAR_1) {




   VAR_12->flags |= VAR_0;
  }

  FUNC_4(VAR_12, VAR_18, &VAR_17);




  FUNC_7(&VAR_12->mutex);
 }

 FUNC_6(&VAR_12->mutex);

 if (VAR_17 > 0)
  return (-1);
 else
  return (VAR_16);
}
