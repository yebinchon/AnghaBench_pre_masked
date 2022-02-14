
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hwrng *VAR_0, void *VAR_1, size_t VAR_2, bool VAR_3)
{
 unsigned long *VAR_4;
 int VAR_5, VAR_6;


 VAR_6 = VAR_2 / sizeof(unsigned long);

 VAR_4 = (unsigned long *)VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_0(VAR_4++);

 return VAR_6 * sizeof(unsigned long);
}
