
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_context*,int) ;
 int FUNC_1 (struct dc_context*,int,int) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dc_context *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;

 VAR_6 = VAR_4;
 VAR_7 = FUNC_0(VAR_5, VAR_6);

 VAR_8 = FUNC_2(
  VAR_7,
  VAR_0,
  VAR_1);

 VAR_9 = FUNC_2(
  VAR_7,
  VAR_0,
  VAR_2);

 if (VAR_8 != 0x4 || VAR_9 != 0x4) {

  FUNC_3(
   VAR_7,
   255,
   VAR_0,
   VAR_3);

  FUNC_3(
   VAR_7,
   4,
   VAR_0,
   VAR_1);

  FUNC_3(
   VAR_7,
   4,
   VAR_0,
   VAR_2);

  FUNC_1(VAR_5, VAR_6, VAR_7);
 }
}
