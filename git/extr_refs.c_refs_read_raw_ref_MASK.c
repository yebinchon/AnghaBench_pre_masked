
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_store {TYPE_1__* be; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int (* read_raw_ref ) (struct ref_store*,char const*,struct object_id*,struct strbuf*,unsigned int*) ;} ;


 int FUNC_0 (struct ref_store*,char const*,struct object_id*,struct strbuf*,unsigned int*) ;

int FUNC_1(struct ref_store *VAR_0,
        const char *VAR_1, struct object_id *VAR_2,
        struct strbuf *VAR_3, unsigned int *VAR_4)
{
 return VAR_0->be->read_raw_ref(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
