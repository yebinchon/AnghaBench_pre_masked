
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ logical_pos; scalar_t__ logical_size; int io_error; } ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ Context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int64_t FUNC_3(IjkURLContext *VAR_4, int64_t VAR_5, int VAR_6, int VAR_7)
{
    Context *VAR_8 = VAR_4->priv_data;
    int VAR_9 = 0;

    if (!VAR_7)
        return FUNC_2(VAR_4, VAR_5, VAR_6);

    if (VAR_6 == VAR_1)
        VAR_5 += VAR_8->logical_pos;
    else if (VAR_6 == VAR_2)
        VAR_5 += VAR_8->logical_size;
    else if (VAR_6 != VAR_3)
        return FUNC_0(VAR_0);
    if (VAR_5 < 0)
        return FUNC_0(VAR_0);

    VAR_9 = FUNC_1(VAR_4, VAR_5);
    if (VAR_9) {
        VAR_8->io_error = VAR_9;
        return VAR_9;
    }

    VAR_8->io_error = 0;
    return VAR_8->logical_pos;
}
