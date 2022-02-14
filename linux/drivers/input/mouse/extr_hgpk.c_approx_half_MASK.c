
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0 < 5 || VAR_1 < 5)
  return 0;

 VAR_2 = (VAR_1 * 8) / 20;
 VAR_3 = (VAR_1 * 12) / 20;

 return VAR_2 < VAR_0 && VAR_0 <= VAR_3;
}
