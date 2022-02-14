
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int pi; int name; } ;


 int FUNC_0 (struct pg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pg*,int,int,unsigned long,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct pg*,int) ;
 int VAR_2 ;
 int FUNC_7 (struct pg*,int,int) ;

__attribute__((used)) static int FUNC_8(struct pg *VAR_3, char *VAR_4, int VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_3->pi);

 FUNC_7(VAR_3, 6, FUNC_0(VAR_3));

 if (FUNC_1(VAR_3, VAR_0 | VAR_1, 0, VAR_6, "before command"))
  goto fail;

 FUNC_7(VAR_3, 4, VAR_5 % 256);
 FUNC_7(VAR_3, 5, VAR_5 / 256);
 FUNC_7(VAR_3, 7, 0xa0);

 if (FUNC_1(VAR_3, VAR_0, VAR_1, VAR_6, "command DRQ"))
  goto fail;

 if (FUNC_6(VAR_3, 2) != 1) {
  FUNC_5("%s: command phase error\n", VAR_3->name);
  goto fail;
 }

 FUNC_4(VAR_3->pi, VAR_4, 12);

 if (VAR_2 > 1) {
  FUNC_5("%s: Command sent, dlen=%d packet= ", VAR_3->name, VAR_5);
  for (VAR_7 = 0; VAR_7 < 12; VAR_7++)
   FUNC_5("%02x ", VAR_4[VAR_7] & 0xff);
  FUNC_5("\n");
 }
 return 0;
fail:
 FUNC_3(VAR_3->pi);
 return -1;
}
