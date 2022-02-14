
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct es2_cport_in {struct urb** urb; } ;
struct es2_ap_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb*) ;

__attribute__((used)) static void FUNC_1(struct es2_ap_dev *VAR_1,
     struct es2_cport_in *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_3 = VAR_2->urb[VAR_4];
  FUNC_0(VAR_3);
 }
}
