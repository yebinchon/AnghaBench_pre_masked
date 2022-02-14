
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int dummy; } ;


 int FUNC_0 (struct qib_devdata*,int) ;
 scalar_t__ FUNC_1 (struct qib_devdata*,int) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_0)
{
 u8 VAR_1;



 VAR_1 = FUNC_1(VAR_0, 1);
 FUNC_0(VAR_0, 1);
 VAR_1 = FUNC_1(VAR_0, 1) == 0;
 FUNC_0(VAR_0, 0);
 return VAR_1;
}
