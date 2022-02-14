
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_get_property_reply_t ;
typedef scalar_t__ time_t ;
struct Startup_Sequence {scalar_t__ delete_at; char* workspace; int id; } ;
typedef int i3Window ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct Startup_Sequence*) ;
 struct Startup_Sequence* FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

char *FUNC_4(i3Window *VAR_0, xcb_get_property_reply_t *VAR_1) {
    struct Startup_Sequence *VAR_2 = FUNC_2(VAR_0, VAR_1, 0);
    if (VAR_2 == ((void*)0))
        return ((void*)0);


    time_t VAR_3 = FUNC_3(((void*)0));
    if (VAR_2->delete_at > 0 && VAR_3 > VAR_2->delete_at) {
        FUNC_0("Deleting expired startup sequence %s\n", VAR_2->id);
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    return VAR_2->workspace;
}
