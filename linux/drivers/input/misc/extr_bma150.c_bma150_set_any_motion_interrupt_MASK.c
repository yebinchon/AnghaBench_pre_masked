
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bma150_data {int client; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bma150_data *VAR_10,
      u8 VAR_11, u8 VAR_12, u8 VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_0(VAR_10->client, VAR_12,
    VAR_4,
    VAR_3,
    VAR_5);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_10->client,
    VAR_9, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_10->client, !!VAR_11,
    VAR_1, VAR_0,
    VAR_2);
 if (VAR_14)
  return VAR_14;

 return FUNC_0(VAR_10->client, !!VAR_11,
    VAR_7,
    VAR_6,
    VAR_8);
}
