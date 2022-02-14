
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixer_context {scalar_t__ mxr_ver; int scan_value; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct mixer_context*,int ,int) ;
 int FUNC_3 (struct mixer_context*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mixer_context *VAR_7, int VAR_8, int VAR_9)
{
 u32 VAR_10;


 VAR_10 = FUNC_4(VAR_0, &VAR_7->flags) ?
  VAR_2 : VAR_4;

 if (VAR_7->mxr_ver == VAR_6)
  FUNC_2(VAR_7, VAR_5,
   FUNC_0(VAR_9) | FUNC_1(VAR_8));
 else
  VAR_10 |= VAR_7->scan_value;

 FUNC_3(VAR_7, VAR_1, VAR_10, VAR_3);
}
