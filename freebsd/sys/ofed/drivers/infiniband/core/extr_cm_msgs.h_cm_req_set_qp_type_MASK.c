
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_req_msg {int offset51; void* offset40; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;




 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct cm_req_msg *VAR_0,
          enum ib_qp_type VAR_1)
{
 switch(VAR_1) {
 case 129:
  VAR_0->offset40 = FUNC_1((FUNC_0(
        VAR_0->offset40) &
         0xFFFFFFF9) | 0x2);
  break;
 case 128:
  VAR_0->offset40 = FUNC_1((FUNC_0(
       VAR_0->offset40) &
         0xFFFFFFF9) | 0x6);
  VAR_0->offset51 = (VAR_0->offset51 & 0xF8) | 1;
  break;
 default:
  VAR_0->offset40 = FUNC_1(FUNC_0(
       VAR_0->offset40) &
        0xFFFFFFF9);
 }
}
