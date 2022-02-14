
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt77252_dev {int sramsize; int tct_base; int tct_size; int rct_base; int rct_size; int rt_base; int scd_base; int scd_size; int* tst; int tst_size; int abrst_base; int abrst_size; int fifo_base; int fifo_size; int tst_free; int name; scalar_t__ tst_index; } ;


 int** VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int* VAR_53 ;
 int* VAR_54 ;
 int FUNC_1 (struct idt77252_dev*,int,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct idt77252_dev *VAR_55)
{
 int VAR_56;

 for (VAR_56 = 0; VAR_56 < VAR_55->sramsize; VAR_56 += 4)
  FUNC_1(VAR_55, (VAR_56 >> 2), 0);


 if (VAR_55->sramsize == (512 * 1024)) {
  VAR_55->tct_base = VAR_39;
  VAR_55->tct_size = (VAR_40 - VAR_55->tct_base + 1)
      / VAR_43;
  VAR_55->rct_base = VAR_27;
  VAR_55->rct_size = (VAR_28 - VAR_55->rct_base + 1)
      / VAR_31;
  VAR_55->rt_base = VAR_32;
  VAR_55->scd_base = VAR_34;
  VAR_55->scd_size = (VAR_35 - VAR_55->scd_base + 1)
      / VAR_38;
  VAR_55->tst[0] = VAR_44;
  VAR_55->tst[1] = VAR_48;
  VAR_55->tst_size = VAR_45 - VAR_55->tst[0] + 1;
  VAR_55->abrst_base = VAR_23;
  VAR_55->abrst_size = VAR_3;
  VAR_55->fifo_base = VAR_25;
  VAR_55->fifo_size = VAR_21;
 } else {
  VAR_55->tct_base = VAR_41;
  VAR_55->tct_size = (VAR_42 - VAR_55->tct_base + 1)
      / VAR_43;
  VAR_55->rct_base = VAR_29;
  VAR_55->rct_size = (VAR_30 - VAR_55->rct_base + 1)
      / VAR_31;
  VAR_55->rt_base = VAR_33;
  VAR_55->scd_base = VAR_36;
  VAR_55->scd_size = (VAR_37 - VAR_55->scd_base + 1)
      / VAR_38;
  VAR_55->tst[0] = VAR_46;
  VAR_55->tst[1] = VAR_49;
  VAR_55->tst_size = (VAR_47 - VAR_55->tst[0] + 1);
  VAR_55->abrst_base = VAR_24;
  VAR_55->abrst_size = VAR_2;
  VAR_55->fifo_base = VAR_26;
  VAR_55->fifo_size = VAR_22;
 }


 for (VAR_56 = 0; VAR_56 < VAR_55->tct_size; VAR_56++) {
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 0, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 1, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 2, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 3, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 4, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 5, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 6, 0);
  FUNC_1(VAR_55, VAR_56 * VAR_43 + 7, 0);
 }


 for (VAR_56 = 0; VAR_56 < VAR_55->rct_size; VAR_56++) {
  FUNC_1(VAR_55, VAR_55->rct_base + VAR_56 * VAR_31,
        (u32) VAR_12);
  FUNC_1(VAR_55, VAR_55->rct_base + VAR_56 * VAR_31 + 1,
        (u32) 0);
  FUNC_1(VAR_55, VAR_55->rct_base + VAR_56 * VAR_31 + 2,
        (u32) 0);
  FUNC_1(VAR_55, VAR_55->rct_base + VAR_56 * VAR_31 + 3,
        (u32) 0xffffffff);
 }

 FUNC_2((VAR_4 << 28) | (VAR_8 / 48), VAR_14);
 FUNC_2((VAR_5 << 28) | (VAR_9 / 48), VAR_15);
 FUNC_2((VAR_6 << 28) | (VAR_10 / 48), VAR_16);
 FUNC_2((VAR_7 << 28) | (VAR_11 / 48), VAR_17);


 for (VAR_56 = 0; VAR_56 < 256; VAR_56++) {
  FUNC_1(VAR_55, VAR_55->rt_base + VAR_56, VAR_53[VAR_56]);
 }

 for (VAR_56 = 0; VAR_56 < 128; VAR_56++) {
  unsigned int VAR_57;

  VAR_57 = VAR_54[(VAR_56 << 2) + 0] << 0;
  VAR_57 |= VAR_54[(VAR_56 << 2) + 1] << 8;
  VAR_57 |= VAR_54[(VAR_56 << 2) + 2] << 16;
  VAR_57 |= VAR_54[(VAR_56 << 2) + 3] << 24;
  FUNC_1(VAR_55, VAR_55->rt_base + 256 + VAR_56, VAR_57);
 }
 FUNC_0("%s: initialize rate table ...\n", VAR_55->name);
 FUNC_2(VAR_55->rt_base << 2, VAR_18);


 FUNC_0("%s: initialize TST ...\n", VAR_55->name);
 VAR_55->tst_free = VAR_55->tst_size - 2;

 for (VAR_56 = VAR_55->tst[0]; VAR_56 < VAR_55->tst[0] + VAR_55->tst_size - 2; VAR_56++)
  FUNC_1(VAR_55, VAR_56, VAR_51);
 FUNC_1(VAR_55, VAR_56++, VAR_50 | (VAR_55->tst[0] << 2));
 VAR_52 = 1;
 FUNC_1(VAR_55, VAR_56++, VAR_50 | (VAR_55->tst[1] << 2));
 VAR_52 = 0;
 for (VAR_56 = VAR_55->tst[1]; VAR_56 < VAR_55->tst[1] + VAR_55->tst_size - 2; VAR_56++)
  FUNC_1(VAR_55, VAR_56, VAR_51);
 FUNC_1(VAR_55, VAR_56++, VAR_50 | (VAR_55->tst[1] << 2));
 VAR_52 = 1;
 FUNC_1(VAR_55, VAR_56++, VAR_50 | (VAR_55->tst[0] << 2));
 VAR_52 = 0;

 VAR_55->tst_index = 0;
 FUNC_2(VAR_55->tst[0] << 2, VAR_20);


 FUNC_0("%s: initialize ABRSTD ...\n", VAR_55->name);
 FUNC_2(VAR_55->abrst_size | (VAR_55->abrst_base << 2),
        VAR_13);

 FUNC_0("%s: initialize receive fifo ...\n", VAR_55->name);
 FUNC_2(VAR_55->fifo_size | (VAR_55->fifo_base << 2),
        VAR_19);

 FUNC_0("%s: SRAM initialization complete.\n", VAR_55->name);
}
