
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t5403_data {int mode; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct t5403_data *VAR_6, bool VAR_7)
{
 int VAR_8 = 3;

 int VAR_9 = FUNC_1(VAR_6->client, VAR_0,
  (VAR_7 ? (VAR_6->mode << VAR_2) : VAR_3) |
  VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 += VAR_7 ? VAR_5[VAR_6->mode] : 2;

 FUNC_2(VAR_8);

 return FUNC_0(VAR_6->client, VAR_1);
}
