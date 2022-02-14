
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int size; scalar_t__ stream_id; scalar_t__ inst_be; } ;
union zip_quex_sbuf_ctl {unsigned long long u_reg64; TYPE_3__ s; } ;
struct TYPE_12__ {int ptr; } ;
union zip_quex_sbuf_addr {unsigned long long u_reg64; TYPE_4__ s; } ;
struct TYPE_14__ {int zce; } ;
union zip_quex_map {unsigned long long u_reg64; TYPE_6__ s; } ;
struct TYPE_15__ {int pri; } ;
union zip_que_pri {unsigned long long u_reg64; TYPE_7__ s; } ;
struct TYPE_13__ {int ena; } ;
union zip_que_ena {int u_reg64; TYPE_5__ s; } ;
struct TYPE_10__ {int ctxsize; int onfsize; int depth; } ;
union zip_constants {TYPE_2__ s; void* u_reg64; } ;
struct TYPE_9__ {int forceclk; } ;
union zip_cmd_ctl {int u_reg64; TYPE_1__ s; } ;
typedef int u64 ;
struct zip_iq {int dummy; } ;
struct zip_device {scalar_t__ reg_base; TYPE_8__* iq; int ctxsize; int onfsize; int depth; } ;
struct TYPE_16__ {int hw_tail; int sw_tail; int sw_head; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_8__*,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct zip_device*,int) ;
 int FUNC_7 (struct zip_device*,int) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (char*,void*,...) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct zip_device *VAR_8)
{
 union zip_cmd_ctl VAR_9;
 union zip_constants VAR_10;
 union zip_que_ena VAR_11;
 union zip_quex_map VAR_12;
 union zip_que_pri VAR_13;

 union zip_quex_sbuf_addr VAR_14;
 union zip_quex_sbuf_ctl VAR_15;

 int VAR_16 = 0;


 VAR_9.u_reg64 = FUNC_10(VAR_8->reg_base + VAR_2);
 VAR_9.s.forceclk = 1;
 FUNC_11(VAR_9.u_reg64 & 0xFF, (VAR_8->reg_base + VAR_2));

 FUNC_9("ZIP_CMD_CTL  : 0x%016llx",
  FUNC_10(VAR_8->reg_base + VAR_2));

 VAR_10.u_reg64 = FUNC_10(VAR_8->reg_base + VAR_4);
 VAR_8->depth = VAR_10.s.depth;
 VAR_8->onfsize = VAR_10.s.onfsize;
 VAR_8->ctxsize = VAR_10.s.ctxsize;

 FUNC_9("depth: 0x%016llx , onfsize : 0x%016llx , ctxsize : 0x%016llx",
  VAR_8->depth, VAR_8->onfsize, VAR_8->ctxsize);






 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_15.u_reg64 = 0ull;
  VAR_15.s.size = (VAR_3 / sizeof(u64));
  VAR_15.s.inst_be = 0;
  VAR_15.s.stream_id = 0;
  FUNC_11(VAR_15.u_reg64,
         (VAR_8->reg_base + FUNC_2(VAR_16)));

  FUNC_9("QUEX_SBUF_CTL[%d]: 0x%016llx", VAR_16,
   FUNC_10(VAR_8->reg_base + FUNC_2(VAR_16)));
 }

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  FUNC_4(&VAR_8->iq[VAR_16], 0x0, sizeof(struct zip_iq));

  FUNC_5(&VAR_8->iq[VAR_16].lock);

  if (FUNC_6(VAR_8, VAR_16)) {
   while (VAR_16 != 0) {
    VAR_16--;
    FUNC_7(VAR_8, VAR_16);
   }
   return -VAR_0;
  }


  VAR_8->iq[VAR_16].sw_tail = VAR_8->iq[VAR_16].sw_head;
  VAR_8->iq[VAR_16].hw_tail = VAR_8->iq[VAR_16].sw_head;


  VAR_14.u_reg64 = 0ull;
  VAR_14.s.ptr = (FUNC_3(VAR_8->iq[VAR_16].sw_head) >>
           VAR_1);

  FUNC_9("QUE[%d]_PTR(PHYS): 0x%016llx", VAR_16,
   (u64)VAR_14.s.ptr);

  FUNC_11(VAR_14.u_reg64,
         (VAR_8->reg_base + FUNC_1(VAR_16)));

  FUNC_9("QUEX_SBUF_ADDR[%d]: 0x%016llx", VAR_16,
   FUNC_10(VAR_8->reg_base + FUNC_1(VAR_16)));

  FUNC_8("sw_head :0x%lx sw_tail :0x%lx hw_tail :0x%lx",
   VAR_8->iq[VAR_16].sw_head, VAR_8->iq[VAR_16].sw_tail,
   VAR_8->iq[VAR_16].hw_tail);
  FUNC_8("sw_head phy addr : 0x%lx", VAR_14.s.ptr);
 }






 VAR_11.u_reg64 = 0x0ull;

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++)
  VAR_11.s.ena |= (0x1 << VAR_16);
 FUNC_11(VAR_11.u_reg64, (VAR_8->reg_base + VAR_6));

 FUNC_9("QUE_ENA      : 0x%016llx",
  FUNC_10(VAR_8->reg_base + VAR_6));

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_12.u_reg64 = 0ull;

  VAR_12.s.zce = 0x3;
  FUNC_11(VAR_12.u_reg64,
         (VAR_8->reg_base + FUNC_0(VAR_16)));

  FUNC_9("QUE_MAP(%d)   : 0x%016llx", VAR_16,
   FUNC_10(VAR_8->reg_base + FUNC_0(VAR_16)));
 }

 VAR_13.u_reg64 = 0ull;
 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++)
  VAR_13.s.pri |= (0x1 << VAR_16);
 FUNC_11(VAR_13.u_reg64, (VAR_8->reg_base + VAR_7));

 FUNC_9("QUE_PRI %016llx", FUNC_10(VAR_8->reg_base + VAR_7));

 return 0;
}
