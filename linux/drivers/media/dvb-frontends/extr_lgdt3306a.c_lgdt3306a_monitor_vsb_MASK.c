
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_3(struct lgdt3306a_state *VAR_0)
{
 u8 VAR_1;
 int VAR_2;
 u8 VAR_3, VAR_4, VAR_5;
 u16 VAR_6;

 VAR_2 = FUNC_1(VAR_0, 0x21a1, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_3 = VAR_1 & 0x3f;

 VAR_2 = FUNC_1(VAR_0, 0x2185, &VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0x2191, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_5 = (VAR_1 & 0x80) >> 7;

 VAR_2 = FUNC_1(VAR_0, 0x2180, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_6 = (VAR_1 & 0x03) << 8;

 VAR_2 = FUNC_1(VAR_0, 0x2181, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_6 |= VAR_1;

 FUNC_0("snrRef=%d maxPowerMan=0x%x nCombDet=%d fbDlyCir=0x%x\n",
  VAR_3, VAR_4, VAR_5, VAR_6);


 VAR_2 = FUNC_1(VAR_0, 0x1061, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_1 &= 0xf8;
 if ((VAR_3 > 18) && (VAR_4 > 0x68)
     && (VAR_5 == 0x01)
     && ((VAR_6 == 0x03FF) || (VAR_6 < 0x6C))) {

  VAR_1 |= 0x00;
 } else {
  VAR_1 |= 0x04;
 }
 VAR_2 = FUNC_2(VAR_0, 0x1061, VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, 0x0024, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_1 &= 0x0f;
 if (VAR_5 == 0) {
  VAR_1 |= 0x50;
 }
 VAR_2 = FUNC_2(VAR_0, 0x0024, VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, 0x103d, &VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_1 &= 0xcf;
 VAR_1 |= 0x20;
 VAR_2 = FUNC_2(VAR_0, 0x103d, VAR_1);

 return VAR_2;
}
