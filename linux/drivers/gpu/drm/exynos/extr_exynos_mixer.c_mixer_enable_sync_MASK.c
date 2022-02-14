
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {scalar_t__ mxr_ver; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mixer_context*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mixer_context*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mixer_context *VAR_9)
{
 if (VAR_9->mxr_ver == VAR_6 ||
     VAR_9->mxr_ver == VAR_5)
  FUNC_0(VAR_9, VAR_1, ~0, VAR_2);
 FUNC_0(VAR_9, VAR_3, ~0, VAR_4);
 if (FUNC_1(VAR_0, &VAR_9->flags))
  FUNC_2(VAR_9, VAR_7, VAR_8);
}
