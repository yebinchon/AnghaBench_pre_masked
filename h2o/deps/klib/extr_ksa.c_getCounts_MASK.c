
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t saint_t ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(const unsigned char *VAR_0, saint_t *VAR_1, saint_t VAR_2, saint_t VAR_3, int VAR_4)
{
 saint_t VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) VAR_1[VAR_5] = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  saint_t VAR_6 = FUNC_0(VAR_5);
  ++VAR_1[VAR_6 > 0? VAR_6 : 0];
 }
}
