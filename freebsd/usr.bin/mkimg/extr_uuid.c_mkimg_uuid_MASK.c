
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int mkimg_uuid_t ;
typedef int gen ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void
FUNC_2(mkimg_uuid_t *VAR_1)
{
 static uint8_t VAR_2[sizeof(mkimg_uuid_t)];
 u_int VAR_3;

 if (!VAR_0) {
  FUNC_1(VAR_1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < sizeof(VAR_2); VAR_3++)
  VAR_2[VAR_3]++;
 FUNC_0(VAR_1, VAR_2, sizeof(*VAR_1));
}
