
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int flags; scalar_t__ replay; int * tdb_authalgxform; TYPE_1__* tdb_encalgxform; } ;
struct newesp {int dummy; } ;
struct esp {int dummy; } ;
struct TYPE_2__ {scalar_t__ blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct secasvar*) ;

size_t
FUNC_2(struct secasvar *VAR_2)
{
 size_t VAR_3;

 if (VAR_2 != ((void*)0)) {

  FUNC_0(VAR_2->tdb_encalgxform != ((void*)0),
   ("SA with null xform"));
  if (VAR_2->flags & VAR_1)
   VAR_3 = sizeof (struct esp);
  else
   VAR_3 = sizeof (struct newesp);
  VAR_3 += VAR_2->tdb_encalgxform->blocksize + 9;

  if (VAR_2->tdb_authalgxform != ((void*)0) && VAR_2->replay)
   VAR_3 += FUNC_1(VAR_2);
 } else {
  VAR_3 = sizeof (struct newesp) + VAR_0 + 9 + 16;
 }
 return VAR_3;
}
