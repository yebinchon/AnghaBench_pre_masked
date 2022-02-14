
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (struct psmouse*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_1,
          unsigned int *VAR_2,
          unsigned int *VAR_3,
          unsigned int *VAR_4)
{
 unsigned char VAR_5[3];

 if (FUNC_1(VAR_1, VAR_0, VAR_5))
  return -1;

 *VAR_2 = FUNC_0(VAR_5[1] & 0x0f);
 *VAR_3 = FUNC_0((VAR_5[1] & 0xf0) >> 4);
 *VAR_4 = VAR_5[2];

 return 0;
}
