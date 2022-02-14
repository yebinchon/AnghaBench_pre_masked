
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyttsp_tch {int dummy; } ;
struct cyttsp_xydata {struct cyttsp_tch const tch4; struct cyttsp_tch const tch3; struct cyttsp_tch const tch2; struct cyttsp_tch const tch1; } ;



__attribute__((used)) static const struct cyttsp_tch *FUNC_0(struct cyttsp_xydata *VAR_0,
            int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->tch1;
 case 1:
  return &VAR_0->tch2;
 case 2:
  return &VAR_0->tch3;
 case 3:
  return &VAR_0->tch4;
 default:
  return ((void*)0);
 }
}
