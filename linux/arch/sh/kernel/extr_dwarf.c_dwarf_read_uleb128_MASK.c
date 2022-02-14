
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (char*) ;

__attribute__((used)) static inline unsigned long FUNC_1(char *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;
 unsigned char VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = 0;
 VAR_4 = 0;
 VAR_5 = 0;

 while (1) {
  VAR_3 = FUNC_0(VAR_0);
  VAR_0++;
  VAR_5++;

  VAR_2 |= (VAR_3 & 0x7f) << VAR_4;
  VAR_4 += 7;

  if (!(VAR_3 & 0x80))
   break;
 }

 *VAR_1 = VAR_2;

 return VAR_5;
}
