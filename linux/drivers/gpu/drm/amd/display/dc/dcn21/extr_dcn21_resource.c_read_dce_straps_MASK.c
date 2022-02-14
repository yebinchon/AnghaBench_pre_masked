
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_straps {int dc_pinstraps_audio; } ;
struct dc_context {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dc_context*,scalar_t__,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(
 struct dc_context *VAR_4,
 struct resource_straps *VAR_5)
{
 FUNC_2(VAR_4, VAR_2 + FUNC_0(VAR_3),
  FUNC_1(VAR_0, VAR_1), &VAR_5->dc_pinstraps_audio);

}
