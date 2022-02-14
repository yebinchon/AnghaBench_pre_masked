
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
struct ref_iterator {int ordered; } ;
struct TYPE_2__ {struct ref_iterator* (* iterator_begin ) (struct ref_store*,char const*,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 struct ref_iterator* FUNC_2 (struct ref_iterator*,char*,int) ;
 scalar_t__ VAR_1 ;
 struct ref_iterator* FUNC_3 (struct ref_store*,char const*,int) ;

struct ref_iterator *FUNC_4(
  struct ref_store *VAR_2,
  const char *VAR_3, int VAR_4, int VAR_5)
{
 struct ref_iterator *VAR_6;

 if (VAR_1 < 0)
  VAR_1 = FUNC_1("GIT_REF_PARANOIA", 0);
 if (VAR_1)
  VAR_5 |= VAR_0;

 VAR_6 = VAR_2->be->iterator_begin(VAR_2, VAR_3, VAR_5);





 if (VAR_4)
  VAR_6 = FUNC_2(VAR_6, "", VAR_4);


 if (!VAR_6->ordered)
  FUNC_0("reference iterator is not ordered");

 return VAR_6;
}
