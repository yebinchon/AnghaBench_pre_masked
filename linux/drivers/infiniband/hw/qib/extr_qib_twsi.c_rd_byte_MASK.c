
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int FUNC_0 (struct qib_devdata*,int) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int) ;
 int FUNC_3 (struct qib_devdata*) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;

 for (VAR_2 = 7; VAR_2 >= 0; --VAR_2) {
  VAR_3 <<= 1;
  FUNC_0(VAR_0, 1);
  VAR_3 |= FUNC_1(VAR_0, 0);
  FUNC_0(VAR_0, 0);
 }
 if (VAR_1) {
  FUNC_0(VAR_0, 1);
  FUNC_3(VAR_0);
 } else {
  FUNC_2(VAR_0, 0);
  FUNC_0(VAR_0, 1);
  FUNC_0(VAR_0, 0);
  FUNC_2(VAR_0, 1);
 }
 return VAR_3;
}
