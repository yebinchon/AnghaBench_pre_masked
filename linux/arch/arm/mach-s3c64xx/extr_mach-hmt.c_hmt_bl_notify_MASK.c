
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, int VAR_1)
{




 if (VAR_1 < 0x800) {

  VAR_1 = (100*256 * VAR_1 + 231245/2) / 231245;
 } else {

  int VAR_2 = (VAR_1*4 + 16*1024 + 58)/116;
  VAR_1 = 25 * ((VAR_2 * VAR_2 * VAR_2 + 0x100000/2) / 0x100000);
 }

 FUNC_1(FUNC_0(4), VAR_1);

 return VAR_1;
}
