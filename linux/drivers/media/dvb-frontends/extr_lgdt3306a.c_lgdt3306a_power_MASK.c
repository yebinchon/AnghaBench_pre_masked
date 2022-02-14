
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*) ;
 int FUNC_3 (struct lgdt3306a_state*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3306a_state *VAR_0,
         int VAR_1)
{
 int VAR_2;

 FUNC_0("(%d)\n", VAR_1);

 if (VAR_1 == 0) {

  VAR_2 = FUNC_3(VAR_0, 0x0000, 7, 0);
  if (FUNC_1(VAR_2))
   goto fail;


  VAR_2 = FUNC_3(VAR_0, 0x0000, 0, 0);
  if (FUNC_1(VAR_2))
   goto fail;

 } else {

  VAR_2 = FUNC_3(VAR_0, 0x0000, 7, 1);
  if (FUNC_1(VAR_2))
   goto fail;


  VAR_2 = FUNC_3(VAR_0, 0x0000, 0, 1);
  if (FUNC_1(VAR_2))
   goto fail;
 }




fail:
 return VAR_2;
}
