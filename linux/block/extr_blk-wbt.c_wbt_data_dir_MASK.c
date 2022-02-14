
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (struct request const*) ;

__attribute__((used)) static int FUNC_2(const struct request *VAR_3)
{
 const int VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_1)
  return VAR_0;
 else if (FUNC_0(VAR_4))
  return VAR_2;


 return -1;
}
