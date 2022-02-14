
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct st_stream_data_t {int * outfp; } ;
struct TYPE_11__ {int conn; int recvstate; struct st_stream_data_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;
struct TYPE_12__ {scalar_t__ len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;
struct TYPE_15__ {TYPE_3__* now; } ;
struct TYPE_14__ {int * path; } ;
struct TYPE_13__ {scalar_t__ (* cb ) (TYPE_3__*) ;} ;
typedef int FILE ;


 TYPE_9__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_2__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,size_t,void const*,size_t) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(quicly_stream_t *VAR_6, size_t VAR_7, const void *VAR_8, size_t VAR_9)
{
    struct st_stream_data_t *VAR_10 = VAR_6->data;
    ptls_iovec_t VAR_11;
    int VAR_12;

    if ((VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9)) != 0)
        return VAR_12;

    if ((VAR_11 = FUNC_6(VAR_6)).len != 0) {
        FILE *VAR_13 = (VAR_10->outfp == ((void*)0)) ? VAR_5 : VAR_10->outfp;
        FUNC_3(VAR_11.base, 1, VAR_11.len, VAR_13);
        FUNC_2(VAR_13);
        FUNC_8(VAR_6, VAR_11.len);
    }

    if (FUNC_5(&VAR_6->recvstate)) {
        if (VAR_10->outfp != ((void*)0))
            FUNC_1(VAR_10->outfp);
        static size_t VAR_14;
        ++VAR_14;
        if (VAR_2[VAR_14].path == ((void*)0)) {
            if (VAR_3 != 0) {
                VAR_1 = VAR_0.now->cb(VAR_0.now) + VAR_3;
            } else {
                FUNC_0(VAR_4, VAR_6->conn);
                FUNC_4(VAR_6->conn, 0, "");
            }
        }
    }

    return 0;
}
