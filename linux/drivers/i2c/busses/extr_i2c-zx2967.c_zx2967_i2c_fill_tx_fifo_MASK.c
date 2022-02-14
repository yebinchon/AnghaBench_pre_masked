
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zx2967_i2c {size_t residue; int * cur_trans; } ;


 int FUNC_0 (struct zx2967_i2c*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct zx2967_i2c*,int *,int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct zx2967_i2c *VAR_3)
{
 size_t VAR_4 = VAR_3->residue;
 u8 *VAR_5 = VAR_3->cur_trans;

 if (VAR_4 == 0) {
  FUNC_2(FUNC_0(VAR_3), "residue is %d\n", (int)VAR_4);
  return -VAR_0;
 }

 if (VAR_4 <= VAR_1) {
  FUNC_3(VAR_3, VAR_5, VAR_2, VAR_4);


  VAR_3->residue = 0;
  VAR_3->cur_trans = ((void*)0);
 } else {
  FUNC_3(VAR_3, VAR_5, VAR_2, VAR_1);
  VAR_3->residue -= VAR_1;
  VAR_3->cur_trans += VAR_1;
 }

 FUNC_1();

 return 0;
}
