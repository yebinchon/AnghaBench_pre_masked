
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0 && (VAR_0 % 44100) == 0)
  VAR_1 = 6272 * (VAR_0 / 44100);
 else
  VAR_1 = VAR_0 * 128 / 1000;

 return VAR_1;
}
