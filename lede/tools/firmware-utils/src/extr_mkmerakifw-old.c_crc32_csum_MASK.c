
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1, const size_t VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4;

 VAR_3 = ~0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 4) {
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4 + 3]);
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4 + 2]);
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4 + 1]);
  VAR_3 = FUNC_0(VAR_3, VAR_1[VAR_4]);
 }
 VAR_3 = ~VAR_3;

 FUNC_1(VAR_1, VAR_0, VAR_3);
}
