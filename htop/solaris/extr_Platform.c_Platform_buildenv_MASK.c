
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_2__ {size_t capacity; size_t size; scalar_t__ env; } ;
typedef TYPE_1__ envAccum ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, struct ps_prochandle *VAR_1, uintptr_t VAR_2, const char *VAR_3) {
   envAccum *VAR_4 = VAR_0;
   (void) VAR_1;
   (void) VAR_2;
   size_t VAR_5 = FUNC_1(VAR_3);
   if ((VAR_5 + 2) > (VAR_4->capacity - VAR_4->size))
      VAR_4->env = FUNC_3(VAR_4->env, VAR_4->capacity *= 2);
   if ((VAR_5 + 2) > (VAR_4->capacity - VAR_4->size))
      return 1;
   FUNC_0( VAR_4->env + VAR_4->size, VAR_3, (VAR_4->capacity - VAR_4->size));
   FUNC_2( VAR_4->env + VAR_4->size + VAR_5 + 1, "\n", 1);
   VAR_4->size = VAR_4->size + VAR_5 + 1;
   return 0;
}
