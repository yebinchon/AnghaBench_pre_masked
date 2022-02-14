
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es2_ap_dev {int dummy; } ;
struct arpc {int active; int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct es2_ap_dev *VAR_0, struct arpc *VAR_1)
{
 if (VAR_1->active) {
  VAR_1->active = 0;
  FUNC_0(&VAR_1->list);
 }
}
