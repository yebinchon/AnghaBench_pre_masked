
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hst_mode; } ;
struct cyttsp {int irq; TYPE_1__ xy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cyttsp*,int ,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct cyttsp *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_2(VAR_2, VAR_0,
         sizeof(VAR_2->xy_data), &VAR_2->xy_data);
 if (VAR_3)
  return VAR_3;

 if (FUNC_0(VAR_2->xy_data.hst_mode))
  return -VAR_1;

 FUNC_1(VAR_2->irq);

 return 0;
}
