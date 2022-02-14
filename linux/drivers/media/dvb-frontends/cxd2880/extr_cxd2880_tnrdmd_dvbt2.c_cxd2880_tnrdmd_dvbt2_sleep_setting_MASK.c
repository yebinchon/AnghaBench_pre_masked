
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; struct cxd2880_tnrdmd* diver_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;

int FUNC_1(struct cxd2880_tnrdmd
           *VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_3 &&
     VAR_5->state != VAR_2)
  return -VAR_4;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->diver_mode == VAR_0)
  VAR_6 = FUNC_0(VAR_5->diver_sub);

 return VAR_6;
}
