
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ control; } ;
struct mv64xxx_i2c_data {int cntl_bits; TYPE_1__ reg_offsets; scalar_t__ reg_base; TYPE_2__* msgs; scalar_t__ rc; scalar_t__ aborting; TYPE_2__* msg; int bytes_left; scalar_t__ byte_posn; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv64xxx_i2c_data*,TYPE_2__*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mv64xxx_i2c_data *VAR_1)
{
 VAR_1->msg = VAR_1->msgs;
 VAR_1->byte_posn = 0;
 VAR_1->bytes_left = VAR_1->msg->len;
 VAR_1->aborting = 0;
 VAR_1->rc = 0;

 FUNC_0(VAR_1, VAR_1->msgs);
 FUNC_1(VAR_1->cntl_bits | VAR_0,
        VAR_1->reg_base + VAR_1->reg_offsets.control);
}
