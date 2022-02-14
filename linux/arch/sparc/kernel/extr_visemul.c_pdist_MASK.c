
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
typedef int s16 ;


 struct fpustate* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long* FUNC_3 (struct fpustate*,int ) ;
 unsigned long FUNC_4 (struct fpustate*,int ) ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_1, unsigned int VAR_2)
{
 struct fpustate *VAR_3 = VAR_0;
 unsigned long VAR_4, VAR_5, *VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_4(VAR_3, FUNC_1(VAR_2));
 VAR_5 = FUNC_4(VAR_3, FUNC_2(VAR_2));
 VAR_6 = FUNC_3(VAR_3, FUNC_0(VAR_2));

 VAR_7 = *VAR_6;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  s16 VAR_9, VAR_10;

  VAR_9 = (VAR_4 >> (56 - (VAR_8 * 8))) & 0xff;
  VAR_10 = (VAR_5 >> (56 - (VAR_8 * 8))) & 0xff;


  VAR_9 -= VAR_10;
  if (VAR_9 < 0)
   VAR_9 = ~VAR_9 + 1;

  VAR_7 += VAR_9;
 }

 *VAR_6 = VAR_7;
}
