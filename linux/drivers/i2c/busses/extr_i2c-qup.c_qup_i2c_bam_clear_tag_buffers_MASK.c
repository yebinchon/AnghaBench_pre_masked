
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sg_cnt; } ;
struct TYPE_3__ {scalar_t__ sg_cnt; } ;
struct qup_i2c_dev {scalar_t__ tag_buf_pos; TYPE_2__ brx; TYPE_1__ btx; } ;



__attribute__((used)) static void FUNC_0(struct qup_i2c_dev *VAR_0)
{
 VAR_0->btx.sg_cnt = 0;
 VAR_0->brx.sg_cnt = 0;
 VAR_0->tag_buf_pos = 0;
}
