
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _malloc_zone_t {int dummy; } ;


 void* FUNC_0 (size_t) ;

__attribute__((used)) static unsigned
FUNC_1(struct _malloc_zone_t *VAR_0, size_t VAR_1, void **VAR_2,
    unsigned VAR_3) {
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2[VAR_4] = FUNC_0(VAR_1);
  if (!VAR_2[VAR_4])
   break;
 }

 return VAR_4;
}
