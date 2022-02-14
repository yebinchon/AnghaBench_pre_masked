
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct iforce_core_effect {int flags; } ;
struct iforce {struct iforce_core_effect* core_effects; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iforce*,int,int) ;
 struct iforce* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_1, int VAR_2, int VAR_3)
{
 struct iforce *VAR_4 = FUNC_2(VAR_1);
 struct iforce_core_effect *VAR_5 = &VAR_4->core_effects[VAR_2];

 if (VAR_3 > 0)
  FUNC_3(VAR_0, VAR_5->flags);
 else
  FUNC_0(VAR_0, VAR_5->flags);

 FUNC_1(VAR_4, VAR_2, VAR_3);
 return 0;
}
