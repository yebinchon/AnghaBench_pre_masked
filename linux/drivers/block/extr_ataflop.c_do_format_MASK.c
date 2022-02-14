
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct atari_format_descr {int track; int head; int sect_offset; } ;
struct TYPE_9__ {int blocks; int spt; } ;
struct TYPE_8__ {scalar_t__ drive_types; int index; } ;
struct TYPE_7__ {TYPE_1__* disk; } ;
struct TYPE_6__ {struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_4__* VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ,int *) ;
 TYPE_2__* VAR_18 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(int VAR_19, int VAR_20, struct atari_format_descr *VAR_21)
{
 struct request_queue *VAR_22 = VAR_18[VAR_19].disk->queue;
 unsigned char *VAR_23;
 int VAR_24, VAR_25;
 unsigned long VAR_26;
 int VAR_27;

 FUNC_2(VAR_22);
 FUNC_3(VAR_22);

 FUNC_9(VAR_26);
 FUNC_10(VAR_14, ((void*)0));
 FUNC_1( VAR_6 );
 FUNC_8(VAR_26);

 if (VAR_20) {
  if (--VAR_20 >= VAR_8 ||
      VAR_16[VAR_20].drive_types > VAR_2) {
   VAR_27 = -VAR_3;
   goto out;
  }
  VAR_20 = VAR_16[VAR_20].index;
  VAR_12 = &VAR_13[VAR_20];
 }

 if (!VAR_12 || VAR_21->track >= VAR_12->blocks/VAR_12->spt/2 || VAR_21->head >= 2) {
  VAR_27 = -VAR_3;
  goto out;
 }

 VAR_25 = VAR_12->spt;
 VAR_23 = VAR_11;


 VAR_1 = -1;

 FUNC_6( &VAR_17 );

 FUNC_0( 60 * (VAR_25 / 9), 0x4e );
 for( VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24 ) {
  FUNC_0( 12, 0 );
  FUNC_0( 3, 0xf5 );
  *VAR_23++ = 0xfe;
  *VAR_23++ = VAR_21->track;
  *VAR_23++ = VAR_21->head;
  *VAR_23++ = (VAR_25 + VAR_24 - VAR_21->sect_offset) % VAR_25 + 1;
  *VAR_23++ = 2;
  *VAR_23++ = 0xf7;
  FUNC_0( 22, 0x4e );
  FUNC_0( 12, 0 );
  FUNC_0( 3, 0xf5 );
  *VAR_23++ = 0xfb;
  FUNC_0( 512, 0xe5 );
  *VAR_23++ = 0xf7;
  FUNC_0( 40, 0x4e );
 }
 FUNC_0( VAR_11+VAR_0-VAR_23, 0x4e );

 VAR_7 = 1;
 VAR_5 = 0;
 VAR_10 = VAR_21->track;
 VAR_9 = VAR_21->head;
 FUNC_7( VAR_19 );

 FUNC_11(&VAR_15);

 VAR_27 = VAR_5 ? -VAR_4 : 0;
out:
 FUNC_5(VAR_22);
 FUNC_4(VAR_22);
 return VAR_27;
}
