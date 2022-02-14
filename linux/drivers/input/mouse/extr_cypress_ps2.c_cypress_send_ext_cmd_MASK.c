
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct psmouse*,int ,int ) ;
 int FUNC_5 (struct psmouse*,unsigned char,unsigned char*) ;
 scalar_t__ FUNC_6 (struct psmouse*,unsigned char,unsigned char*) ;
 int FUNC_7 (struct psmouse*,char*,unsigned char,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct psmouse *VAR_3, unsigned char VAR_4,
    unsigned char *VAR_5)
{
 int VAR_6 = VAR_0;
 int VAR_7;

 FUNC_7(VAR_3, "send extension cmd 0x%02x, [%d %d %d %d]\n",
   VAR_4, FUNC_0(VAR_4), FUNC_1(VAR_4),
   FUNC_2(VAR_4), FUNC_3(VAR_4));

 do {
  FUNC_4(VAR_3,
        VAR_2, FUNC_3(VAR_4));
  FUNC_4(VAR_3,
        VAR_2, FUNC_2(VAR_4));
  FUNC_4(VAR_3,
        VAR_2, FUNC_1(VAR_4));
  FUNC_4(VAR_3,
        VAR_2, FUNC_0(VAR_4));

  VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);
  if (VAR_7)
   continue;

  if (FUNC_6(VAR_3, VAR_4, VAR_5))
   return 0;

 } while (--VAR_6 > 0);

 return -VAR_1;
}
