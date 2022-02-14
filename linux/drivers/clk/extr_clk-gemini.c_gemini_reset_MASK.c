
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct gemini_reset {int map; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 struct gemini_reset* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_2,
   unsigned long VAR_3)
{
 struct gemini_reset *VAR_4 = FUNC_2(VAR_2);


 return FUNC_1(VAR_4->map,
       VAR_0,
       FUNC_0(VAR_1) | FUNC_0(VAR_3));
}
