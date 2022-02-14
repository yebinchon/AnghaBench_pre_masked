
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sctp_auth_chklist_t ;


 int FUNC_0 (int,int *) ;

int
FUNC_1(const uint8_t *VAR_0, uint8_t VAR_1,
    sctp_auth_chklist_t *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return (0);

 if (VAR_1 <= 32) {

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   (void)FUNC_0(*VAR_0++, VAR_2);
  }
  VAR_4 = VAR_1;
 } else {
  int VAR_5, VAR_6;


  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
    if (VAR_0[VAR_5] & (1 << VAR_6)) {
     (void)FUNC_0((VAR_5 * 8) + VAR_6, VAR_2);
    }
   }
  }
  VAR_4 = 32;
 }
 return (VAR_4);
}
