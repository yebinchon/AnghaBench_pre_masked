
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* flags; void* type; } ;
struct r5l_payload_flush {int * flush_stripes; int size; TYPE_2__ header; } ;
struct r5l_log {int io_mutex; struct r5l_io_unit* current_io; TYPE_1__* rdev; } ;
struct r5l_io_unit {int meta_offset; int has_flush_payload; int pending_stripe; int meta_page; } ;
struct r5conf {scalar_t__ quiesce; } ;
struct mddev {struct r5conf* private; } ;
typedef int sector_t ;
typedef int __le64 ;
struct TYPE_3__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct r5l_payload_flush* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct r5l_log*,int) ;

__attribute__((used)) static void FUNC_8(struct r5l_log *VAR_1, sector_t VAR_2)
{
 struct mddev *VAR_3 = VAR_1->rdev->mddev;
 struct r5conf *VAR_4 = VAR_3->private;
 struct r5l_io_unit *VAR_5;
 struct r5l_payload_flush *VAR_6;
 int VAR_7;






 if (VAR_4->quiesce)
  return;

 FUNC_4(&VAR_1->io_mutex);
 VAR_7 = sizeof(struct r5l_payload_flush) + sizeof(__le64);

 if (FUNC_7(VAR_1, VAR_7)) {
  FUNC_5(&VAR_1->io_mutex);
  return;
 }


 VAR_5 = VAR_1->current_io;
 VAR_6 = FUNC_6(VAR_5->meta_page) + VAR_5->meta_offset;
 VAR_6->header.type = FUNC_1(VAR_0);
 VAR_6->header.flags = FUNC_1(0);
 VAR_6->size = FUNC_2(sizeof(__le64));
 VAR_6->flush_stripes[0] = FUNC_3(VAR_2);
 VAR_5->meta_offset += VAR_7;

 if (!VAR_5->has_flush_payload) {
  VAR_5->has_flush_payload = 1;
  FUNC_0(&VAR_5->pending_stripe);
 }
 FUNC_5(&VAR_1->io_mutex);
}
