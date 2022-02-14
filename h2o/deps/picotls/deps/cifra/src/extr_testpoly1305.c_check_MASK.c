
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_poly1305 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 size_t FUNC_5 (int *,int,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, const char *VAR_1,
                  const char *VAR_2, const char *VAR_3)
{
  uint8_t VAR_4[16], VAR_5[16], VAR_6[16];
  uint8_t VAR_7[132], VAR_8[16];

  FUNC_5(VAR_4, sizeof VAR_4, VAR_0);
  FUNC_5(VAR_5, sizeof VAR_5, VAR_1);
  size_t VAR_9 = FUNC_5(VAR_7, sizeof VAR_7, VAR_2);
  FUNC_5(VAR_6, sizeof VAR_6, VAR_3);

  cf_poly1305 VAR_10;
  FUNC_2(&VAR_10, VAR_4, VAR_5);
  FUNC_3(&VAR_10, VAR_7, VAR_9);
  FUNC_1(&VAR_10, VAR_8);

  FUNC_0(FUNC_4(VAR_8, VAR_6, 16) == 0);
}
