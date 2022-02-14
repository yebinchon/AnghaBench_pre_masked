
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ control; scalar_t__ data; } ;
struct TYPE_5__ {int dev; } ;
struct mv64xxx_i2c_data {int action; int num_msgs; int send_stop; int cntl_bits; int addr1; int addr2; int waitq; int block; TYPE_3__ reg_offsets; scalar_t__ reg_base; int rc; TYPE_2__ adapter; int errata_delay; int byte_posn; TYPE_1__* msg; int msgs; } ;
struct TYPE_4__ {int* buf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mv64xxx_i2c_data*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct mv64xxx_i2c_data *VAR_3)
{
 switch(VAR_3->action) {
 case 129:

  FUNC_0(VAR_3->num_msgs == 0);

  VAR_3->msgs++;
  VAR_3->num_msgs--;
  FUNC_2(VAR_3);

  if (VAR_3->errata_delay)
   FUNC_4(5);






  VAR_3->send_stop = VAR_3->num_msgs == 1;
  break;

 case 136:
  FUNC_6(VAR_3->cntl_bits,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  break;

 case 132:
  FUNC_6(VAR_3->addr1,
   VAR_3->reg_base + VAR_3->reg_offsets.data);
  FUNC_6(VAR_3->cntl_bits,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  break;

 case 131:
  FUNC_6(VAR_3->addr2,
   VAR_3->reg_base + VAR_3->reg_offsets.data);
  FUNC_6(VAR_3->cntl_bits,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  break;

 case 130:
  FUNC_6(VAR_3->msg->buf[VAR_3->byte_posn++],
   VAR_3->reg_base + VAR_3->reg_offsets.data);
  FUNC_6(VAR_3->cntl_bits,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  break;

 case 134:
  VAR_3->msg->buf[VAR_3->byte_posn++] =
   FUNC_3(VAR_3->reg_base + VAR_3->reg_offsets.data);
  FUNC_6(VAR_3->cntl_bits,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  break;

 case 133:
  VAR_3->msg->buf[VAR_3->byte_posn++] =
   FUNC_3(VAR_3->reg_base + VAR_3->reg_offsets.data);
  VAR_3->cntl_bits &= ~VAR_1;
  FUNC_6(VAR_3->cntl_bits | VAR_2,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  VAR_3->block = 0;
  if (VAR_3->errata_delay)
   FUNC_4(5);

  FUNC_5(&VAR_3->waitq);
  break;

 case 135:
 default:
  FUNC_1(&VAR_3->adapter.dev,
   "mv64xxx_i2c_do_action: Invalid action: %d\n",
   VAR_3->action);
  VAR_3->rc = -VAR_0;


 case 128:
  VAR_3->cntl_bits &= ~VAR_1;
  FUNC_6(VAR_3->cntl_bits | VAR_2,
   VAR_3->reg_base + VAR_3->reg_offsets.control);
  VAR_3->block = 0;
  FUNC_5(&VAR_3->waitq);
  break;
 }
}
