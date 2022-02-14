
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {scalar_t__ conversion_count; int value_ok; int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct nau7802_state* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (struct nau7802_state*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct iio_dev *VAR_7 = VAR_6;
 struct nau7802_state *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8->client, VAR_4);
 if (VAR_9 < 0)
  return VAR_0;

 if (!(VAR_9 & VAR_3))
  return VAR_1;

 if (FUNC_3(VAR_8) < 0)
  return VAR_0;






 if (VAR_8->conversion_count < VAR_2)
  VAR_8->conversion_count++;
 if (VAR_8->conversion_count >= VAR_2)
  FUNC_0(&VAR_8->value_ok);

 return VAR_0;
}
