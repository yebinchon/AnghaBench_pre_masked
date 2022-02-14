
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rfd77402_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct rfd77402_data *VAR_5, u8 VAR_6, u16 VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->client, VAR_1,
     VAR_6 | VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(10000, 20000);

 VAR_8 = FUNC_0(VAR_5->client, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 if ((VAR_8 & VAR_3) != VAR_7)
  return -VAR_0;

 return 0;
}
