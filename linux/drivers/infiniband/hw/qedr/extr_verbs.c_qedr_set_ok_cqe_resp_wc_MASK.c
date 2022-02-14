
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cqe_responder {int flags; int imm_data_or_inv_r_Key; int length; } ;
struct TYPE_2__ {void* imm_data; } ;
struct ib_wc {int wc_flags; TYPE_1__ ex; int opcode; void* byte_len; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct rdma_cqe_responder *VAR_8,
       struct ib_wc *VAR_9)
{
 VAR_9->status = VAR_2;
 VAR_9->byte_len = FUNC_1(VAR_8->length);

 if (VAR_8->flags & VAR_5) {
  VAR_9->ex.imm_data = FUNC_0(FUNC_1(VAR_8->imm_data_or_inv_r_Key));
  VAR_9->wc_flags |= VAR_3;

  if (VAR_8->flags & VAR_7)
   VAR_9->opcode = VAR_1;

  if (VAR_8->flags & VAR_6)
   return -VAR_0;

 } else if (VAR_8->flags & VAR_6) {
  VAR_9->ex.imm_data = FUNC_1(VAR_8->imm_data_or_inv_r_Key);
  VAR_9->wc_flags |= VAR_4;

  if (VAR_8->flags & VAR_7)
   return -VAR_0;

 } else if (VAR_8->flags & VAR_7) {
  return -VAR_0;
 }

 return 0;
}
