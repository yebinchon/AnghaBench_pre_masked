
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int dummy; } ;
struct hfi1_packet {int dummy; } ;


 int FUNC_0 (struct hfi1_packet*) ;
 int FUNC_1 (struct rvt_qp*,struct hfi1_packet*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(struct rvt_qp *VAR_0, struct hfi1_packet *VAR_1)
{
 bool VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (FUNC_2(VAR_2))
  return FUNC_1(VAR_0, VAR_1, 0);
 return 0;
}
