
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int attr_id; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_smp*) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_4 (struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_3,
       struct ib_smp *VAR_4)
{
 struct ib_smp *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_5);
 VAR_5->attr_id = VAR_2;

 VAR_6 = FUNC_3(FUNC_4(VAR_3), 1, 1, 1, ((void*)0), ((void*)0), VAR_5,
      VAR_4);

 FUNC_1(VAR_5);
 return VAR_6;
}
