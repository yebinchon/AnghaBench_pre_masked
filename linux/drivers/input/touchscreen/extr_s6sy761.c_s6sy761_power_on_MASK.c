
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6sy761_data {int client; int regulators; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct s6sy761_data *VAR_10)
{
 u8 VAR_11[VAR_4];
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(FUNC_0(VAR_10->regulators),
        VAR_10->regulators);
 if (VAR_13)
  return VAR_13;

 FUNC_4(140);


 VAR_13 = FUNC_2(VAR_10->client,
         VAR_8,
         VAR_4,
         VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = (VAR_11[0] >> 2) & 0xf;

 if ((VAR_12 != VAR_3 &&
      VAR_12 != VAR_5) ||
     VAR_11[1] != VAR_6) {
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_10->client, VAR_1);
 if (VAR_13 < 0)
  return VAR_13;


 if (VAR_13 != VAR_2)
  return -VAR_0;


 VAR_13 = FUNC_3(VAR_10->client,
     VAR_9,
     VAR_7);
 if (VAR_13)
  return VAR_13;

 return 0;
}
