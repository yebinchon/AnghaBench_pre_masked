
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1, unsigned int VAR_2, const char *VAR_3)
{
 unsigned int VAR_4 = 0;
 switch (VAR_1 & 3)
 {
 case 130:
  VAR_4 = FUNC_0(VAR_3);
  break;
 case 129:
  VAR_4 = VAR_2;
  break;
 case 128:
  VAR_4 = VAR_2 / 10;
  break;
 case 131:
  VAR_4 = 0;
  break;
 }

 if (VAR_1 & VAR_0)
  VAR_4 = 2 * VAR_4;
 return VAR_4;
}
