
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* plen; void* num_sgle; TYPE_2__* sgl; scalar_t__* reserved; void* rem_stag; int rdmaop; } ;
union t3_wr {TYPE_4__ send; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ invalidate_rkey; } ;
struct ib_send_wr {int opcode; int send_flags; int num_sge; TYPE_3__* sg_list; TYPE_1__ ex; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ lkey; int addr; } ;
struct TYPE_6__ {int to; void* len; void* stag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(union t3_wr *VAR_8, const struct ib_send_wr *VAR_9,
      u8 *VAR_10)
{
 int VAR_11;
 u32 VAR_12;

 switch (VAR_9->opcode) {
 case 129:
  if (VAR_9->send_flags & VAR_2)
   VAR_8->send.rdmaop = VAR_6;
  else
   VAR_8->send.rdmaop = VAR_4;
  VAR_8->send.rem_stag = 0;
  break;
 case 128:
  if (VAR_9->send_flags & VAR_2)
   VAR_8->send.rdmaop = VAR_7;
  else
   VAR_8->send.rdmaop = VAR_5;
  VAR_8->send.rem_stag = FUNC_0(VAR_9->ex.invalidate_rkey);
  break;
 default:
  return -VAR_0;
 }
 if (VAR_9->num_sge > VAR_3)
  return -VAR_0;
 VAR_8->send.reserved[0] = 0;
 VAR_8->send.reserved[1] = 0;
 VAR_8->send.reserved[2] = 0;
 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_9->num_sge; VAR_11++) {
  if ((VAR_12 + VAR_9->sg_list[VAR_11].length) < VAR_12)
   return -VAR_1;

  VAR_12 += VAR_9->sg_list[VAR_11].length;
  VAR_8->send.sgl[VAR_11].stag = FUNC_0(VAR_9->sg_list[VAR_11].lkey);
  VAR_8->send.sgl[VAR_11].len = FUNC_0(VAR_9->sg_list[VAR_11].length);
  VAR_8->send.sgl[VAR_11].to = FUNC_1(VAR_9->sg_list[VAR_11].addr);
 }
 VAR_8->send.num_sgle = FUNC_0(VAR_9->num_sge);
 *VAR_10 = 4 + ((VAR_9->num_sge) << 1);
 VAR_8->send.plen = FUNC_0(VAR_12);
 return 0;
}
