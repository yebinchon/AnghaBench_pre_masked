
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct adf4350_state {unsigned int* regs; unsigned int* regs_hw; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct adf4350_state*) ;
 struct adf4350_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
         unsigned VAR_3, unsigned VAR_4,
         unsigned *VAR_5)
{
 struct adf4350_state *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 if (VAR_3 > VAR_0)
  return -VAR_1;

 FUNC_3(&VAR_2->mlock);
 if (VAR_5 == ((void*)0)) {
  VAR_6->regs[VAR_3] = VAR_4 & ~(FUNC_0(0) | FUNC_0(1) | FUNC_0(2));
  VAR_7 = FUNC_1(VAR_6);
 } else {
  *VAR_5 = VAR_6->regs_hw[VAR_3];
  VAR_7 = 0;
 }
 FUNC_4(&VAR_2->mlock);

 return VAR_7;
}
