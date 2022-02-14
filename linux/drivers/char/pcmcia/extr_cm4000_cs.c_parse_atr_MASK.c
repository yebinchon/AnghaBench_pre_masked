
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm4000_dev {int atr_len; int* atr; int proto; int ta1; int atr_csum; int flags; } ;


 int FUNC_0 (int,struct cm4000_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cm4000_dev *VAR_5)
{
 unsigned char VAR_6, VAR_7;
 unsigned char VAR_8, VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(3, VAR_5, "-> parse_atr: dev->atr_len = %i\n", VAR_5->atr_len);

 if (VAR_5->atr_len < 3) {
  FUNC_0(5, VAR_5, "parse_atr: atr_len < 3\n");
  return 0;
 }

 if (VAR_5->atr[0] == 0x3f)
  FUNC_2(VAR_3, &VAR_5->flags);
 else
  FUNC_1(VAR_3, &VAR_5->flags);
 VAR_10 = 1;
 VAR_9 = 1;
 VAR_8 = VAR_5->atr[1];
 VAR_5->proto = 0;
 VAR_6 = VAR_7 = VAR_11 = 0;
 VAR_5->ta1 = 0x11;
 do {
  if (VAR_9 == 1 && (VAR_8 & 0x10)) {

   VAR_5->ta1 = VAR_5->atr[2];
   FUNC_0(5, VAR_5, "Card says FiDi is 0x%.2x\n", VAR_5->ta1);
   VAR_9++;
  } else if ((VAR_9 == 2) && (VAR_8 & 0x10)) {
   VAR_5->ta1 = 0x11;
   VAR_9++;
  }

  FUNC_0(5, VAR_5, "Yi=%.2x\n", VAR_8 & 0xf0);
  VAR_10 += ((VAR_8 & 0x10) >> 4)
      +((VAR_8 & 0x20) >> 5)
      + ((VAR_8 & 0x40) >> 6)
      + ((VAR_8 & 0x80) >> 7);

  if (VAR_8 & 0x80) {
   VAR_8 = VAR_5->atr[VAR_10];
   if ((VAR_8 & 0x0f)) {
    VAR_6 = 1;
    FUNC_0(5, VAR_5, "card is capable of T=1\n");
   } else {
    VAR_7 = 1;
    FUNC_0(5, VAR_5, "card is capable of T=0\n");
   }
  } else
   VAR_11 = 1;
 } while (!VAR_11);

 FUNC_0(5, VAR_5, "ix=%d noHist=%d any_t1=%d\n",
       VAR_10, VAR_5->atr[1] & 15, VAR_6);
 if (VAR_10 + 1 + (VAR_5->atr[1] & 0x0f) + VAR_6 != VAR_5->atr_len) {
  FUNC_0(5, VAR_5, "length error\n");
  return 0;
 }
 if (VAR_7)
  FUNC_2(VAR_0, &VAR_5->flags);

 if (VAR_6) {
  VAR_5->atr_csum = 0;
  if (VAR_7 == 0)
   VAR_5->proto = 1;
  FUNC_2(VAR_1, &VAR_5->flags);
 }

 return 1;
}
