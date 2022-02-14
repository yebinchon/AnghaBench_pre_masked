
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {TYPE_2__* s_op; } ;
struct request {TYPE_1__* rq_disk; } ;
struct pktcdvd_device {int bdev; int pkt_dev; } ;
struct packet_data {int sector; int frames; TYPE_4__* bio; struct request* rq; } ;
struct block_device {int dummy; } ;
typedef void* sector_t ;
struct TYPE_9__ {int bi_size; void* bi_sector; } ;
struct TYPE_10__ {int bi_vcnt; struct packet_data* bi_private; int bi_end_io; TYPE_3__ bi_iter; } ;
struct TYPE_8__ {scalar_t__ (* relocate_blocks ) (struct super_block*,unsigned long,unsigned long*) ;} ;
struct TYPE_7__ {struct pktcdvd_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct block_device* FUNC_0 (int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (struct super_block*) ;
 struct super_block* FUNC_6 (struct block_device*) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (struct super_block*,unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_9(struct packet_data *VAR_3)
{




 return 0;
}
