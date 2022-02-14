
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;
 int VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, const struct kernel_param *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 if (!FUNC_0(VAR_1))
  return 0;







 if (VAR_2 == VAR_0) {
  VAR_3 = VAR_7;
  return 0;
 }

 FUNC_1(&VAR_4);
 VAR_8 = FUNC_4(VAR_7);
 FUNC_2(&VAR_4);
 return VAR_8;
}
