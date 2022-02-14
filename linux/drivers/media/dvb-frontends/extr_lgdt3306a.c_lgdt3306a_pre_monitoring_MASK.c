
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3306a_state *VAR_0)
{
 u8 VAR_1 = 0;
 int VAR_2;
 u8 VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_2 = FUNC_1(VAR_0, 0x21bc, &VAR_3);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, 0x21a1, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_4 = VAR_1 & 0x3f;


 VAR_2 = FUNC_1(VAR_0, 0x2199, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_5 = (VAR_1 & 0x40) >> 6;

 VAR_2 = FUNC_1(VAR_0, 0x0090, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_6 = (VAR_1 & 0xf0) >> 4;

 FUNC_0("snrRef=%d mainStrong=%d aiccrejStatus=%d currChDiffACQ=0x%x\n",
  VAR_4, VAR_5, VAR_6, VAR_3);





 if (VAR_5 == 0) {
  VAR_2 = FUNC_1(VAR_0, 0x2135, &VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_1 &= 0x0f;
  VAR_1 |= 0xa0;
  VAR_2 = FUNC_2(VAR_0, 0x2135, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0, 0x2141, &VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_1 &= 0x3f;
  VAR_1 |= 0x80;
  VAR_2 = FUNC_2(VAR_0, 0x2141, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_0, 0x2122, 0x70);
  if (VAR_2)
   return VAR_2;
 } else {
  VAR_2 = FUNC_1(VAR_0, 0x2135, &VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_1 &= 0x0f;
  VAR_1 |= 0x70;
  VAR_2 = FUNC_2(VAR_0, 0x2135, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0, 0x2141, &VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_1 &= 0x3f;
  VAR_1 |= 0x40;
  VAR_2 = FUNC_2(VAR_0, 0x2141, VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_0, 0x2122, 0x40);
  if (VAR_2)
   return VAR_2;
 }
 return 0;
}
