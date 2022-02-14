
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lg_curbuckets; int (* hash ) (void const*,size_t*) ;} ;
typedef TYPE_1__ ckh_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_1__*,size_t,void const*) ;
 int FUNC_3 (void const*,size_t*) ;

__attribute__((used)) static size_t
FUNC_4(ckh_t *VAR_1, const void *VAR_2) {
 size_t VAR_3[2], VAR_4, VAR_5;

 FUNC_1(VAR_1 != ((void*)0));

 VAR_1->hash(VAR_2, VAR_3);


 VAR_4 = VAR_3[0] & ((FUNC_0(1) << VAR_1->lg_curbuckets) - 1);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2);
 if (VAR_5 != VAR_0) {
  return VAR_5;
 }


 VAR_4 = VAR_3[1] & ((FUNC_0(1) << VAR_1->lg_curbuckets) - 1);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_2);
 return VAR_5;
}
