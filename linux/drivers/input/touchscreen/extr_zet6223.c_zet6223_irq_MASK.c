
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct zet6223_ts {int fingernum; int input; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct zet6223_ts *VAR_10 = VAR_9;
 u16 VAR_11;





 u8 VAR_12 = 3 + 4 * VAR_10->fingernum;
 u8 VAR_13[VAR_6];
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_10->client, VAR_13, VAR_12);
 if (VAR_15 != VAR_12) {
  VAR_16 = VAR_15 < 0 ? VAR_15 : -VAR_2;
  FUNC_1(&VAR_10->client->dev,
        "Error reading input data: %d\n", VAR_16);
  return VAR_4;
 }

 if (VAR_13[0] != VAR_7)
  return VAR_4;

 VAR_11 = FUNC_2(VAR_13 + 1);
 for (VAR_14 = 0; VAR_14 < VAR_10->fingernum; VAR_14++) {
  if (!(VAR_11 & FUNC_0(15 - VAR_14)))
   continue;

  FUNC_6(VAR_10->input, VAR_14);
  FUNC_5(VAR_10->input, VAR_5, 1);
  FUNC_4(VAR_10->input, VAR_3, VAR_0,
    ((VAR_13[VAR_14 + 3] >> 4) << 8) + VAR_13[VAR_14 + 4]);
  FUNC_4(VAR_10->input, VAR_3, VAR_1,
    ((VAR_13[VAR_14 + 3] & 0xF) << 8) + VAR_13[VAR_14 + 5]);
 }

 FUNC_7(VAR_10->input);
 FUNC_8(VAR_10->input);

 return VAR_4;
}
