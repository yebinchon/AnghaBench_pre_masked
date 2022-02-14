
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {scalar_t__ offset; scalar_t__ repend; scalar_t__ repeat; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct nvbios_init *VAR_0)
{
 FUNC_0("END_REPEAT\n");
 VAR_0->offset += 1;

 if (VAR_0->repeat) {
  VAR_0->repend = VAR_0->offset;
  VAR_0->offset = 0;
 }
}
