
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int prga_len; int prga; int iv; int fname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ,int) ;

void FUNC_6(struct params *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2->fname, VAR_1 | VAR_0, 0644);
 if (VAR_3 == -1)
  FUNC_1(1, "open()");

 VAR_4 = FUNC_5(VAR_3, VAR_2->iv, 3);
 if (VAR_4 == -1)
  FUNC_1(1, "write()");
 if (VAR_4 != 3) {
  FUNC_4("Short write\n");
  FUNC_2(1);
 }

 VAR_4 = FUNC_5(VAR_3, VAR_2->prga, VAR_2->prga_len);
 if (VAR_4 == -1)
  FUNC_1(1, "write()");
 if (VAR_4 != VAR_2->prga_len) {
  FUNC_4("Wrote %d/%d\n", VAR_4, VAR_2->prga_len);
  FUNC_2(1);
 }
 FUNC_0(VAR_3);

 FUNC_4("Got %d bytes of PRGA\n", VAR_2->prga_len);
}
