
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hst_mode; } ;
struct cyttsp {TYPE_1__ xy_data; scalar_t__ use_hndshk; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyttsp*,int) ;

__attribute__((used)) static int FUNC_1(struct cyttsp *VAR_1)
{
 if (VAR_1->use_hndshk)
  return FUNC_0(VAR_1,
    VAR_1->xy_data.hst_mode ^ VAR_0);

 return 0;
}
