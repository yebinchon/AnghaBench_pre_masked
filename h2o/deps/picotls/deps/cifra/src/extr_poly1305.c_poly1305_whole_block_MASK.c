
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int cf_poly1305 ;


 int FUNC_0 (int *,int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
                                 const uint8_t *VAR_1)
{
  cf_poly1305 *VAR_2 = VAR_0;
  uint32_t VAR_3[17];
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
    VAR_3[VAR_4] = VAR_1[VAR_4];

  VAR_3[16] = 1;
  FUNC_0(VAR_2, VAR_3);
}
