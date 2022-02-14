
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tm {int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_2__ {int dev; } ;
struct rpi_firmware {TYPE_1__ cl; } ;
typedef int packet ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct rpi_firmware*,int ,int *,int) ;
 int FUNC_2 (int ,int ,struct tm*) ;

__attribute__((used)) static void
FUNC_3(struct rpi_firmware *VAR_1)
{
 u32 VAR_2;
 int VAR_3 = FUNC_1(VAR_1,
     VAR_0,
     &VAR_2, sizeof(VAR_2));

 if (VAR_3 == 0) {
  struct tm VAR_4;

  FUNC_2(VAR_2, 0, &VAR_4);

  FUNC_0(VAR_1->cl.dev,
    "Attached to firmware from %04ld-%02d-%02d %02d:%02d\n",
    VAR_4.tm_year + 1900, VAR_4.tm_mon + 1, VAR_4.tm_mday,
    VAR_4.tm_hour, VAR_4.tm_min);
 }
}
