
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bi_op_flags; int bi_op; } ;
struct TYPE_3__ {int bdev; } ;
struct log_c {TYPE_2__ io_req; TYPE_1__ header_location; } ;
struct dm_io_region {int count; int sector; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,struct dm_io_region*,int *) ;

__attribute__((used)) static int FUNC_1(struct log_c *VAR_2)
{
 struct dm_io_region VAR_3 = {
  .bdev = VAR_2->header_location.bdev,
  .sector = 0,
  .count = 0,
 };

 VAR_2->io_req.bi_op = VAR_0;
 VAR_2->io_req.bi_op_flags = VAR_1;

 return FUNC_0(&VAR_2->io_req, 1, &VAR_3, ((void*)0));
}
