
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {int link; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct nvbios_init*) ;

__attribute__((used)) static inline int
FUNC_2(struct nvbios_init *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_0->link)
   return VAR_0->link == 2;
  FUNC_0("script needs OR link\n");
 }
 return 0;
}
