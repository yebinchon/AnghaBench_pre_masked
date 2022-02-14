
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*,int ,char*,size_t,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1, loff_t VAR_2,
           size_t VAR_3, void *VAR_4,
           size_t VAR_5)
{
 struct scatterlist *VAR_6 = VAR_4;

 if (VAR_2 > VAR_5)
  return -VAR_0;

 if (VAR_2 + VAR_3 > VAR_5)
  VAR_3 = VAR_5 - VAR_2;
 return FUNC_1(VAR_6, FUNC_0(VAR_6), VAR_1, VAR_3,
      VAR_2);
}
