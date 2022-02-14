
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;
typedef long s32 ;


 long VAR_0 ;
 int FUNC_0 (struct stv0297_state*,int,long) ;
 int FUNC_1 (struct stv0297_state*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct stv0297_state *VAR_1, long VAR_2)
{
 s32 VAR_3;

 if (VAR_2 > 10000)
  VAR_2 -= VAR_0;

 VAR_3 = (VAR_0 * 1000) / (1 << 16);
 VAR_3 = (VAR_2 * 1000) / VAR_3;
 if (VAR_3 > 0xffff)
  VAR_3 = 0xffff;

 FUNC_1(VAR_1, 0x25, 0x80, 0x80);
 FUNC_0(VAR_1, 0x21, VAR_3 >> 8);
 FUNC_0(VAR_1, 0x20, VAR_3);
}
