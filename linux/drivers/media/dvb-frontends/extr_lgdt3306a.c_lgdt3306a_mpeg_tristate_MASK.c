
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (struct lgdt3306a_state*,int,int,int) ;
 int FUNC_4 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_5(struct lgdt3306a_state *VAR_0,
         int VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 FUNC_0("(%d)\n", VAR_1);

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_0, 0x0070, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;




  VAR_2 &= ~0xa8;
  VAR_3 = FUNC_4(VAR_0, 0x0070, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;


  VAR_3 = FUNC_3(VAR_0, 0x0003, 6, 1);
  if (FUNC_1(VAR_3))
   goto fail;

 } else {

  VAR_3 = FUNC_3(VAR_0, 0x0003, 6, 0);
  if (FUNC_1(VAR_3))
   goto fail;

  VAR_3 = FUNC_2(VAR_0, 0x0070, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;

  VAR_2 |= 0xa8;
  VAR_3 = FUNC_4(VAR_0, 0x0070, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
 }

fail:
 return VAR_3;
}
