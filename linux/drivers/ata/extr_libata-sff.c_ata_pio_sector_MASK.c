
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct ata_queued_cmd {scalar_t__ curbytes; scalar_t__ nbytes; scalar_t__ sect_size; unsigned int cursg_ofs; TYPE_3__* cursg; TYPE_1__ tf; struct ata_port* ap; } ;
struct ata_port {void* hsm_task_state; TYPE_2__* ops; } ;
struct TYPE_8__ {unsigned int offset; unsigned int length; } ;
struct TYPE_7__ {int (* sff_data_xfer ) (struct ata_queued_cmd*,unsigned char*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 void* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 unsigned char* FUNC_3 (struct page*) ;
 int FUNC_4 (unsigned char*) ;
 struct page* FUNC_5 (struct page*,unsigned int) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 struct page* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct ata_queued_cmd*,unsigned char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct ata_queued_cmd *VAR_4)
{
 int VAR_5 = (VAR_4->tf.flags & VAR_0);
 struct ata_port *VAR_6 = VAR_4->ap;
 struct page *VAR_7;
 unsigned int VAR_8;
 unsigned char *VAR_9;

 if (!VAR_4->cursg) {
  VAR_4->curbytes = VAR_4->nbytes;
  return;
 }
 if (VAR_4->curbytes == VAR_4->nbytes - VAR_4->sect_size)
  VAR_6->hsm_task_state = VAR_1;

 VAR_7 = FUNC_7(VAR_4->cursg);
 VAR_8 = VAR_4->cursg->offset + VAR_4->cursg_ofs;


 VAR_7 = FUNC_5(VAR_7, (VAR_8 >> VAR_2));
 VAR_8 %= VAR_3;

 FUNC_0("data %s\n", VAR_4->tf.flags & VAR_0 ? "write" : "read");


 VAR_9 = FUNC_3(VAR_7);
 VAR_6->ops->sff_data_xfer(VAR_4, VAR_9 + VAR_8, VAR_4->sect_size, VAR_5);
 FUNC_4(VAR_9);

 if (!VAR_5 && !FUNC_1(VAR_7))
  FUNC_2(VAR_7);

 VAR_4->curbytes += VAR_4->sect_size;
 VAR_4->cursg_ofs += VAR_4->sect_size;

 if (VAR_4->cursg_ofs == VAR_4->cursg->length) {
  VAR_4->cursg = FUNC_6(VAR_4->cursg);
  if (!VAR_4->cursg)
   VAR_6->hsm_task_state = VAR_1;
  VAR_4->cursg_ofs = 0;
 }
}
