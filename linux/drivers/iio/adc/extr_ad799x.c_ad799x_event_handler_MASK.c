
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad799x_state {int client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iio_dev*) ;
 struct ad799x_state* FUNC_5 (void*) ;
 int FUNC_6 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct iio_dev *VAR_9 = VAR_8;
 struct ad799x_state *VAR_10 = FUNC_5(VAR_8);
 int VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_10->client, VAR_1);
 if (VAR_12 <= 0)
  goto done;

 if (FUNC_3(VAR_10->client, VAR_1,
  VAR_0) < 0)
  goto done;

 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  if (VAR_12 & FUNC_0(VAR_11))
   FUNC_6(VAR_9,
           VAR_11 & 0x1 ?
           FUNC_1(VAR_5,
           (VAR_11 >> 1),
           VAR_4,
           VAR_3) :
           FUNC_1(VAR_5,
           (VAR_11 >> 1),
           VAR_4,
           VAR_2),
           FUNC_4(VAR_9));
 }

done:
 return VAR_6;
}
