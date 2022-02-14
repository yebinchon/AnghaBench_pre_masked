
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct request const*) ;

__attribute__((used)) static int FUNC_3(const struct request *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = VAR_2 + 2 * FUNC_1(VAR_3);

 if (VAR_4 < 0)
  return -1;
 else if (VAR_4 >= VAR_0)
  return VAR_2 + VAR_0 - 2;

 return VAR_4;
}
