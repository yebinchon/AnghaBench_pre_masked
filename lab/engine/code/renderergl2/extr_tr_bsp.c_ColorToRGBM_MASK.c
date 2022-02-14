
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 float FUNC_0 (float,float,float) ;
 float FUNC_1 (float,int) ;
 int FUNC_2 (int* const,int*) ;
 int FUNC_3 (int*,float,int*) ;
 scalar_t__ FUNC_4 (float) ;

void FUNC_5(const vec3_t VAR_0, unsigned char VAR_1[4])
{
 vec3_t VAR_2;
 float VAR_3;

 FUNC_2(VAR_0, VAR_2);

 VAR_3 = FUNC_1(VAR_2[0], VAR_2[1]);
 VAR_3 = FUNC_1(VAR_3, VAR_2[2]);
 VAR_3 = FUNC_0(VAR_3, 1.0f/255.0f, 1.0f);

 VAR_1[3] = (unsigned char) FUNC_4(VAR_3 * 255.0f);
 VAR_3 = 255.0f / VAR_1[3];

 FUNC_3(VAR_2, VAR_3, VAR_2);

 VAR_1[0] = (unsigned char) (VAR_2[0] * 255);
 VAR_1[1] = (unsigned char) (VAR_2[1] * 255);
 VAR_1[2] = (unsigned char) (VAR_2[2] * 255);
}
