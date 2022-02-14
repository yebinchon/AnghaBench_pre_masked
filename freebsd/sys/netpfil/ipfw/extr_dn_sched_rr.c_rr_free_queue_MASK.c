
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_si {int dummy; } ;
struct rr_queue {int status; } ;
struct dn_queue {scalar_t__ _si; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct rr_queue*,struct rr_si*) ;

__attribute__((used)) static int
FUNC_2(struct dn_queue *VAR_0)
{
 struct rr_queue *VAR_1 = (struct rr_queue *)VAR_0;

 FUNC_0("called");
 if (VAR_1->status == 1) {
  struct rr_si *VAR_2 = (struct rr_si *)(VAR_0->_si + 1);
  FUNC_1(VAR_1, VAR_2);
 }
 return 0;
}
