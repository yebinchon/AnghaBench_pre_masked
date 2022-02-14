
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*,unsigned char) ;
 int FUNC_1 (struct ps2dev*) ;
 int FUNC_2 (struct ps2dev*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_3, unsigned short VAR_4,
          unsigned char VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_3->ps2dev;
 int VAR_7 = VAR_0;
 int VAR_8;

 FUNC_1(VAR_6);

 do {





  VAR_8 = FUNC_0(VAR_3, VAR_4 & 0xff);
  if (VAR_8 == VAR_2) {
   VAR_8 = FUNC_0(VAR_3, 0x00);
   if (VAR_8 == VAR_2)
    VAR_8 = FUNC_0(VAR_3, 0x0a);
  }
  if (VAR_8 == VAR_1)
   continue;

  VAR_8 = FUNC_0(VAR_3, VAR_5);
  if (VAR_8 == VAR_2)
   VAR_8 = FUNC_0(VAR_3, VAR_5);
  if (VAR_8 == VAR_1)
   continue;
  else
   break;
 } while (--VAR_7 > 0);

 FUNC_2(VAR_6);

 return VAR_8;
}
