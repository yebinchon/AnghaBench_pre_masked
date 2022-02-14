
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rlim_t ;
typedef int int64_t ;
typedef int buf ;
struct TYPE_2__ {int suffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int ,int ,int,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3(int VAR_5, rlim_t VAR_6)
{
 static char VAR_7[14];
 int VAR_8;

 if (VAR_6 == VAR_3)
  return ("infinity     ");

 VAR_8 = FUNC_0(VAR_7, sizeof(VAR_7) - 1, (int64_t)VAR_6,
     VAR_4[VAR_5].suffix, VAR_0 | VAR_2, VAR_1);
 (void)FUNC_0(VAR_7, sizeof(VAR_7) - 1, (int64_t)VAR_6,
     VAR_4[VAR_5].suffix, VAR_0, VAR_1);

 if (VAR_8 == 0)
  FUNC_1(VAR_7 + FUNC_2(VAR_7), " ");
 return (VAR_7);
}
