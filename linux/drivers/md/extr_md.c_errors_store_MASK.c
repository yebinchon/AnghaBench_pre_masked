
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int corrected_errors; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_0, const char *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, 10, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_0(&VAR_0->corrected_errors, VAR_3);
 return VAR_2;
}
