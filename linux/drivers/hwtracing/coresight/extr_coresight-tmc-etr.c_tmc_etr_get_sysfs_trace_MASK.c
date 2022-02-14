
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {struct etr_buf* sysfs_buf; } ;
struct etr_buf {scalar_t__ len; scalar_t__ offset; scalar_t__ size; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ s64 ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct etr_buf*,scalar_t__,scalar_t__,char**) ;

ssize_t FUNC_1(struct tmc_drvdata *VAR_0,
    loff_t VAR_1, size_t VAR_2, char **VAR_3)
{
 s64 VAR_4;
 ssize_t VAR_5 = VAR_2;
 struct etr_buf *VAR_6 = VAR_0->sysfs_buf;

 if (VAR_1 + VAR_5 > VAR_6->len)
  VAR_5 = VAR_6->len - VAR_1;
 if (VAR_5 <= 0)
  return VAR_5;


 VAR_4 = VAR_6->offset + VAR_1;
 if (VAR_4 >= VAR_6->size)
  VAR_4 -= VAR_6->size;
 return FUNC_0(VAR_6, VAR_4, VAR_5, VAR_3);
}
