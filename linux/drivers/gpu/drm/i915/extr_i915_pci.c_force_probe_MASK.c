
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ alpha_support; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char*,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static bool FUNC_6(u16 VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 bool VAR_7;


 if (VAR_1.alpha_support) {
  FUNC_0("i915.alpha_support is deprecated, use i915.force_probe=%04x instead\n",
    VAR_2);
  return 1;
 }

 if (!VAR_3 || !*VAR_3)
  return 0;


 if (FUNC_4(VAR_3, "*") == 0)
  return 1;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_4)
  return 0;

 for (VAR_5 = VAR_4, VAR_7 = 0; (VAR_6 = FUNC_5(&VAR_5, ",")) != ((void*)0); ) {
  u16 VAR_8;

  if (FUNC_3(VAR_6, 16, &VAR_8) == 0 && VAR_8 == VAR_2) {
   VAR_7 = 1;
   break;
  }
 }

 FUNC_1(VAR_4);

 return VAR_7;
}
