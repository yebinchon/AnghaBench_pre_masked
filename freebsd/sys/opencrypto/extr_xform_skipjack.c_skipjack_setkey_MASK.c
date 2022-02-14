
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int **) ;

__attribute__((used)) static int
FUNC_2(u_int8_t **VAR_4, const u_int8_t *VAR_5, int VAR_6)
{
 int VAR_7;


 *VAR_4 = FUNC_0(10 * (sizeof(u_int8_t *) + 0x100),
  VAR_1, VAR_2|VAR_3);
 if (*VAR_4 != ((void*)0)) {
  u_int8_t** VAR_8 = (u_int8_t**) *VAR_4;
  u_int8_t* VAR_9 = (u_int8_t*) &VAR_8[10];
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
   VAR_8[VAR_10] = VAR_9;
   VAR_9 += 0x100;
  }
  FUNC_1(VAR_5, (u_int8_t **) *VAR_4);
  VAR_7 = 0;
 } else
  VAR_7 = VAR_0;
 return VAR_7;
}
