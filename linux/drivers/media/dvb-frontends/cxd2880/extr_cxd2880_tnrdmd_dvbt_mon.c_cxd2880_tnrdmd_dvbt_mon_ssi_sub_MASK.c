
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; int diver_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int,int *) ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_4,
        u8 *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 if (!VAR_4 || !VAR_5)
  return -VAR_3;

 if (VAR_4->diver_mode != VAR_1)
  return -VAR_3;

 if (VAR_4->state != VAR_2)
  return -VAR_3;

 if (VAR_4->sys != VAR_0)
  return -VAR_3;

 VAR_7 = FUNC_0(VAR_4->diver_sub, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_4, VAR_6, VAR_5);
}
