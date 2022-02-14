
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct abp_state {scalar_t__ scale; int offset; } ;
struct abp_config {scalar_t__ max; scalar_t__ min; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct abp_config* VAR_2 ;
 struct abp_state* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_1(struct iio_dev *VAR_3, unsigned long VAR_4)
{
 struct abp_state *VAR_5 = FUNC_0(VAR_3);
 struct abp_config *VAR_6 = &VAR_2[VAR_4];

 VAR_5->scale = VAR_6->max - VAR_6->min;
 VAR_5->offset = -VAR_0;

 if (VAR_6->min < 0)
  VAR_5->offset -= VAR_1 >> 1;
}
