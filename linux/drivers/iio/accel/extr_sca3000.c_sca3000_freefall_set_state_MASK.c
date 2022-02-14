
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct sca3000_state*,int ,int) ;
 int FUNC_2 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2, int VAR_3)
{
 struct sca3000_state *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4, VAR_0, 1);
 if (VAR_5)
  return VAR_5;


 if (VAR_3 && !(VAR_4->rx[0] & VAR_1))
  return FUNC_2(VAR_4, VAR_0,
      VAR_4->rx[0] | VAR_1);

 else if (!VAR_3 && (VAR_4->rx[0] & VAR_1))
  return FUNC_2(VAR_4, VAR_0,
      VAR_4->rx[0] & ~VAR_1);
 else
  return 0;
}
