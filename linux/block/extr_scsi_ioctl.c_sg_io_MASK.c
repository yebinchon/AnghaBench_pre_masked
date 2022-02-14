
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_hdr {char interface_id; int dxfer_len; int dxfer_direction; int flags; scalar_t__ cmd_len; int duration; int dxferp; int iovec_count; } ;
struct scsi_request {scalar_t__ retries; int cmd; } ;
struct request_queue {int dummy; } ;
struct request {struct bio* bio; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct gendisk {int dummy; } ;
struct bio {int dummy; } ;
typedef int ssize_t ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_2 (struct request*,struct sg_io_hdr*,struct bio*) ;
 int FUNC_3 (struct request_queue*,struct gendisk*,struct request*,int) ;
 int FUNC_4 (struct request_queue*,struct request*,struct sg_io_hdr*,int ) ;
 struct request* FUNC_5 (struct request_queue*,int ,int ) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request_queue*,struct request*,int *,int ,int,int ) ;
 int FUNC_8 (struct request_queue*,struct request*,int *,struct iov_iter*,int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct iovec**,struct iov_iter*) ;
 int FUNC_10 (struct iov_iter*,int) ;
 unsigned long VAR_8 ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (struct iovec*) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (struct request_queue*) ;
 int FUNC_15 (struct request*) ;
 struct scsi_request* FUNC_16 (struct request*) ;
 int FUNC_17 (struct scsi_request*) ;

__attribute__((used)) static int FUNC_18(struct request_queue *VAR_9, struct gendisk *VAR_10,
  struct sg_io_hdr *VAR_11, fmode_t VAR_12)
{
 unsigned long VAR_13;
 ssize_t VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 struct request *VAR_17;
 struct scsi_request *VAR_18;
 struct bio *VAR_19;

 if (VAR_11->interface_id != 'S')
  return -VAR_1;

 if (VAR_11->dxfer_len > (FUNC_14(VAR_9) << 9))
  return -VAR_2;

 if (VAR_11->dxfer_len)
  switch (VAR_11->dxfer_direction) {
  default:
   return -VAR_1;
  case 129:
   VAR_15 = 1;
   break;
  case 128:
  case 130:
   break;
  }
 if (VAR_11->flags & VAR_7)
  VAR_16 = 1;

 VAR_14 = -VAR_3;
 VAR_17 = FUNC_5(VAR_9, VAR_15 ? VAR_6 : VAR_5, 0);
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);
 VAR_18 = FUNC_16(VAR_17);

 if (VAR_11->cmd_len > VAR_0) {
  VAR_18->cmd = FUNC_13(VAR_11->cmd_len, VAR_4);
  if (!VAR_18->cmd)
   goto out_put_request;
 }

 VAR_14 = FUNC_4(VAR_9, VAR_17, VAR_11, VAR_12);
 if (VAR_14 < 0)
  goto out_free_cdb;

 VAR_14 = 0;
 if (VAR_11->iovec_count) {
  struct iov_iter VAR_20;
  struct iovec *VAR_21 = ((void*)0);

  VAR_14 = FUNC_9(FUNC_15(VAR_17),
       VAR_11->dxferp, VAR_11->iovec_count,
       0, &VAR_21, &VAR_20);
  if (VAR_14 < 0)
   goto out_free_cdb;


  FUNC_10(&VAR_20, VAR_11->dxfer_len);

  VAR_14 = FUNC_8(VAR_9, VAR_17, ((void*)0), &VAR_20, VAR_4);
  FUNC_12(VAR_21);
 } else if (VAR_11->dxfer_len)
  VAR_14 = FUNC_7(VAR_9, VAR_17, ((void*)0), VAR_11->dxferp, VAR_11->dxfer_len,
          VAR_4);

 if (VAR_14)
  goto out_free_cdb;

 VAR_19 = VAR_17->bio;
 VAR_18->retries = 0;

 VAR_13 = VAR_8;





 FUNC_3(VAR_9, VAR_10, VAR_17, VAR_16);

 VAR_11->duration = FUNC_11(VAR_8 - VAR_13);

 VAR_14 = FUNC_2(VAR_17, VAR_11, VAR_19);

out_free_cdb:
 FUNC_17(VAR_18);
out_put_request:
 FUNC_6(VAR_17);
 return VAR_14;
}
