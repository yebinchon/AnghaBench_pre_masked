
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int des_key_schedule ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static int
FUNC_2(u_int8_t **VAR_4, const u_int8_t *VAR_5, int VAR_6)
{
 des_key_schedule *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(sizeof (des_key_schedule),
  VAR_1, VAR_2|VAR_3);
 if (VAR_7 != ((void*)0)) {
  FUNC_1(VAR_5, VAR_7[0]);
  VAR_8 = 0;
 } else
  VAR_8 = VAR_0;
 *VAR_4 = (u_int8_t *) VAR_7;
 return VAR_8;
}
