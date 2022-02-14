
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;

__attribute__((used)) static size_t
FUNC_1(uint8_t *VAR_1)
{
  const size_t VAR_2 = VAR_0;
  size_t VAR_3 = -(intptr_t)VAR_1 & (VAR_2-1);
  if (VAR_3 > 0) {
    FUNC_0(VAR_1, 0, VAR_3);
  }
  return VAR_3;
}
