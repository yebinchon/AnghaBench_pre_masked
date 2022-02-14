
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zs ;
struct TYPE_8__ {unsigned int avail_out; unsigned int avail_in; void* next_in; void* next_out; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
struct TYPE_9__ {scalar_t__ len; scalar_t__ raw; } ;
typedef TYPE_2__ h2o_sendvec_t ;
typedef int decbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(h2o_sendvec_t *VAR_5, size_t VAR_6, const char *VAR_7, size_t VAR_8)
{
    z_stream VAR_9;
    char VAR_10[VAR_8 + 1];

    FUNC_4(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.zalloc = VAR_3;
    VAR_9.zfree = VAR_4;
    VAR_9.next_out = (void *)VAR_10;
    VAR_9.avail_out = (unsigned)sizeof(VAR_10);

    FUNC_2(&VAR_9, VAR_0);

    int VAR_11 = -1;
    size_t VAR_12;
    for (VAR_12 = 0; VAR_12 != VAR_6; ++VAR_12) {
        VAR_9.next_in = (void *)VAR_5[VAR_12].raw;
        VAR_9.avail_in = (unsigned)VAR_5[VAR_12].len;
        VAR_11 = FUNC_0(&VAR_9, VAR_1);
        if (VAR_9.avail_out == 0) {
            FUNC_5(0);
            return;
        }
        if (VAR_9.avail_in != 0) {
            FUNC_5(0);
            return;
        }
    }

    FUNC_5(VAR_11 == VAR_2);
    FUNC_1(&VAR_9);

    FUNC_5(VAR_9.avail_out == sizeof(VAR_10) - VAR_8);
    FUNC_5(FUNC_3(VAR_10, VAR_7, VAR_8) == 0);
}
