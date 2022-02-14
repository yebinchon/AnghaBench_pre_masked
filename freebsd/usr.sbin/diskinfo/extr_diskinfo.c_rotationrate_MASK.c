
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ u16; } ;
struct diocgattr_arg {int len; TYPE_1__ value; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ,struct diocgattr_arg*) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_5, char *VAR_6, size_t VAR_7)
{
 struct diocgattr_arg VAR_8;
 int VAR_9;

 FUNC_2(VAR_8.name, "GEOM::rotation_rate", sizeof(VAR_8.name));
 VAR_8.len = sizeof(VAR_8.value.u16);

 VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_8);
 if (VAR_9 < 0 || VAR_8.value.u16 == VAR_4)
  FUNC_1(VAR_6, VAR_7, "Unknown");
 else if (VAR_8.value.u16 == VAR_3)
  FUNC_1(VAR_6, VAR_7, "%d", 0);
 else if (VAR_8.value.u16 >= VAR_2 && VAR_8.value.u16 <= VAR_1)
  FUNC_1(VAR_6, VAR_7, "%d", VAR_8.value.u16);
 else
  FUNC_1(VAR_6, VAR_7, "Invalid");
}
