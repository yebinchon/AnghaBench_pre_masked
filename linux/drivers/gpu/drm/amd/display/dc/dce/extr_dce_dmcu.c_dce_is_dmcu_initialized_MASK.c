
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmcu {int dummy; } ;
struct dce_dmcu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct dce_dmcu* FUNC_1 (struct dmcu*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct dmcu *VAR_2)
{
 struct dce_dmcu *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;


 FUNC_0(VAR_0, VAR_1, &VAR_4);


 if (VAR_4)
  return 0;

 return 1;
}
