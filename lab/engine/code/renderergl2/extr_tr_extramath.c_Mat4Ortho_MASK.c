
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* mat4_t ;



void FUNC_0( float VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, mat4_t VAR_6 )
{
 VAR_6[ 0] = 2.0f / (VAR_1 - VAR_0); VAR_6[ 4] = 0.0f; VAR_6[ 8] = 0.0f; VAR_6[12] = -(VAR_1 + VAR_0) / (VAR_1 - VAR_0);
 VAR_6[ 1] = 0.0f; VAR_6[ 5] = 2.0f / (VAR_3 - VAR_2); VAR_6[ 9] = 0.0f; VAR_6[13] = -(VAR_3 + VAR_2) / (VAR_3 - VAR_2);
 VAR_6[ 2] = 0.0f; VAR_6[ 6] = 0.0f; VAR_6[10] = 2.0f / (VAR_5 - VAR_4); VAR_6[14] = -(VAR_5 + VAR_4) / (VAR_5 - VAR_4);
 VAR_6[ 3] = 0.0f; VAR_6[ 7] = 0.0f; VAR_6[11] = 0.0f; VAR_6[15] = 1.0f;
}
