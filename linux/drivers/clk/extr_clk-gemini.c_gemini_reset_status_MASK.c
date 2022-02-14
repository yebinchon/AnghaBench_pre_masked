
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct gemini_reset {int map; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 struct gemini_reset* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
        unsigned long VAR_2)
{
 struct gemini_reset *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->map, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(VAR_2));
}
