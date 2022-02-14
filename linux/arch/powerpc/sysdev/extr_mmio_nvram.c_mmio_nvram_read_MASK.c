
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (char*,scalar_t__,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(char *VAR_3, size_t VAR_4, loff_t *VAR_5)
{
 unsigned long VAR_6;

 if (*VAR_5 >= VAR_0)
  return 0;
 if (*VAR_5 + VAR_4 > VAR_0)
  VAR_4 = VAR_0 - *VAR_5;

 FUNC_1(&VAR_1, VAR_6);

 FUNC_0(VAR_3, VAR_2 + *VAR_5, VAR_4);

 FUNC_2(&VAR_1, VAR_6);

 *VAR_5 += VAR_4;
 return VAR_4;
}
