
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xs_watch_cb_t ;
struct xs_watch {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,struct xs_watch*,int *,uintptr_t) ;

int
FUNC_6(device_t VAR_2, const char *VAR_3,
    const char *VAR_4, struct xs_watch *VAR_5,
    xs_watch_cb_t *VAR_6, uintptr_t VAR_7)
{
 int VAR_8;
 char *VAR_9 = FUNC_1(FUNC_4(VAR_3) + 1 + FUNC_4(VAR_4) + 1,
    VAR_1, VAR_0);

 FUNC_3(VAR_9, VAR_3);
 FUNC_2(VAR_9, "/");
 FUNC_2(VAR_9, VAR_4);

 VAR_8 = FUNC_5(VAR_2, VAR_9, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_9,VAR_1);
 }

 return (VAR_8);
}
