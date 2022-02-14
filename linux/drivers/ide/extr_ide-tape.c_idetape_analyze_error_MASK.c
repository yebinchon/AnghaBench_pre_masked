
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct request {int * cmd; int bio; } ;
struct ide_atapi_pc {int flags; scalar_t__* c; scalar_t__ retries; void* error; } ;
struct TYPE_7__ {int sense_key; int asc; int ascq; int blk_size; } ;
typedef TYPE_2__ idetape_tape_t ;
struct TYPE_8__ {TYPE_1__* hwif; struct ide_atapi_pc* failed_pc; TYPE_2__* driver_data; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_9__ {int resid_len; } ;
struct TYPE_6__ {struct request* rq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int* FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ,char*,int ,int,int,int) ;
 TYPE_4__* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_8)
{
 idetape_tape_t *VAR_9 = VAR_8->driver_data;
 struct ide_atapi_pc *VAR_10 = VAR_8->failed_pc;
 struct request *VAR_11 = VAR_8->hwif->rq;
 u8 *VAR_12 = FUNC_0(VAR_11->bio);

 VAR_9->sense_key = VAR_12[2] & 0xF;
 VAR_9->asc = VAR_12[12];
 VAR_9->ascq = VAR_12[13];

 FUNC_3(VAR_1,
        "cmd: 0x%x, sense key = %x, asc = %x, ascq = %x",
        VAR_11->cmd[0], VAR_9->sense_key, VAR_9->asc, VAR_9->ascq);


 if (VAR_10->flags & VAR_5)
  FUNC_4(VAR_11)->resid_len = VAR_9->blk_size * FUNC_2(&VAR_12[3]);






 if ((VAR_10->c[0] == VAR_6 || VAR_10->c[0] == VAR_7)

     && VAR_10->c[4] == 0 && VAR_10->c[3] == 0 && VAR_10->c[2] == 0) {
  if (VAR_9->sense_key == 5) {

   VAR_10->error = 0;

   VAR_10->flags |= VAR_4;
  }
 }
 if (VAR_10->c[0] == VAR_6 && (VAR_12[2] & 0x80)) {
  VAR_10->error = VAR_3;
  VAR_10->flags |= VAR_4;
 }
 if (VAR_10->c[0] == VAR_7) {
  if ((VAR_12[2] & 0x40) || (VAR_9->sense_key == 0xd
       && VAR_9->asc == 0x0 && VAR_9->ascq == 0x2)) {
   VAR_10->error = VAR_2;
   VAR_10->flags |= VAR_4;
  }
 }
 if (VAR_10->c[0] == VAR_6 || VAR_10->c[0] == VAR_7) {
  if (VAR_9->sense_key == 8) {
   VAR_10->error = VAR_2;
   VAR_10->flags |= VAR_4;
  }
  if (!(VAR_10->flags & VAR_4) &&
      (FUNC_1(VAR_11) - FUNC_4(VAR_11)->resid_len))
   VAR_10->retries = VAR_0 + 1;
 }
}
