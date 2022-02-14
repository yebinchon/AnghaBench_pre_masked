
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct IjkAVTreeNode {scalar_t__ logical_pos; scalar_t__ size; scalar_t__ physical_pos; } ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__* last_physical_pos; scalar_t__ cache_physical_pos; scalar_t__ cache_max_capacity; scalar_t__ read_logical_pos; TYPE_1__* tree_info; int fd; } ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
struct TYPE_6__ {scalar_t__ physical_size; int root; } ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;
typedef struct IjkAVTreeNode IjkCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct IjkAVTreeNode*) ;
 struct IjkAVTreeNode* FUNC_3 (int ,scalar_t__*,int ,void**) ;
 struct IjkAVTreeNode* FUNC_4 (int *,struct IjkAVTreeNode*,int ,struct IjkAVTreeNode**) ;
 struct IjkAVTreeNode* FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ) ;
 struct IjkAVTreeNode* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,unsigned char const*,int) ;

__attribute__((used)) static int64_t FUNC_10(IjkURLContext *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
    IjkIOCacheContext *VAR_8= VAR_5->priv_data;
    int64_t VAR_9 = -1;
    int64_t VAR_10 = 0;
    IjkCacheEntry *VAR_11 = ((void*)0), *VAR_12[2] = {((void*)0), ((void*)0)};
    IjkCacheEntry *VAR_13 = ((void*)0);
    struct IjkAVTreeNode *VAR_14 = ((void*)0);
    int64_t VAR_15 = 0;

    if (*VAR_8->last_physical_pos != VAR_8->cache_physical_pos) {
        VAR_9 = FUNC_7(VAR_8->fd, *VAR_8->last_physical_pos, VAR_3);
        if (VAR_9 < 0) {
            return VAR_2;
        } else {
            VAR_8->cache_physical_pos = VAR_9;
            *VAR_8->last_physical_pos = VAR_9;
        }
    } else {
        VAR_9 = *VAR_8->last_physical_pos;
    }

    if (*VAR_8->last_physical_pos + VAR_7 >= VAR_8->cache_max_capacity) {
        VAR_15 = FUNC_6(VAR_5, &VAR_9, VAR_7);
        if (VAR_15 < VAR_7 || VAR_9 < 0) {
            return VAR_2;
        }
        VAR_8->cache_physical_pos = VAR_9;
        *VAR_8->last_physical_pos = VAR_9;
    }

    VAR_10 = FUNC_9(VAR_8->fd, VAR_6, VAR_7);
    if (VAR_10 < 0) {
        return VAR_2;
    }

    VAR_8->cache_physical_pos += VAR_10;
    *VAR_8->last_physical_pos += VAR_10;
    VAR_8->tree_info->physical_size += VAR_10;

    VAR_11 = FUNC_3(VAR_8->tree_info->root, &VAR_8->read_logical_pos, VAR_4, (void**)VAR_12);

    if (!VAR_11)
        VAR_11 = VAR_12[0];

    if (!VAR_11 ||
        VAR_11->logical_pos + VAR_11->size != VAR_8->read_logical_pos ||
        VAR_11->physical_pos + VAR_11->size != VAR_9) {
        VAR_11 = FUNC_8(sizeof(*VAR_11));
        VAR_14 = FUNC_5();
        if (!VAR_11 || !VAR_14) {
            VAR_10 = FUNC_0(VAR_1);
            goto fail;
        }
        VAR_11->logical_pos = VAR_8->read_logical_pos;
        VAR_11->physical_pos = VAR_9;
        VAR_11->size = VAR_10;

        VAR_13 = FUNC_4(&VAR_8->tree_info->root, VAR_11, VAR_4, &VAR_14);
        if (VAR_13 && VAR_13 != VAR_11) {
            VAR_10 = -1;
            FUNC_1(((void*)0), VAR_0, "sync_add_entry av_tree_insert failed\n");
            goto fail;
        }
    } else {
        VAR_11->size += VAR_10;
    }

    return VAR_10;
fail:


    FUNC_2(VAR_11);
    FUNC_2(VAR_14);
    return VAR_10;
}
