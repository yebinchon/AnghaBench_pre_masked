
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ act_dist; } ;
struct cyttsp {TYPE_1__ xy_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cyttsp*) ;
 int FUNC_1 (struct cyttsp*,int ,int,TYPE_1__*) ;
 int FUNC_2 (struct cyttsp*,int ) ;

__attribute__((used)) static int FUNC_3(struct cyttsp *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_4, VAR_2,
         sizeof(VAR_4->xy_data), &VAR_4->xy_data);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4->xy_data.act_dist == VAR_0 ? -VAR_3 : 0;
}
