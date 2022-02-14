
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int last_sense; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char,char,char) ;
 int FUNC_2 (struct pt_unit*,char*,int,char*) ;
 int FUNC_3 (struct pt_unit*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct pt_unit *VAR_1, int VAR_2)
{
 char VAR_3[12] = { VAR_0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0 };
 char VAR_4[16];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_3, 16, "Request sense");
 FUNC_0(1);
 if (!VAR_5)
  FUNC_3(VAR_1, VAR_4, "Request sense");

 VAR_1->last_sense = -1;
 if (!VAR_5) {
  if (!VAR_2)
   FUNC_1("%s: Sense key: %x, ASC: %x, ASQ: %x\n",
          VAR_1->name, VAR_4[2] & 0xf, VAR_4[12], VAR_4[13]);
  VAR_1->last_sense = (VAR_4[2] & 0xf) | ((VAR_4[12] & 0xff) << 8)
      | ((VAR_4[13] & 0xff) << 16);
 }
}
