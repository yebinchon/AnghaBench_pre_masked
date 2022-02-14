
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum t3_wr_opcode { ____Placeholder_t3_wr_opcode } t3_wr_opcode ;
typedef enum t3_rdma_opcode { ____Placeholder_t3_rdma_opcode } t3_rdma_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
__attribute__((used)) static inline enum t3_rdma_opcode FUNC_0(enum t3_wr_opcode VAR_9)
{
 switch (VAR_9) {
  case 135: return VAR_1;
  case 129: return VAR_8;
  case 128: return VAR_6;
  case 130: return VAR_7;
  case 132: return VAR_3;
  case 136: return VAR_0;
  case 133: return VAR_5;
  case 131: return VAR_4;
  case 134: return VAR_2;
  default: break;
 }
 return -1;
}
