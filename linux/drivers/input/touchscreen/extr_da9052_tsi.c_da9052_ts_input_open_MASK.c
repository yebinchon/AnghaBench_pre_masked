
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct da9052_tsi {int stopped; int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct da9052_tsi* FUNC_2 (struct input_dev*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2)
{
 struct da9052_tsi *VAR_3 = FUNC_2(VAR_2);

 VAR_3->stopped = 0;
 FUNC_3();


 FUNC_0(VAR_3->da9052, VAR_0);


 return FUNC_1(VAR_3->da9052, VAR_1,
     1 << 1, 1 << 1);
}
