
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int emul; scalar_t__ translated; } ;



__attribute__((used)) static unsigned int FUNC_0(struct atkbd *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_0->translated && VAR_0->emul == 1 &&
     (VAR_1 == 0x64 || VAR_1 == 0x65 || VAR_1 == 0x66)) {
  VAR_0->emul = 0;
  VAR_1 |= 0x80;
 }

 return VAR_1;
}
