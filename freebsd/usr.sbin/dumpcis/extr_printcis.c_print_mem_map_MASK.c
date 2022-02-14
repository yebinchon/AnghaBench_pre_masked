
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;




 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static u_char *
FUNC_8(u_char VAR_1, u_char *VAR_2, u_char *VAR_3)
{
 int VAR_4, VAR_5;
 u_char VAR_6;

 switch (FUNC_0(VAR_1)) {

 case 129:
  break;
 case 130:
  if (VAR_3 - VAR_2 < 2)
   goto err;
  FUNC_5("\tMemory space length = 0x%x\n", FUNC_7(VAR_2));
  VAR_2 += 2;
  break;
 case 131:
  if (VAR_3 - VAR_2 < 4)
   goto err;
  FUNC_5("\tMemory space address = 0x%x, length = 0x%x\n",
         FUNC_7(VAR_2 + 2), FUNC_7(VAR_2));
  VAR_2 += 4;
  break;
 case 128:
  if (VAR_3 <= VAR_2)
   goto err;
  VAR_6 = *VAR_2++;

  VAR_5 = FUNC_2(VAR_6) + FUNC_1(VAR_6);
  if (VAR_6 & VAR_0)
   VAR_5 += FUNC_1(VAR_6);

  for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_6); VAR_4++) {
   if (VAR_3 - VAR_2 < VAR_5)
    goto err;
   FUNC_5("\tMemory descriptor %d\n\t\t", VAR_4 + 1);

   VAR_2 += FUNC_4(FUNC_2(VAR_6) | 0x10,
           " blk length = 0x%x00", VAR_2, 0);

   VAR_2 += FUNC_4(FUNC_1(VAR_6) | 0x10,
           " card addr = 0x%x00", VAR_2, 0);
   if (VAR_6 & VAR_0)
    VAR_2 += FUNC_4(FUNC_1(VAR_6) | 0x10,
            " host addr = 0x%x00", VAR_2, 0);
   FUNC_6('\n');
  }
  break;
 }
 return VAR_2;

 err:
 FUNC_5("\tWrong length for memory mapping sub-tuple\n");
 return VAR_2;
}
