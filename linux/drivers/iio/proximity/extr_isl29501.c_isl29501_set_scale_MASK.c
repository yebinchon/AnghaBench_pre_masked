
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int FUNC_1 (struct isl29501_private*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_4,
         const struct iio_chan_spec *VAR_5,
         int VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  if (VAR_3[VAR_8][0] == VAR_6 &&
      VAR_3[VAR_8][1] == VAR_7) {
   return FUNC_1(VAR_4,
             VAR_2,
             VAR_8 + 1);
  }
 }

 return -VAR_0;
}
