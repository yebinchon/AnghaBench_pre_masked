
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ trans; int * chost; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

int32_t
FUNC_7(char *VAR_5)
{
 FUNC_0(VAR_5 != ((void*)0));

 if (FUNC_2(&VAR_4, VAR_5) < 0)
  return (-1);

 if (VAR_4.trans > VAR_2 && VAR_4.chost == ((void*)0)) {
  if ((VAR_4.chost = FUNC_1(FUNC_5(VAR_1) + 1))
      == ((void*)0)) {
   FUNC_6(VAR_0, "malloc() failed: %s", FUNC_4(VAR_3));
   return (-1);
  }
  FUNC_3(VAR_4.chost, VAR_1);
 }

 return (2);
}
