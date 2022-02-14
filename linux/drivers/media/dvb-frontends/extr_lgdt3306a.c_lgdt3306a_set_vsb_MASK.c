
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (struct lgdt3306a_state*) ;
 int FUNC_4 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_5(struct lgdt3306a_state *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 FUNC_0("\n");


 VAR_2 = FUNC_2(VAR_0, 0x0002, &VAR_1);
 VAR_1 &= 0xf7;
 VAR_1 |= 0x04;
 VAR_2 = FUNC_4(VAR_0, 0x0002, VAR_1);
 if (FUNC_1(VAR_2))
  goto fail;


 VAR_2 = FUNC_4(VAR_0, 0x0008, 0x80);
 if (FUNC_1(VAR_2))
  goto fail;


 VAR_2 = FUNC_2(VAR_0, 0x0009, &VAR_1);
 VAR_1 &= 0xe3;
 VAR_1 |= 0x0c;
 VAR_2 = FUNC_4(VAR_0, 0x0009, VAR_1);
 if (FUNC_1(VAR_2))
  goto fail;


 VAR_2 = FUNC_2(VAR_0, 0x0009, &VAR_1);
 VAR_1 &= 0xfc;
 VAR_2 = FUNC_4(VAR_0, 0x0009, VAR_1);
 if (FUNC_1(VAR_2))
  goto fail;


 VAR_2 = FUNC_2(VAR_0, 0x000d, &VAR_1);
 VAR_1 &= 0xbf;
 VAR_2 = FUNC_4(VAR_0, 0x000d, VAR_1);
 if (FUNC_1(VAR_2))
  goto fail;
 VAR_2 = FUNC_4(VAR_0, 0x0024, 0x5A);
 if (FUNC_1(VAR_2))
  goto fail;


 VAR_2 = FUNC_4(VAR_0, 0x002e, 0x5A);
 VAR_2 = FUNC_4(VAR_0, 0x002f, 0x00);
 VAR_2 = FUNC_4(VAR_0, 0x0030, 0x00);


 VAR_2 = FUNC_4(VAR_0, 0x002b, 0x36);
 VAR_2 = FUNC_4(VAR_0, 0x002c, 0x00);
 VAR_2 = FUNC_4(VAR_0, 0x002d, 0x00);


 VAR_2 = FUNC_4(VAR_0, 0x0028, 0x2A);
 VAR_2 = FUNC_4(VAR_0, 0x0029, 0x00);
 VAR_2 = FUNC_4(VAR_0, 0x002a, 0x00);


 VAR_2 = FUNC_4(VAR_0, 0x0025, 0x06);
 VAR_2 = FUNC_4(VAR_0, 0x0026, 0x00);
 VAR_2 = FUNC_4(VAR_0, 0x0027, 0x00);


 VAR_2 = FUNC_2(VAR_0, 0x001e, &VAR_1);
 VAR_1 &= 0x0f;
 VAR_1 |= 0xa0;
 VAR_2 = FUNC_4(VAR_0, 0x001e, VAR_1);

 VAR_2 = FUNC_4(VAR_0, 0x0022, 0x08);

 VAR_2 = FUNC_4(VAR_0, 0x0023, 0xFF);

 VAR_2 = FUNC_2(VAR_0, 0x211f, &VAR_1);
 VAR_1 &= 0xef;
 VAR_2 = FUNC_4(VAR_0, 0x211f, VAR_1);

 VAR_2 = FUNC_4(VAR_0, 0x2173, 0x01);

 VAR_2 = FUNC_2(VAR_0, 0x1061, &VAR_1);
 VAR_1 &= 0xf8;
 VAR_1 |= 0x04;
 VAR_2 = FUNC_4(VAR_0, 0x1061, VAR_1);

 VAR_2 = FUNC_2(VAR_0, 0x103d, &VAR_1);
 VAR_1 &= 0xcf;
 VAR_2 = FUNC_4(VAR_0, 0x103d, VAR_1);

 VAR_2 = FUNC_4(VAR_0, 0x2122, 0x40);

 VAR_2 = FUNC_2(VAR_0, 0x2141, &VAR_1);
 VAR_1 &= 0x3f;
 VAR_2 = FUNC_4(VAR_0, 0x2141, VAR_1);

 VAR_2 = FUNC_2(VAR_0, 0x2135, &VAR_1);
 VAR_1 &= 0x0f;
 VAR_1 |= 0x70;
 VAR_2 = FUNC_4(VAR_0, 0x2135, VAR_1);

 VAR_2 = FUNC_2(VAR_0, 0x0003, &VAR_1);
 VAR_1 &= 0xf7;
 VAR_2 = FUNC_4(VAR_0, 0x0003, VAR_1);

 VAR_2 = FUNC_2(VAR_0, 0x001c, &VAR_1);
 VAR_1 &= 0x7f;
 VAR_2 = FUNC_4(VAR_0, 0x001c, VAR_1);


 VAR_2 = FUNC_2(VAR_0, 0x2179, &VAR_1);
 VAR_1 &= 0xf8;
 VAR_2 = FUNC_4(VAR_0, 0x2179, VAR_1);

 VAR_2 = FUNC_2(VAR_0, 0x217a, &VAR_1);
 VAR_1 &= 0xf8;
 VAR_2 = FUNC_4(VAR_0, 0x217a, VAR_1);


 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_1(VAR_2))
  goto fail;

 FUNC_0("complete\n");
fail:
 return VAR_2;
}
