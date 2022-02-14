
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_abm {int dummy; } ;
struct abm {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 struct dce_abm* FUNC_1 (struct abm*) ;
 int FUNC_2 (struct dce_abm*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct dce_abm*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(
  struct abm *VAR_0,
  unsigned int VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3,
  bool VAR_4)
{
 struct dce_abm *VAR_5 = FUNC_1(VAR_0);

 FUNC_0("New Backlight level: %d (0x%X)\n",
   VAR_1, VAR_1);


 if (VAR_4)
  FUNC_2(VAR_5,
    VAR_1,
    VAR_2,
    VAR_3);
 else
  FUNC_3(VAR_5, VAR_1);

 return 1;
}
