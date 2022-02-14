
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xs_watch_cb_t ;
struct xs_watch {char* node; uintptr_t callback_data; int * callback; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (struct xs_watch*) ;

int
FUNC_2(device_t VAR_0, char *VAR_1, struct xs_watch *VAR_2,
    xs_watch_cb_t *VAR_3, uintptr_t VAR_4)
{
 int VAR_5;

 VAR_2->node = VAR_1;
 VAR_2->callback = VAR_3;
 VAR_2->callback_data = VAR_4;

 VAR_5 = FUNC_1(VAR_2);

 if (VAR_5) {
  VAR_2->node = ((void*)0);
  VAR_2->callback = ((void*)0);
  FUNC_0(VAR_0, VAR_5, "adding watch on %s", VAR_1);
 }

 return (VAR_5);
}
