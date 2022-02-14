
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct i40iw_terminate_hdr {void* error_code; void* layer_etype; } ;
struct i40iw_sc_qp {int flush_code; } ;
typedef enum i40iw_flush_opcode { ____Placeholder_i40iw_flush_opcode } i40iw_flush_opcode ;



__attribute__((used)) static void FUNC_0(struct i40iw_sc_qp *VAR_0,
    struct i40iw_terminate_hdr *VAR_1,
    enum i40iw_flush_opcode VAR_2,
    u8 VAR_3,
    u8 VAR_4)
{
 VAR_0->flush_code = VAR_2;
 VAR_1->layer_etype = VAR_3;
 VAR_1->error_code = VAR_4;
}
