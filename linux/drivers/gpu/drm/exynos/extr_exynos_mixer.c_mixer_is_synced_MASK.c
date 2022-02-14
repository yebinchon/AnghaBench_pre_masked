
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixer_context {scalar_t__ mxr_ver; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct mixer_context*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct mixer_context*,int ) ;

__attribute__((used)) static bool FUNC_5(struct mixer_context *VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_7->mxr_ver == VAR_5 ||
     VAR_7->mxr_ver == VAR_4)
  return !(FUNC_2(VAR_7, VAR_1) &
    VAR_2);

 if (FUNC_3(VAR_0, &VAR_7->flags) &&
     FUNC_4(VAR_7, VAR_6))
  return 0;

 VAR_8 = FUNC_2(VAR_7, VAR_1);
 VAR_9 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8 != VAR_9)
  return 0;

 VAR_8 = FUNC_2(VAR_7, FUNC_0(0));
 VAR_9 = FUNC_2(VAR_7, FUNC_1(0));
 if (VAR_8 != VAR_9)
  return 0;

 VAR_8 = FUNC_2(VAR_7, FUNC_0(1));
 VAR_9 = FUNC_2(VAR_7, FUNC_1(1));
 if (VAR_8 != VAR_9)
  return 0;

 return 1;
}
