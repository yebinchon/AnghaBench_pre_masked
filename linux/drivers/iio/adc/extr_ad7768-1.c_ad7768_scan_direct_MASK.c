
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7768_state {int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad7768_state*,int ) ;
 int FUNC_1 (struct ad7768_state*,int ,int) ;
 struct ad7768_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4)
{
 struct ad7768_state *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7;

 FUNC_4(&VAR_5->completion);

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(&VAR_5->completion,
       FUNC_3(1000));
 if (!VAR_7)
  return -VAR_3;

 VAR_6 = FUNC_1(VAR_5, VAR_2, 3);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_7 = FUNC_0(VAR_5, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_6;
}
