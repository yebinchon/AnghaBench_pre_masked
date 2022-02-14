
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int (* f_set_ib_loopback ) (struct qib_pportdata*,char const*) ;} ;
typedef int ssize_t ;


 int FUNC_0 (struct qib_pportdata*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct qib_pportdata *VAR_0, const char *VAR_1,
         size_t VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_0->dd;
 int VAR_4 = VAR_2, VAR_5;

 VAR_5 = VAR_3->f_set_ib_loopback(VAR_0, VAR_1);
 if (VAR_5 < 0)
  VAR_4 = VAR_5;

 return VAR_4;
}
