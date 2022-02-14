
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_hdr {int status; int sb_len_wr; scalar_t__ sbp; scalar_t__ mx_sb_len; int resid; int info; int driver_status; int host_status; int masked_status; int msg_status; } ;
struct scsi_request {int result; int sense; scalar_t__ sense_len; int resid_len; } ;
struct request {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int) ;
 struct scsi_request* FUNC_6 (struct request*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct request *VAR_2, struct sg_io_hdr *VAR_3,
     struct bio *VAR_4)
{
 struct scsi_request *VAR_5 = FUNC_6(VAR_2);
 int VAR_6, VAR_7 = 0;




 VAR_3->status = VAR_5->result & 0xff;
 VAR_3->masked_status = FUNC_7(VAR_5->result);
 VAR_3->msg_status = FUNC_5(VAR_5->result);
 VAR_3->host_status = FUNC_3(VAR_5->result);
 VAR_3->driver_status = FUNC_2(VAR_5->result);
 VAR_3->info = 0;
 if (VAR_3->masked_status || VAR_3->host_status || VAR_3->driver_status)
  VAR_3->info |= VAR_1;
 VAR_3->resid = VAR_5->resid_len;
 VAR_3->sb_len_wr = 0;

 if (VAR_5->sense_len && VAR_3->sbp) {
  int VAR_8 = FUNC_4((unsigned int) VAR_3->mx_sb_len, VAR_5->sense_len);

  if (!FUNC_1(VAR_3->sbp, VAR_5->sense, VAR_8))
   VAR_3->sb_len_wr = VAR_8;
  else
   VAR_7 = -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_7)
  VAR_7 = VAR_6;

 return VAR_7;
}
