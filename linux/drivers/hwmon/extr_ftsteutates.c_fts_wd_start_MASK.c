
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
struct fts_data {scalar_t__ resolution; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct fts_data* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct fts_data *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->client, VAR_0,
         VAR_1->timeout / (u8)VAR_2->resolution);
}
