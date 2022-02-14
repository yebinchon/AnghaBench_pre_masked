
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; scalar_t__ mo_det_use_count; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int** VAR_4 ;
 int FUNC_1 (struct sca3000_state*,int ) ;
 int FUNC_2 (struct sca3000_state*,int ,int) ;
 int FUNC_3 (struct sca3000_state*,int ,int) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5, int VAR_6,
        int VAR_7)
{
 struct sca3000_state *VAR_8 = FUNC_0(VAR_5);
 int VAR_9, VAR_10;





 VAR_9 = FUNC_1(VAR_8, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 = VAR_9;

 if (VAR_7 && !(VAR_10 & VAR_4[VAR_6][2])) {
  VAR_9 = FUNC_3(VAR_8,
          VAR_0,
          VAR_10 |
          VAR_4[VAR_6][2]);
  if (VAR_9)
   return VAR_9;
  VAR_8->mo_det_use_count++;
 } else if (!VAR_7 && (VAR_10 & VAR_4[VAR_6][2])) {
  VAR_9 = FUNC_3(VAR_8,
          VAR_0,
          VAR_10 &
          ~(VAR_4[VAR_6][2]));
  if (VAR_9)
   return VAR_9;
  VAR_8->mo_det_use_count--;
 }


 VAR_9 = FUNC_2(VAR_8, VAR_1, 1);
 if (VAR_9)
  return VAR_9;

 if ((VAR_8->mo_det_use_count) &&
     ((VAR_8->rx[0] & VAR_3)
      != VAR_2))
  return FUNC_4(VAR_8, VAR_1,
   (VAR_8->rx[0] & ~VAR_3)
   | VAR_2);

 else if (!(VAR_8->mo_det_use_count) &&
   ((VAR_8->rx[0] & VAR_3)
    == VAR_2))
  return FUNC_4(VAR_8, VAR_1,
   VAR_8->rx[0] & VAR_3);
 else
  return 0;
}
