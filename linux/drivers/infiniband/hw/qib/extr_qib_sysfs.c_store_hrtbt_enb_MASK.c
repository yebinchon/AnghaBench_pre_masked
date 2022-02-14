
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;} ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (struct qib_devdata*,char*) ;
 int FUNC_2 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct qib_pportdata *VAR_1, const char *VAR_2,
          size_t VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_1->dd;
 int VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_4, "attempt to set invalid Heartbeat enable\n");
  return VAR_5;
 }
 VAR_5 = VAR_4->f_set_ib_cfg(VAR_1, VAR_0, VAR_6);
 return VAR_5 < 0 ? VAR_5 : VAR_3;
}
