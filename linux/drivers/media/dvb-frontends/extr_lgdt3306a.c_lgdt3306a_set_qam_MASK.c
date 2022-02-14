
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (struct lgdt3306a_state*) ;
 int FUNC_4 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_5(struct lgdt3306a_state *VAR_3, int VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 FUNC_0("modulation=%d\n", VAR_4);


 VAR_6 = FUNC_4(VAR_3, 0x0008, 0x08);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x0002, &VAR_5);
 VAR_5 &= 0xfb;
 VAR_5 |= 0x08;
 VAR_6 = FUNC_4(VAR_3, 0x0002, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x0009, &VAR_5);
 VAR_5 &= 0xe3;
 VAR_6 = FUNC_4(VAR_3, 0x0009, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x0009, &VAR_5);
 VAR_5 &= 0xfc;

 if(VAR_2 && (VAR_4 != VAR_1)){
  VAR_5 |= 0x01;
 } else {
  VAR_5 |= 0x02;
 }
 VAR_6 = FUNC_4(VAR_3, 0x0009, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x101a, &VAR_5);
 VAR_5 &= 0xf8;
 if (VAR_4 == VAR_0)
  VAR_5 |= 0x02;
 else
  VAR_5 |= 0x04;

 VAR_6 = FUNC_4(VAR_3, 0x101a, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x000d, &VAR_5);
 VAR_5 &= 0xbf;
 VAR_5 |= 0x40;
 VAR_6 = FUNC_4(VAR_3, 0x000d, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x0024, &VAR_5);
 VAR_5 &= 0x00;
 VAR_6 = FUNC_4(VAR_3, 0x0024, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x000a, &VAR_5);
 VAR_5 &= 0xfd;
 VAR_5 |= 0x02;
 VAR_6 = FUNC_4(VAR_3, 0x000a, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x2849, &VAR_5);
 VAR_5 &= 0xdf;
 VAR_6 = FUNC_4(VAR_3, 0x2849, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_2(VAR_3, 0x302b, &VAR_5);
 VAR_5 &= 0x7f;
 VAR_6 = FUNC_4(VAR_3, 0x302b, VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;


 VAR_6 = FUNC_3(VAR_3);
 if (FUNC_1(VAR_6))
  goto fail;

 FUNC_0("complete\n");
fail:
 return VAR_6;
}
