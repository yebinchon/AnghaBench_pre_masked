
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (int *,int *,int) ;

unsigned FUNC_1 (const void *VAR_0, int VAR_1)
{
 int VAR_2[4];
 unsigned VAR_3;

 FUNC_0( (byte *)VAR_2, (byte *)VAR_0, VAR_1 );

 VAR_3 = VAR_2[0] ^ VAR_2[1] ^ VAR_2[2] ^ VAR_2[3];

 return VAR_3;
}
