
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct iforce_core_effect {scalar_t__* flags; int mod2_chunk; int mod1_chunk; } ;
struct iforce {struct iforce_core_effect* core_effects; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iforce* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, int VAR_3)
{
 struct iforce *VAR_4 = FUNC_0(VAR_2);
 struct iforce_core_effect *VAR_5 = &VAR_4->core_effects[VAR_3];
 int VAR_6 = 0;

 if (FUNC_2(VAR_0, VAR_5->flags))
  VAR_6 = FUNC_1(&VAR_5->mod1_chunk);

 if (!VAR_6 && FUNC_2(VAR_1, VAR_5->flags))
  VAR_6 = FUNC_1(&VAR_5->mod2_chunk);


 VAR_5->flags[0] = 0;

 return VAR_6;
}
