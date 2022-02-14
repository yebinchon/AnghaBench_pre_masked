
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_dev {unsigned int cells_per_row; unsigned int cells_per_lbuf; unsigned int tx_startrow; unsigned int bytes_per_row; unsigned int r0_numbuffs; unsigned int r1_numbuffs; unsigned int tx_numbuffs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct he_dev*,int ) ;
 int FUNC_1 (struct he_dev*,unsigned int,int ) ;
 int FUNC_2 (struct he_dev*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct he_dev *VAR_4)
{
 unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned VAR_10 = VAR_4->cells_per_row / VAR_4->cells_per_lbuf;
 unsigned VAR_11 = VAR_4->cells_per_lbuf * VAR_0;
 unsigned VAR_12 = VAR_4->tx_startrow * VAR_4->bytes_per_row;

 VAR_7 = VAR_4->r0_numbuffs + VAR_4->r1_numbuffs;
 VAR_6 = FUNC_0(VAR_4, VAR_1) + (2 * VAR_7);

 FUNC_1(VAR_4, VAR_7, VAR_2);

 for (VAR_5 = 0, VAR_9 = 0; VAR_5 < VAR_4->tx_numbuffs; ++VAR_5) {
  VAR_7 += 1;
  VAR_8 = (VAR_12 + (VAR_9 * VAR_11)) / 32;

  FUNC_2(VAR_4, VAR_8, VAR_6);
  FUNC_2(VAR_4, VAR_7, VAR_6 + 1);

  if (++VAR_9 == VAR_10) {
   VAR_9 = 0;
   VAR_12 += VAR_4->bytes_per_row;
  }
  VAR_6 += 2;
 }

 FUNC_1(VAR_4, VAR_7 - 1, VAR_3);
}
