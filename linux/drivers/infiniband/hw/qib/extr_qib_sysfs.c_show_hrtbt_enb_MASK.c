
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int (* f_get_ib_cfg ) (struct qib_pportdata*,int ) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct qib_pportdata *VAR_2, char *VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_2->dd;
 int VAR_5;

 VAR_5 = VAR_4->f_get_ib_cfg(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_3, VAR_0, "%d\n", VAR_5);
 return VAR_5;
}
