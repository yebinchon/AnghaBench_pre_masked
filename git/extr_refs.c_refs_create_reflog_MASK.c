
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* create_reflog ) (struct ref_store*,char const*,int,struct strbuf*) ;} ;


 int FUNC_0 (struct ref_store*,char const*,int,struct strbuf*) ;

int FUNC_1(struct ref_store *VAR_0, const char *VAR_1,
         int VAR_2, struct strbuf *VAR_3)
{
 return VAR_0->be->create_reflog(VAR_0, VAR_1, VAR_2, VAR_3);
}
