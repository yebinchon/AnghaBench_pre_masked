
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
 u16 *VAR_1)
{







 u16 VAR_2;
 u32 VAR_3;
 int VAR_4 = FUNC_0(VAR_0, &VAR_2);

 *VAR_1 = 0;

 if (0 == VAR_4) {





  VAR_3 = (VAR_2 * ((1 << 24) / 10));



  if (VAR_3 >= 8960 * 0x10000)
   *VAR_1 = 0xffff;
  else
   *VAR_1 = VAR_3 / 8960;
 }

 return VAR_4;
}
