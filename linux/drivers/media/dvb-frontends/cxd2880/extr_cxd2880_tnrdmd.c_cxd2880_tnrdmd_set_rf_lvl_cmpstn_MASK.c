
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {int (* rf_lvl_cmpstn ) (struct cxd2880_tnrdmd*,int*) ;} ;


 int VAR_0 ;

int FUNC_0(struct cxd2880_tnrdmd
         *VAR_1,
         int (*VAR_2)
         (struct cxd2880_tnrdmd *,
         int *))
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->rf_lvl_cmpstn = VAR_2;

 return 0;
}
