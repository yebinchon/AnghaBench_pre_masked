
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sgp_reading {int start; } ;
typedef int u8 ;
struct sgp_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int *,size_t,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(const struct sgp_data *VAR_5,
        union sgp_reading *VAR_6, size_t VAR_7)
{
 size_t VAR_8 = VAR_7 * (VAR_3 + VAR_2);
 int VAR_9;
 u8 VAR_10;
 u8 *VAR_11 = &VAR_6->start;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_3 + VAR_2) {
  VAR_10 = FUNC_0(VAR_4, &VAR_11[VAR_9], VAR_3,
      VAR_1);
  if (VAR_10 != VAR_11[VAR_9 + VAR_3]) {
   FUNC_1(&VAR_5->client->dev, "CRC error\n");
   return -VAR_0;
  }
 }

 return 0;
}
