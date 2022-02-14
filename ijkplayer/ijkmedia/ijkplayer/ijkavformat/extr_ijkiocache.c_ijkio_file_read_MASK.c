
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {scalar_t__ logical_pos; scalar_t__ size; scalar_t__ physical_pos; } ;
struct TYPE_11__ {scalar_t__ read_logical_pos; scalar_t__ cache_physical_pos; int file_handle_retry_count; scalar_t__ read_file_inner_error; int fd; TYPE_1__* tree_info; } ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {int root; } ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;
typedef TYPE_4__ IjkCacheEntry ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,scalar_t__*,int ,void**) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,void*,int) ;

__attribute__((used)) static int FUNC_5(IjkURLContext *VAR_2, void *VAR_3, int VAR_4)
{
    IjkIOCacheContext *VAR_5 = VAR_2->priv_data;
    IjkCacheEntry *VAR_6 = ((void*)0);
    IjkCacheEntry *VAR_7[2] = {((void*)0), ((void*)0)};
    int64_t VAR_8 = 0;
    int VAR_9 = 0;

    if (!VAR_5->tree_info)
        return 0;

    VAR_6 = FUNC_1(VAR_5->tree_info->root, &VAR_5->read_logical_pos, VAR_1, (void**)VAR_7);
    if (!VAR_6)
        VAR_6 = VAR_7[0];

    if (VAR_6) {
        int64_t VAR_10 = VAR_5->read_logical_pos - VAR_6->logical_pos;
        if (VAR_10 < VAR_6->size && VAR_6->logical_pos <= VAR_5->read_logical_pos) {
            int64_t VAR_11 = VAR_6->physical_pos + VAR_10;
            if (VAR_5->cache_physical_pos != VAR_11) {
                VAR_8 = FUNC_3(VAR_5->fd, VAR_11, VAR_0);
                if (VAR_8 < 0) {
                    VAR_5->file_handle_retry_count++;
                    FUNC_2(VAR_2);
                }
            } else {
                VAR_8 = VAR_5->cache_physical_pos;
            }

            if (VAR_8 >= 0) {
                VAR_9 = (int)FUNC_0(VAR_4, VAR_6->size - VAR_10);
                VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_9);
                if (VAR_8 < 0) {
                    if(VAR_5->read_file_inner_error) {
                        VAR_5->file_handle_retry_count++;
                        FUNC_2(VAR_2);
                    }
                }
            }
        }
    }
    return (int)VAR_8;
}
