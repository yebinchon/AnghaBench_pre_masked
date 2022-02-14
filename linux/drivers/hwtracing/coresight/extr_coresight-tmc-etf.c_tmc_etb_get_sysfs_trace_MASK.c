
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ len; char* buf; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;



ssize_t FUNC_0(struct tmc_drvdata *VAR_0,
    loff_t VAR_1, size_t VAR_2, char **VAR_3)
{
 ssize_t VAR_4 = VAR_2;


 if (VAR_1 + VAR_4 > VAR_0->len)
  VAR_4 = VAR_0->len - VAR_1;
 if (VAR_4 > 0)
  *VAR_3 = VAR_0->buf + VAR_1;
 return VAR_4;
}
