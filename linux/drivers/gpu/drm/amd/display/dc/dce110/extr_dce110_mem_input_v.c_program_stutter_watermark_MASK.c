
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dce_watermarks {int a_mark; int b_mark; } ;
struct dc_context {TYPE_2__* dc; } ;
struct TYPE_3__ {scalar_t__ disable_stutter; } ;
struct TYPE_4__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dc_context const*,int const) ;
 int FUNC_1 (struct dc_context const*,int const,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 const struct dc_context *VAR_6,
 const uint32_t VAR_7,
 const uint32_t VAR_8,
 struct dce_watermarks VAR_9)
{

 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;



 VAR_11 = FUNC_0(VAR_6, VAR_8);
 FUNC_2(VAR_11,
  1,
  VAR_1,
  VAR_4);
 FUNC_1(VAR_6, VAR_8, VAR_11);

 VAR_10 = FUNC_0(VAR_6, VAR_7);

 if (VAR_6->dc->debug.disable_stutter) {
  FUNC_2(VAR_10,
   0,
   VAR_0,
   VAR_2);
 } else {
  FUNC_2(VAR_10,
   1,
   VAR_0,
   VAR_2);
 }

 FUNC_2(VAR_10,
  1,
  VAR_0,
  VAR_5);


 FUNC_2(VAR_10,
  VAR_9.a_mark,
  VAR_0,
  VAR_3);
 FUNC_1(VAR_6, VAR_7, VAR_10);


 VAR_11 = FUNC_0(VAR_6, VAR_8);
 FUNC_2(VAR_11,
  2,
  VAR_1,
  VAR_4);
 FUNC_1(VAR_6, VAR_8, VAR_11);

 VAR_10 = FUNC_0(VAR_6, VAR_7);

 FUNC_2(VAR_10,
  VAR_9.b_mark,
  VAR_0,
  VAR_3);
 FUNC_1(VAR_6, VAR_7, VAR_10);
}
