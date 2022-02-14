
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {TYPE_2__* queue; } ;
struct blk_integrity {int flags; int tag_size; int tuple_size; int * profile; scalar_t__ interval_exp; } ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; struct blk_integrity integrity; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(struct gendisk *VAR_4, struct blk_integrity *VAR_5)
{
 struct blk_integrity *VAR_6 = &VAR_4->queue->integrity;

 VAR_6->flags = VAR_2 | VAR_1 |
  VAR_5->flags;
 VAR_6->interval_exp = VAR_5->interval_exp ? :
  FUNC_0(FUNC_1(VAR_4->queue));
 VAR_6->profile = VAR_5->profile ? VAR_5->profile : &VAR_3;
 VAR_6->tuple_size = VAR_5->tuple_size;
 VAR_6->tag_size = VAR_5->tag_size;

 VAR_4->queue->backing_dev_info->capabilities |= VAR_0;
}
