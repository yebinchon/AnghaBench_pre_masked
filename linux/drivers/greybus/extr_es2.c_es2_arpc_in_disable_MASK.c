
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct es2_ap_dev {struct urb** arpc_urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*) ;

__attribute__((used)) static void FUNC_1(struct es2_ap_dev *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_2 = VAR_1->arpc_urb[VAR_3];
  FUNC_0(VAR_2);
 }
}
