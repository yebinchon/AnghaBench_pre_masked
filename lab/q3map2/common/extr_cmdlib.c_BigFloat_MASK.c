
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



float FUNC_0( float VAR_0 ){
 union {byte b[4]; float f; } VAR_1, VAR_2;

 VAR_1.f = VAR_0;
 VAR_2.b[0] = VAR_1.b[3];
 VAR_2.b[1] = VAR_1.b[2];
 VAR_2.b[2] = VAR_1.b[1];
 VAR_2.b[3] = VAR_1.b[0];

 return VAR_2.f;
}
