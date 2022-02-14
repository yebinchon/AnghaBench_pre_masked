
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_dev {unsigned int cells_per_row; unsigned int cells_per_lbuf; unsigned int r1_startrow; unsigned int bytes_per_row; unsigned int r1_numbuffs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct he_dev*,int ) ;
 int FUNC_1 (struct he_dev*,unsigned int,int ) ;
 int FUNC_2 (struct he_dev*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct he_dev *VAR_5)
{
 unsigned VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned VAR_11 = VAR_5->cells_per_row / VAR_5->cells_per_lbuf;
 unsigned VAR_12 = VAR_5->cells_per_lbuf * VAR_0;
 unsigned VAR_13 = VAR_5->r1_startrow * VAR_5->bytes_per_row;

 VAR_8 = 1;
 VAR_7 = FUNC_0(VAR_5, VAR_1) + (2 * VAR_8);

 FUNC_1(VAR_5, VAR_8, VAR_3);

 for (VAR_6 = 0, VAR_10 = 0; VAR_6 < VAR_5->r1_numbuffs; ++VAR_6) {
  VAR_8 += 2;
  VAR_9 = (VAR_13 + (VAR_10 * VAR_12)) / 32;

  FUNC_2(VAR_5, VAR_9, VAR_7);
  FUNC_2(VAR_5, VAR_8, VAR_7 + 1);

  if (++VAR_10 == VAR_11) {
   VAR_10 = 0;
   VAR_13 += VAR_5->bytes_per_row;
  }
  VAR_7 += 4;
 }

 FUNC_1(VAR_5, VAR_8 - 2, VAR_4);
 FUNC_1(VAR_5, VAR_5->r1_numbuffs, VAR_2);
}
