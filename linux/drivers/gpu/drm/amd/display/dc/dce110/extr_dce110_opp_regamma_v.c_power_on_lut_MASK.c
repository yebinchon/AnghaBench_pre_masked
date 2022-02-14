
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct transform {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct transform *VAR_4,
 bool VAR_5, bool VAR_6, bool VAR_7)
{
 uint32_t VAR_8 = FUNC_0(VAR_4->ctx, VAR_3);
 int VAR_9;

 if (VAR_5) {
  if (VAR_6)
   FUNC_3(
    VAR_8,
    1,
    VAR_2,
    VAR_1);
  if (VAR_7)
   FUNC_3(
    VAR_8,
    1,
    VAR_2,
    VAR_0);
 } else {
  if (VAR_6)
   FUNC_3(
    VAR_8,
    0,
    VAR_2,
    VAR_1);
  if (VAR_7)
   FUNC_3(
    VAR_8,
    0,
    VAR_2,
    VAR_0);
 }

 FUNC_1(VAR_4->ctx, VAR_3, VAR_8);

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_8 = FUNC_0(VAR_4->ctx, VAR_3);
  if (FUNC_2(VAR_8,
    VAR_2,
    VAR_1) &&
   FUNC_2(VAR_8,
     VAR_2,
     VAR_0))
   break;

  FUNC_4(2);
 }
}
