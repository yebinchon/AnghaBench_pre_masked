
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;



__attribute__((used)) static void FUNC_0( byte *VAR_0, int VAR_1, int VAR_2 )
{
 int VAR_3;
 byte *VAR_4 = VAR_0, VAR_5;

 for (VAR_3=0; VAR_3<VAR_1*VAR_2; VAR_3++, VAR_4+=4)
 {

  VAR_5 = VAR_4[0];
  VAR_4[0] = VAR_4[3];
  VAR_4[3] = VAR_5;
 }
}
