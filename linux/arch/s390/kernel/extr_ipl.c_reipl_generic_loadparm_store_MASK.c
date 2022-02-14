
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int loadparm; } ;
struct ipl_parameter_block {TYPE_1__ common; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct ipl_parameter_block *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;


 VAR_7 = VAR_5;
 if ((VAR_5 > 0) && (VAR_4[VAR_5 - 1] == '\n'))
  VAR_7--;

 if ((VAR_7 > VAR_2) || ((VAR_7 > 0) && (VAR_4[0] == ' ')))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_1(VAR_4[VAR_6]) || FUNC_2(VAR_4[VAR_6]) || (VAR_4[VAR_6] == ' ') ||
      (VAR_4[VAR_6] == '.'))
   continue;
  return -VAR_0;
 }

 FUNC_4(VAR_3->common.loadparm, ' ', VAR_2);

 FUNC_3(VAR_3->common.loadparm, VAR_4, VAR_7);
 FUNC_0(VAR_3->common.loadparm, VAR_2);
 VAR_3->common.flags |= VAR_1;
 return VAR_5;
}
