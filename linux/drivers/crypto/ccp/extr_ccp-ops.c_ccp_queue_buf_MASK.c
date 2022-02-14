
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_sg_workarea {scalar_t__ bytes_left; scalar_t__ sg_used; TYPE_1__* sg; } ;
struct ccp_dm_workarea {unsigned int length; int address; } ;
struct ccp_data {struct ccp_dm_workarea dm_wa; struct ccp_sg_workarea sg_wa; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int FUNC_0 (struct ccp_sg_workarea*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (int ,scalar_t__,unsigned int) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__,unsigned int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_5(struct ccp_data *VAR_1, unsigned int VAR_2)
{
 struct ccp_sg_workarea *VAR_3 = &VAR_1->sg_wa;
 struct ccp_dm_workarea *VAR_4 = &VAR_1->dm_wa;
 unsigned int VAR_5, VAR_6;


 if (!VAR_2)
  FUNC_1(VAR_4->address, 0, VAR_4->length);

 if (!VAR_3->sg)
  return 0;





 VAR_6 = FUNC_3(VAR_0, VAR_3->bytes_left, VAR_4->length);
 FUNC_4(VAR_4->address, VAR_3->sg, VAR_3->sg_used,
     VAR_6, VAR_2);


 VAR_5 = 0;
 while (VAR_3->bytes_left && (VAR_5 < VAR_4->length)) {
  VAR_6 = FUNC_2(VAR_3->sg->length - VAR_3->sg_used,
        VAR_4->length - VAR_5);
  VAR_6 = FUNC_3(VAR_0, VAR_3->bytes_left, VAR_6);

  VAR_5 += VAR_6;
  FUNC_0(VAR_3, VAR_6);
 }

 return VAR_5;
}
