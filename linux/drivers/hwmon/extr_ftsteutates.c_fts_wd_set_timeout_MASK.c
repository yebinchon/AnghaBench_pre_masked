
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct fts_data {int dummy; } ;
typedef enum WATCHDOG_RESOLUTION { ____Placeholder_WATCHDOG_RESOLUTION } WATCHDOG_RESOLUTION ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct fts_data*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fts_data* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2, unsigned int VAR_3)
{
 struct fts_data *VAR_4;
 enum WATCHDOG_RESOLUTION VAR_5 = VAR_1;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_2);



 if (VAR_3 > 0xFF) {
  VAR_3 = FUNC_0(VAR_3, 60) * 60;
  VAR_5 = VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->timeout = VAR_3;
 return 0;
}
