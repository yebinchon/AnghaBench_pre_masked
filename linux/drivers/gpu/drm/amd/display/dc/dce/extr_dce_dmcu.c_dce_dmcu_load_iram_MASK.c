
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmcu {int dummy; } ;
struct dce_dmcu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int) ;
 int FUNC_2 (int ,char const) ;
 struct dce_dmcu* FUNC_3 (struct dmcu*) ;

bool FUNC_4(struct dmcu *VAR_7,
  unsigned int VAR_8,
  const char *VAR_9,
  unsigned int VAR_10)
{
 struct dce_dmcu *VAR_11 = FUNC_3(VAR_7);
 unsigned int VAR_12 = 0;


 FUNC_0(VAR_4,
   VAR_5, 1,
   VAR_6, 1);

 FUNC_1(VAR_0, VAR_1, 0, 2, 10);

 FUNC_2(VAR_2, VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  FUNC_2(VAR_3, VAR_9[VAR_12]);


 FUNC_0(VAR_4,
   VAR_5, 0,
   VAR_6, 0);

 return 1;
}
