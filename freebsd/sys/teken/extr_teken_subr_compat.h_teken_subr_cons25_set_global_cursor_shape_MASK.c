
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int teken_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(const teken_t *VAR_1, unsigned int VAR_2,
    const unsigned int VAR_3[])
{
 unsigned int VAR_4, VAR_5;
 if (VAR_2 > 3)
  return;
 VAR_4 = 0;
 for (VAR_5 = VAR_2; VAR_5 > 0; VAR_5--)
  VAR_4 = (VAR_4 << 8) | (VAR_3[VAR_5 - 1] & 0xff);
 VAR_4 = (VAR_4 << 8) | VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_4);
}
