
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;


 int FUNC_0 (struct stv0297_state*,int,unsigned char) ;
 int FUNC_1 (struct stv0297_state*,int,int,long) ;

__attribute__((used)) static void FUNC_2(struct stv0297_state *VAR_0, long VAR_1)
{
 long VAR_2;


 VAR_2 = VAR_1 * 26844L;
 if (VAR_2 < 0)
  VAR_2 += 0x10000000;
 VAR_2 &= 0x0FFFFFFF;

 FUNC_0(VAR_0, 0x66, (unsigned char) (VAR_2 & 0xFF));
 FUNC_0(VAR_0, 0x67, (unsigned char) (VAR_2 >> 8));
 FUNC_0(VAR_0, 0x68, (unsigned char) (VAR_2 >> 16));
 FUNC_1(VAR_0, 0x69, 0x0F, (VAR_2 >> 24) & 0x0f);
}
