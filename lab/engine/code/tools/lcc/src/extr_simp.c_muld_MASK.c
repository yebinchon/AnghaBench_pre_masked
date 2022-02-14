
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(double VAR_0, double VAR_1, double VAR_2, double VAR_3, int VAR_4) {
 int VAR_5 = (VAR_0 >= -1 && VAR_0 <= 1) || (VAR_1 >= -1 && VAR_1 <= 1)
 || (VAR_0 < 0 && VAR_1 < 0 && -VAR_0 <= VAR_3/-VAR_1)
 || (VAR_0 < 0 && VAR_1 > 0 && VAR_0 >= VAR_2/VAR_1)
 || (VAR_0 > 0 && VAR_1 < 0 && VAR_1 >= VAR_2/VAR_0)
 || (VAR_0 > 0 && VAR_1 > 0 && VAR_0 <= VAR_3/VAR_1);
 if (!VAR_5 && VAR_4) {
  FUNC_0("overflow in constant expression\n");
  VAR_5 = 1;
 }
 return VAR_5;


}
