
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct fixed31_32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fixed31_32,struct fixed31_32 const,struct fixed31_32 const) ;
 struct fixed31_32 FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ,int,int) ;

void FUNC_3(
 uint16_t *VAR_3,
 struct fixed31_32 *VAR_4,
 uint32_t VAR_5)
{
 const struct fixed31_32 VAR_6 =
  FUNC_1(VAR_2, VAR_0);
 const struct fixed31_32 VAR_7 =
  FUNC_1(VAR_1, VAR_0);
 uint32_t VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
  uint32_t VAR_9 =
    FUNC_2(
     FUNC_0(
      VAR_4[VAR_8],
      VAR_6,
      VAR_7),
      2,
      13);

  VAR_3[VAR_8] = (uint16_t)VAR_9;
 }
}
