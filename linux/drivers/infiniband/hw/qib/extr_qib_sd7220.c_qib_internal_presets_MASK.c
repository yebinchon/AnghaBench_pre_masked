
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qib_devdata*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct qib_devdata*,scalar_t__) ;
 int FUNC_2 (struct qib_devdata*,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1 + VAR_0);

 if (VAR_4 < 0)
  FUNC_0(VAR_3, "Failed to set default DDS values\n");
 VAR_4 = FUNC_2(VAR_3, VAR_2 & 3);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "Failed to set default RXEQ values\n");
 return VAR_4;
}
