
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_eq {int dummy; } ;
struct ocrdma_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ocrdma_dev*,struct ocrdma_eq*,int) ;

__attribute__((used)) static int FUNC_2(struct ocrdma_dev *VAR_0, struct ocrdma_eq *VAR_1,
        int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 if (VAR_2 > 8) {
  while (VAR_2) {
   VAR_3 = FUNC_0(VAR_2, 8);
   FUNC_1(VAR_0, &VAR_1[VAR_4], VAR_3);
   VAR_4 += VAR_3;
   VAR_2 -= VAR_3;
  }
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return 0;
}
