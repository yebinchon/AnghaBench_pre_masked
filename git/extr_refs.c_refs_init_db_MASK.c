
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* init_db ) (struct ref_store*,struct strbuf*) ;} ;


 struct ref_store* FUNC_0 (int ) ;
 int FUNC_1 (struct ref_store*,struct strbuf*) ;
 int VAR_0 ;

int FUNC_2(struct strbuf *VAR_1)
{
 struct ref_store *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->be->init_db(VAR_2, VAR_1);
}
