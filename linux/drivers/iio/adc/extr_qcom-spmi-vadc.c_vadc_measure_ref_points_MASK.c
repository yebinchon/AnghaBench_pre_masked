
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vadc_priv {int dev; TYPE_1__* graph; } ;
struct vadc_channel_prop {int dummy; } ;
struct TYPE_2__ {scalar_t__ gnd; scalar_t__ dy; int dx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vadc_priv*,struct vadc_channel_prop*,scalar_t__*) ;
 struct vadc_channel_prop* FUNC_2 (struct vadc_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct vadc_priv *VAR_10)
{
 struct vadc_channel_prop *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;

 VAR_10->graph[VAR_3].dx = VAR_5;
 VAR_10->graph[VAR_2].dx = VAR_1;

 VAR_11 = FUNC_2(VAR_10, VAR_6);
 VAR_14 = FUNC_1(VAR_10, VAR_11, &VAR_12);
 if (VAR_14)
  goto err;


 VAR_11 = FUNC_2(VAR_10, VAR_8);
 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_10, VAR_7);

 VAR_14 = FUNC_1(VAR_10, VAR_11, &VAR_13);
 if (VAR_14)
  goto err;

 if (VAR_12 == VAR_13) {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_10->graph[VAR_2].dy = VAR_12 - VAR_13;
 VAR_10->graph[VAR_2].gnd = VAR_13;


 VAR_11 = FUNC_2(VAR_10, VAR_9);
 VAR_14 = FUNC_1(VAR_10, VAR_11, &VAR_12);
 if (VAR_14)
  goto err;

 VAR_11 = FUNC_2(VAR_10, VAR_4);
 VAR_14 = FUNC_1(VAR_10, VAR_11, &VAR_13);
 if (VAR_14)
  goto err;

 if (VAR_12 == VAR_13) {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_10->graph[VAR_3].dy = VAR_12 - VAR_13;
 VAR_10->graph[VAR_3].gnd = VAR_13;
err:
 if (VAR_14)
  FUNC_0(VAR_10->dev, "measure reference points failed\n");

 return VAR_14;
}
