
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct storage_entry {int allocationUnits; int size; int used; int index; scalar_t__ allocationFailures; int type; int flags; } ;
struct statfs {int dummy; } ;
typedef int fs_string ;
struct TYPE_7__ {char* f_mntonname; char* f_fstypename; char* f_mntfromname; int f_bsize; int f_blocks; int f_bfree; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,int,char*,char*,char*,char*) ;
 struct storage_entry* FUNC_9 (char*) ;
 struct storage_entry* FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct storage_entry *VAR_7;
 uint64_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_4];

 if ((VAR_11 = FUNC_6(((void*)0), 0, VAR_3)) < 0) {
  FUNC_11(VAR_2, "hrStorageTable: getfsstat() failed: %m");
  return;
 }

 if (VAR_11 != (int)VAR_6 || VAR_5 == ((void*)0)) {
  VAR_6 = VAR_11;
  VAR_5 = FUNC_7(VAR_5, VAR_6 * sizeof(struct statfs));
  if (VAR_5 == ((void*)0)) {
   VAR_6 = 0;
   FUNC_1(0);
   return;
  }
 }

 if ((VAR_11 = FUNC_6(VAR_5,
     VAR_6 * sizeof(struct statfs), VAR_3)) < 0) {
  FUNC_11(VAR_2, "hrStorageTable: getfsstat() failed: %m");
  return;
 }

 FUNC_0("got %d mounted FS", VAR_11);

 FUNC_4();

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  FUNC_8(VAR_13, sizeof(VAR_13),
      "%s, type: %s, dev: %s", VAR_5[VAR_10].f_mntonname,
      VAR_5[VAR_10].f_fstypename, VAR_5[VAR_10].f_mntfromname);

  VAR_7 = FUNC_10(VAR_13);
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_9(VAR_13);

  FUNC_1 (VAR_7 != ((void*)0));
  if (VAR_7 == ((void*)0))
   return;

  VAR_7->flags |= VAR_0;
  VAR_7->type = FUNC_2(&VAR_5[VAR_10]);

  VAR_12 = VAR_5[VAR_10].f_bsize;
  VAR_8 = VAR_5[VAR_10].f_blocks;
  VAR_9 = VAR_5[VAR_10].f_blocks - VAR_5[VAR_10].f_bfree;
  while (VAR_8 > VAR_1) {
   VAR_12 <<= 1;
   VAR_8 >>= 1;
   VAR_9 >>= 1;
  }
  VAR_7->allocationUnits = VAR_12;
  VAR_7->size = VAR_8;
  VAR_7->used = VAR_9;

  VAR_7->allocationFailures = 0;


  FUNC_5(&VAR_5[VAR_10], VAR_7->index);
 }

 FUNC_3();
}
