
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_long ;
struct trapframe {int dummy; } ;
typedef int register_t ;


 long FUNC_0 (int ) ;
 int FUNC_1 (int ,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 long FUNC_4 () ;
 int FUNC_5 (struct trapframe*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (long) ;

__attribute__((used)) static void
FUNC_7(struct trapframe *VAR_7)
{
 u_long VAR_8, VAR_9, VAR_10, VAR_11;
 long VAR_12;
 register_t VAR_13;
 int VAR_14;

 VAR_11 = FUNC_0(VAR_5);
 if (VAR_11 != 0) {
  VAR_13 = FUNC_2();
  VAR_8 = FUNC_0(VAR_4);
  VAR_10 = FUNC_4();
  FUNC_6(VAR_10 + VAR_11 - VAR_8);
  FUNC_3(VAR_13);
  VAR_9 = FUNC_0(VAR_6);
  VAR_12 = VAR_10 - VAR_9;
  VAR_14 = 0;
  while (VAR_12 >= VAR_11) {
   FUNC_5(VAR_7);
   VAR_12 -= VAR_11;
   VAR_9 += VAR_11;
   if (VAR_8 != 0)
    VAR_3++;
   VAR_14++;
  }
  if (VAR_14 > 0) {
   VAR_2 += VAR_14 - 1;
   if (VAR_12 > (VAR_11 >> 3)) {
    if (VAR_8 == 0)
     VAR_0++;
    VAR_8 = VAR_11 >> 4;
   } else
    VAR_8 = 0;
  } else {
   VAR_8 = 0;
   VAR_1++;
  }
  FUNC_1(VAR_6, VAR_9);
  FUNC_1(VAR_4, VAR_8);
 } else
  FUNC_5(VAR_7);
}
