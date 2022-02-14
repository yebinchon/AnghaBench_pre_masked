
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int active; int power_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct sirf_data *VAR_2,
      bool VAR_3,
      unsigned long VAR_4)
{
 int VAR_5;


 FUNC_1(VAR_4);


 VAR_2->active = 0;
 VAR_5 = FUNC_2(VAR_2->power_wait,
   VAR_2->active, FUNC_0(VAR_1));
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 > 0 && !VAR_3)
  return -VAR_0;

 if (VAR_5 == 0 && VAR_3)
  return -VAR_0;

 return 0;
}
