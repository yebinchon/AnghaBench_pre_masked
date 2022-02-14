
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rxe_pkt_info {scalar_t__ offset; scalar_t__ hdr; } ;
struct rxe_bth {int flags; void* apsn; void* qpn; int pkey; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct rxe_pkt_info *VAR_6, u8 VAR_7, int VAR_8,
       int VAR_9, int VAR_10, u16 VAR_11, u32 VAR_12, int VAR_13,
       u32 VAR_14)
{
 struct rxe_bth *VAR_15 = (struct rxe_bth *)(VAR_6->hdr + VAR_6->offset);

 VAR_15->opcode = VAR_7;
 VAR_15->flags = (VAR_10 << 4) & VAR_2;
 if (VAR_8)
  VAR_15->flags |= VAR_5;
 if (VAR_9)
  VAR_15->flags |= VAR_1;
 VAR_15->pkey = FUNC_0(VAR_11);
 VAR_15->qpn = FUNC_1(VAR_12 & VAR_4);
 VAR_14 &= VAR_3;
 if (VAR_13)
  VAR_14 |= VAR_0;
 VAR_15->apsn = FUNC_1(VAR_14);
}
