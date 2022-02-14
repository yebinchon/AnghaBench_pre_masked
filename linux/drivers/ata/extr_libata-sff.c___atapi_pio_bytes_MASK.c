
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct ata_queued_cmd {unsigned int curbytes; unsigned int cursg_ofs; struct scatterlist* cursg; TYPE_2__ tf; int nbytes; struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {TYPE_3__* ops; } ;
struct ata_eh_info {int dummy; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_6__ {unsigned int (* sff_data_xfer ) (struct ata_queued_cmd*,unsigned char*,unsigned int,int) ;} ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ata_eh_info*,char*,int ,unsigned int,unsigned int) ;
 unsigned char* FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 struct page* FUNC_5 (struct page*,unsigned int) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;
 struct page* FUNC_7 (struct scatterlist*) ;
 unsigned int FUNC_8 (struct ata_queued_cmd*,unsigned char*,unsigned int,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ata_queued_cmd *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = (VAR_5->tf.flags & VAR_0) ? VAR_4 : VAR_3;
 struct ata_port *VAR_8 = VAR_5->ap;
 struct ata_device *VAR_9 = VAR_5->dev;
 struct ata_eh_info *VAR_10 = &VAR_9->link->eh_info;
 struct scatterlist *VAR_11;
 struct page *VAR_12;
 unsigned char *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;

next_sg:
 VAR_11 = VAR_5->cursg;
 if (FUNC_9(!VAR_11)) {
  FUNC_1(VAR_10, "unexpected or too much trailing data "
      "buf=%u cur=%u bytes=%u",
      VAR_5->nbytes, VAR_5->curbytes, VAR_6);
  return -1;
 }

 VAR_12 = FUNC_7(VAR_11);
 VAR_14 = VAR_11->offset + VAR_5->cursg_ofs;


 VAR_12 = FUNC_5(VAR_12, (VAR_14 >> VAR_1));
 VAR_14 %= VAR_2;


 VAR_15 = FUNC_4(VAR_11->length - VAR_5->cursg_ofs, VAR_6);


 VAR_15 = FUNC_4(VAR_15, (unsigned int)VAR_2 - VAR_14);

 FUNC_0("data %s\n", VAR_5->tf.flags & VAR_0 ? "write" : "read");


 VAR_13 = FUNC_2(VAR_12);
 VAR_16 = VAR_8->ops->sff_data_xfer(VAR_5, VAR_13 + VAR_14, VAR_15, VAR_7);
 FUNC_3(VAR_13);

 VAR_6 -= FUNC_4(VAR_6, VAR_16);
 VAR_5->curbytes += VAR_15;
 VAR_5->cursg_ofs += VAR_15;

 if (VAR_5->cursg_ofs == VAR_11->length) {
  VAR_5->cursg = FUNC_6(VAR_5->cursg);
  VAR_5->cursg_ofs = 0;
 }







 if (VAR_6)
  goto next_sg;
 return 0;
}
