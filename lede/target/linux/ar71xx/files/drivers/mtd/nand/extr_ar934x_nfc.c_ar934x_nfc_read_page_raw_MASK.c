
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct ar934x_nfc {int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar934x_nfc*,int ,int ,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 struct ar934x_nfc* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct ar934x_nfc*,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
    u8 *VAR_3, int VAR_4, int VAR_5)
{
 struct ar934x_nfc *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;
 int VAR_8;

 FUNC_3(VAR_6, "read_page_raw: page:%d oob:%d\n", VAR_5, VAR_4);

 VAR_7 = VAR_1->writesize;
 if (VAR_4)
  VAR_7 += VAR_1->oobsize;

 VAR_8 = FUNC_0(VAR_6, VAR_0, 0, VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_3, VAR_6->buf, VAR_1->writesize);

 if (VAR_4)
  FUNC_1(VAR_2->oob_poi, &VAR_6->buf[VAR_1->writesize], VAR_1->oobsize);

 return 0;
}
