
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {size_t num_bytes; int utf8; } ;
typedef TYPE_1__ i3String ;


 int FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__* FUNC_1 (int,int) ;
 size_t FUNC_2 (int ) ;

i3String *FUNC_3(const char *VAR_0, ssize_t VAR_1) {
    i3String *VAR_2 = FUNC_1(1, sizeof(i3String));


    VAR_2->utf8 = FUNC_0(VAR_0, VAR_1);


    VAR_2->num_bytes = VAR_1 < 0 ? FUNC_2(VAR_2->utf8) : (size_t)VAR_1;

    return VAR_2;
}
