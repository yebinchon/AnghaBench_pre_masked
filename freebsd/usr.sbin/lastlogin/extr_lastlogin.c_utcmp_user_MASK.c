
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_user; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1, const void *VAR_2)
{

 return (VAR_0 * FUNC_0(((const struct utmpx *)VAR_1)->ut_user,
     ((const struct utmpx *)VAR_2)->ut_user));
}
