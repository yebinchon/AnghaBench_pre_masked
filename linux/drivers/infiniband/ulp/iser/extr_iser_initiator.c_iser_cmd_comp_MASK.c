
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {scalar_t__ status; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_wc*,char*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct ib_cq *VAR_1, struct ib_wc *VAR_2)
{
 if (FUNC_1(VAR_2->status != VAR_0))
  FUNC_0(VAR_2, "command");
}
