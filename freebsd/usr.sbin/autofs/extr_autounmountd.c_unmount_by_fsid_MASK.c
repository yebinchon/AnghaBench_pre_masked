
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * val; } ;
typedef TYPE_1__ fsid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,char*,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,char const*,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(const fsid_t VAR_4, const char *VAR_5)
{
 char *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(&VAR_6, "FSID:%d:%d", VAR_4.val[0], VAR_4.val[1]);
 if (VAR_8 < 0)
  FUNC_3(1, "asprintf");

 VAR_7 = FUNC_6(VAR_6, VAR_2 | VAR_1);
 if (VAR_7 != 0) {
  if (VAR_3 == VAR_0) {
   FUNC_2("cannot unmount %s (%s): %s",
       VAR_5, VAR_6, FUNC_5(VAR_3));
  } else {
   FUNC_4("cannot unmount %s (%s)",
       VAR_5, VAR_6);
  }
 }

 FUNC_1(VAR_6);

 return (VAR_7);
}
