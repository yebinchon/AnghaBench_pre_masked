
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeti_ts {TYPE_1__* client; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct eeti_ts*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct eeti_ts *VAR_1)
{
 int VAR_2, VAR_3;
 char VAR_4[6];

 VAR_2 = FUNC_2(VAR_1->client, VAR_4, sizeof(VAR_4));
 if (VAR_2 != sizeof(VAR_4)) {
  VAR_3 = VAR_2 < 0 ? VAR_2 : -VAR_0;
  FUNC_0(&VAR_1->client->dev,
   "failed to read touchscreen data: %d\n",
   VAR_3);
  return VAR_3;
 }


 if (VAR_4[0] & 0x80)
  FUNC_1(VAR_1, VAR_4);

 return 0;
}
