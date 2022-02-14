
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ylength ;
struct TYPE_2__ {int num_events; int * events; } ;
typedef TYPE_1__ ipc_client ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,unsigned char const*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const unsigned char *VAR_1,
                            ylength VAR_2) {
    ipc_client *VAR_3 = VAR_0;

    FUNC_0("should add subscription to extra %p, sub %.*s\n", VAR_3, (int)VAR_2, VAR_1);
    int VAR_4 = VAR_3->num_events;

    VAR_3->num_events++;
    VAR_3->events = FUNC_3(VAR_3->events, VAR_3->num_events * sizeof(char *));


    VAR_3->events[VAR_4] = FUNC_2(VAR_2 + 1, 1);
    FUNC_1(VAR_3->events[VAR_4], VAR_1, VAR_2);

    FUNC_0("client is now subscribed to:\n");
    for (int VAR_5 = 0; VAR_5 < VAR_3->num_events; VAR_5++) {
        FUNC_0("event %s\n", VAR_3->events[VAR_5]);
    }
    FUNC_0("(done)\n");

    return 1;
}
