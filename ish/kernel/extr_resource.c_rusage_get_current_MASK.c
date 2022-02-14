
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int thread_info_t ;
struct TYPE_13__ {int microseconds; int seconds; } ;
struct TYPE_11__ {int microseconds; int seconds; } ;
struct TYPE_14__ {TYPE_6__ system_time; TYPE_4__ user_time; } ;
typedef TYPE_7__ thread_basic_info_data_t ;
struct TYPE_12__ {int usec; int sec; } ;
struct TYPE_10__ {int usec; int sec; } ;
struct rusage_ {TYPE_5__ stime; TYPE_3__ utime; } ;
struct TYPE_9__ {int tv_usec; int tv_sec; } ;
struct TYPE_8__ {int tv_usec; int tv_sec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
typedef int mach_msg_type_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct rusage*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;

struct rusage_ FUNC_4() {

    struct rusage_ VAR_3;

    struct rusage VAR_4;
    int VAR_5 = FUNC_1(VAR_0, &VAR_4);
    FUNC_0(VAR_5 == 0);
    VAR_3.utime.sec = VAR_4.ru_utime.tv_sec;
    VAR_3.utime.usec = VAR_4.ru_utime.tv_usec;
    VAR_3.stime.sec = VAR_4.ru_stime.tv_sec;
    VAR_3.stime.usec = VAR_4.ru_stime.tv_usec;
    return VAR_3;
}
