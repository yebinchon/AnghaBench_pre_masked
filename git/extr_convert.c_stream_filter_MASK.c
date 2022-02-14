
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {TYPE_1__* vtbl; } ;
struct TYPE_2__ {int (* filter ) (struct stream_filter*,char const*,size_t*,char*,size_t*) ;} ;


 int FUNC_0 (struct stream_filter*,char const*,size_t*,char*,size_t*) ;

int FUNC_1(struct stream_filter *VAR_0,
    const char *VAR_1, size_t *VAR_2,
    char *VAR_3, size_t *VAR_4)
{
 return VAR_0->vtbl->filter(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
