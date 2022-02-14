
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct dirlist {TYPE_1__ stab; } ;



__attribute__((used)) static int
FUNC_0(const struct dirlist *VAR_0, const struct dirlist *VAR_1)
{
 return ((VAR_0->stab.st_dev == VAR_1->stab.st_dev)
  && (VAR_0->stab.st_ino == VAR_1->stab.st_ino));
}
