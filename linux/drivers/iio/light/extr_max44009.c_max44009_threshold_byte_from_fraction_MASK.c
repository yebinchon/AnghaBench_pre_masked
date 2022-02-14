
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if ((VAR_5 <= 0 && VAR_6 <= 0) ||
      VAR_5 > VAR_2 ||
      (VAR_5 == VAR_2 && VAR_6 != 0))
  return -VAR_0;


 VAR_7 = VAR_5 * VAR_3;
 VAR_7 /= VAR_4;


 VAR_7 += VAR_6 / VAR_1 *
      (VAR_3 / VAR_4);

 for (VAR_8 = 0; VAR_7 > 0xff; VAR_8++)
  VAR_7 >>= 1;

 VAR_7 >>= 4;
 VAR_7 &= 0xf;
 VAR_8 <<= 4;

 return VAR_8 | VAR_7;
}
