
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {scalar_t__ head; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;

__attribute__((used)) static inline int
FUNC_2(struct nvbios_init *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_0->head >= 0)
   return VAR_0->head;
  FUNC_0("script needs head\n");
 }
 return 0;
}
