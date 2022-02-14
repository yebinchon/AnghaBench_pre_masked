
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_2__ {int val; } ;
struct fd {TYPE_1__ eventfd; } ;
typedef int int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct fd*,int) ;

int_t FUNC_3(uint_t VAR_5, int_t VAR_6) {
    FUNC_0("eventfd(%d, %#x)", VAR_5, VAR_6);
    if (VAR_6 & ~(VAR_0|VAR_1))
        return VAR_2;

    struct fd *VAR_7 = FUNC_1(&VAR_4);
    if (VAR_7 == ((void*)0))
        return VAR_3;
    VAR_7->eventfd.val = VAR_5;
    return FUNC_2(VAR_7, VAR_6);
}
