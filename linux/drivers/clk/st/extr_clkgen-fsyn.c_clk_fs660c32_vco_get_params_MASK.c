
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_fs {unsigned long ndiv; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1,
    unsigned long VAR_2, struct stm_fs *VAR_3)
{




 unsigned long VAR_4 = 1, VAR_5;


 if (VAR_2 < 384000000 || VAR_2 > 660000000)
  return -VAR_0;

 if (VAR_1 > 40000000)


  return -VAR_0;

 VAR_1 /= 1000;
 VAR_2 /= 1000;

 VAR_5 = VAR_2 * VAR_4 / VAR_1;
 if (VAR_5 < 16)
  VAR_5 = 16;
 VAR_3->ndiv = VAR_5 - 16;

 return 0;
}
