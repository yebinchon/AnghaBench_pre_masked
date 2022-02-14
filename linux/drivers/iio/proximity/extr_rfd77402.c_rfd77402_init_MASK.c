
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rfd77402_data {int client; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_3 (struct rfd77402_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rfd77402_data *VAR_15)
{
 int VAR_16, VAR_17;

 VAR_16 = FUNC_3(VAR_15, VAR_2,
     VAR_13);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_1(VAR_15->client, VAR_8,
     VAR_9);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_2(VAR_15->client, VAR_6,
     VAR_3 |
     VAR_4 |
     VAR_5 |
     VAR_7);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_2(VAR_15->client, VAR_10, 0x0500);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_3(VAR_15, VAR_0,
     VAR_11);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_2(VAR_15->client, VAR_10, 0x0600);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_3(VAR_15, VAR_1,
     VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14); VAR_17++) {
  VAR_16 = FUNC_2(VAR_15->client,
      VAR_14[VAR_17].reg,
      VAR_14[VAR_17].val);
  if (VAR_16 < 0)
   return VAR_16;
 }

 VAR_16 = FUNC_3(VAR_15, VAR_2,
     VAR_13);

 return VAR_16;
}
