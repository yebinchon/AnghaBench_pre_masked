
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;
struct alps_data {int x_bits; int y_bits; int x_max; int y_max; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 scalar_t__ FUNC_2 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_7,
     struct alps_data *VAR_8)
{
 struct ps2dev *VAR_9 = &VAR_7->ps2dev;
 unsigned char VAR_10[4] = {0};
 int VAR_11, VAR_12;

 if (FUNC_0(VAR_7))
  return -1;

 VAR_10[0] = 0x0a;
 if (FUNC_2(VAR_9, ((void*)0), VAR_4) ||
     FUNC_2(VAR_9, ((void*)0), VAR_5) ||
     FUNC_2(VAR_9, ((void*)0), VAR_5) ||
     FUNC_2(VAR_9, &VAR_10[0], VAR_6) ||
     FUNC_2(VAR_9, &VAR_10[0], VAR_6))
  return -1;

 if (FUNC_2(VAR_9, VAR_10, VAR_3))
  return -1;
 VAR_11 = VAR_1 + (VAR_10[2] & 0x0F);
 VAR_12 = VAR_2 + ((VAR_10[2] >> 4) & 0x0F);
 VAR_8->x_bits = VAR_11;
 VAR_8->y_bits = VAR_12;
 VAR_8->x_max = (VAR_11 - 1) * VAR_0;
 VAR_8->y_max = (VAR_12 - 1) * VAR_0;

 if (FUNC_1(VAR_7))
  return -1;

 return 0;
}
