
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct creq_qp_event {int dummy; } ;
struct creq_func_event {int dummy; } ;
struct creq_base {scalar_t__ type; } ;
struct bnxt_qplib_rcfw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct creq_qp_event*,void*) ;
 int FUNC_1 (struct creq_func_event*) ;

__attribute__((used)) static int FUNC_2(struct bnxt_qplib_rcfw *VAR_1,
          void *VAR_2, void *VAR_3)
{
 struct creq_qp_event *VAR_4;
 struct creq_func_event *VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_6 = ((struct creq_base *)VAR_2)->type;
 if (VAR_6 == VAR_0) {
  VAR_5 = VAR_2;
  VAR_7 = FUNC_1(VAR_5);
 } else {
  VAR_4 = VAR_2;
  VAR_7 = FUNC_0(VAR_4, VAR_3);
 }

 return VAR_7;
}
