
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 void** VAR_1 ;
 scalar_t__ FUNC_0 (void**,void**,unsigned int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (void**) ;
 void** VAR_2 ;

void
FUNC_4(unsigned VAR_3, unsigned VAR_4)
{
 unsigned char VAR_5, VAR_6;
 unsigned VAR_7 = 0;
 unsigned VAR_8 = 0;
 unsigned VAR_9 = 0;
 unsigned VAR_10 = 0;

 if (FUNC_0(VAR_1 + VAR_3, VAR_2, VAR_4) != 0) {
  FUNC_1("READ BAD DATA: offset = 0x%x, size = 0x%x\n",
      VAR_3, VAR_4);
  FUNC_1("OFFSET\tGOOD\tBAD\tRANGE\n");
  while (VAR_4 > 0) {
   VAR_5 = VAR_1[VAR_3];
   VAR_6 = VAR_2[VAR_7];
   if (VAR_5 != VAR_6) {
    if (VAR_8 == 0) {
     VAR_10 = FUNC_3(&VAR_2[VAR_7]);
     FUNC_1("0x%5x\t0x%04x\t0x%04x", VAR_3,
         FUNC_3(&VAR_1[VAR_3]), VAR_10);
     VAR_9 = VAR_2[VAR_3 & 1 ? VAR_7+1 : VAR_7];
    }
    VAR_8++;
    VAR_0 = VAR_3;
   }
   VAR_3++;
   VAR_7++;
   VAR_4--;
  }
  if (VAR_8) {
   FUNC_1("\t0x%5x\n", VAR_8);
   if (VAR_10)
    FUNC_1("operation# (mod 256) for the bad data may be %u\n", ((unsigned)VAR_9 & 0xff));
   else
    FUNC_1("operation# (mod 256) for the bad data unknown, check HOLE and EXTEND ops\n");
  } else
   FUNC_1("????????????????\n");
  FUNC_2(110);
 }
}
