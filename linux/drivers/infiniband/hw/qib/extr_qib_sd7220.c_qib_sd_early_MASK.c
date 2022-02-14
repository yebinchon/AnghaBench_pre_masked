
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qib_devdata*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1, FUNC_0(0) | VAR_0, 0xD4, 0xFF);
 if (VAR_2 < 0)
  goto bail;
 VAR_2 = FUNC_3(VAR_1, FUNC_1(0) | VAR_0, 0x10, 0xFF);
 if (VAR_2 < 0)
  goto bail;
 VAR_2 = FUNC_3(VAR_1, FUNC_2(0) | VAR_0, 0x30, 0xFF);
bail:
 return VAR_2;
}
