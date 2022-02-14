
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int FUNC_0(unsigned int VAR_0)
{
 static const unsigned int VAR_1 = 100;
 static const unsigned int VAR_2 = 5000;

 static const unsigned int VAR_3 = 100;
 static const unsigned int VAR_4 = 20000;

 unsigned int VAR_5, VAR_6;

 if (VAR_0 <= VAR_3)
  return 0;

 if (VAR_0 <= VAR_4) {
  VAR_5 = VAR_0 - VAR_3;
  return (VAR_5 < VAR_1) ? VAR_5 : VAR_1;
 }

 VAR_5 = VAR_0 - VAR_4;
 VAR_6 = (VAR_5 < VAR_2) ? VAR_5 : VAR_2;

 return (VAR_6 > VAR_1) ? VAR_6 : VAR_1;
}
