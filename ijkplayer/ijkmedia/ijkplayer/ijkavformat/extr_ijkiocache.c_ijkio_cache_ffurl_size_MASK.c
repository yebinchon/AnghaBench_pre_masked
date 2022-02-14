
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {TYPE_1__* prot; } ;
struct TYPE_11__ {TYPE_4__* inner; } ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {scalar_t__ (* url_seek ) (TYPE_4__*,int,int ) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,int ) ;

__attribute__((used)) static int64_t FUNC_5(IjkURLContext *VAR_5) {
    int64_t VAR_6, VAR_7;
    IjkIOCacheContext *VAR_8= ((IjkURLContext *)VAR_5)->priv_data;
    if (!VAR_8 || !VAR_8->inner || !VAR_8->inner->prot)
        return FUNC_0(VAR_0);
    VAR_7 = VAR_8->inner->prot->url_seek(VAR_8->inner, 0, VAR_1);
    if (VAR_7 < 0) {
        VAR_6 = VAR_8->inner->prot->url_seek(VAR_8->inner, 0, VAR_2);
        if ((VAR_7 = VAR_8->inner->prot->url_seek(VAR_8->inner, -1, VAR_3)) < 0)
            return VAR_7;
        VAR_7++;
        VAR_8->inner->prot->url_seek(VAR_8->inner, VAR_6, VAR_4);
    }
    return VAR_7;
}
