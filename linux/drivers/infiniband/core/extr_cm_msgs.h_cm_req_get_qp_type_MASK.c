
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cm_req_msg {int offset51; int offset40; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum ib_qp_type FUNC_1(struct cm_req_msg *VAR_3)
{
 u8 VAR_4 = (u8) (FUNC_0(VAR_3->offset40) & 0x06) >> 1;
 switch(VAR_4) {
 case 0: return VAR_0;
 case 1: return VAR_1;
 case 3:
  switch (VAR_3->offset51 & 0x7) {
  case 1: return VAR_2;
  default: return 0;
  }
 default: return 0;
 }
}
