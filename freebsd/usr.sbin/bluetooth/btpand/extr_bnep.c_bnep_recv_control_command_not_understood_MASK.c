
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int channel_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static size_t
FUNC_2(channel_t *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 uint8_t VAR_3;

 if (VAR_2 < 1)
  return 0;

 VAR_3 = *VAR_1++;
 FUNC_1("received Control Command Not Understood (0x%2.2x)", VAR_3);


 FUNC_0(VAR_0);

 return 1;
}
