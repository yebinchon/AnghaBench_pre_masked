
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {scalar_t__ first_read_date; } ;
struct TYPE_11__ {int (* redo ) () ;int (* done ) (int) ;int (* error ) () ;} ;
struct TYPE_10__ {int bio; } ;
struct TYPE_9__ {int name; int size; } ;
struct TYPE_8__ {scalar_t__ kernel_data; int track; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_7__* VAR_1 ;
 int FUNC_2 (char*,int,size_t) ;
 TYPE_6__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,int) ;
 size_t FUNC_5 (size_t) ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 scalar_t__ FUNC_6 (int ) ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_4__* VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 TYPE_3__* VAR_22 ;
 TYPE_2__** VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 () ;
 scalar_t__ VAR_27 ;
 int FUNC_8 (char*,int,...) ;
 scalar_t__ VAR_28 ;
 TYPE_1__* VAR_29 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void)
{
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 if (VAR_6 >= 2) {



  return;
 }

 if (!VAR_2->first_read_date)
  VAR_2->first_read_date = VAR_27;

 VAR_33 = 0;
 VAR_31 = FUNC_1(1 << VAR_11, 4);

 if (VAR_12 & VAR_13)
  VAR_30 = 1;
 else
  VAR_30 = 0;

 if (VAR_0 & 0x80)
  VAR_32 = 2;
 else
  VAR_32 = 1;

 VAR_33 = (((VAR_8 - VAR_14) * VAR_32 +
         VAR_6 - VAR_5) * VAR_10 +
        VAR_7 - VAR_9 + VAR_30) << VAR_11 >> 2;

 if (VAR_33 / VAR_31 >
     FUNC_1(VAR_26 + VAR_20, VAR_31)) {
  FUNC_2("long rw: %x instead of %lx\n",
         VAR_33, VAR_20);
  FUNC_8("rs=%d s=%d\n", VAR_7, VAR_9);
  FUNC_8("rh=%d h=%d\n", VAR_6, VAR_5);
  FUNC_8("rt=%d t=%d\n", VAR_8, VAR_14);
  FUNC_8("heads=%d eoc=%d\n", VAR_32, VAR_30);
  FUNC_8("spt=%d st=%d ss=%d\n",
   VAR_10, VAR_25, VAR_31);
  FUNC_8("in_sector_offset=%d\n", VAR_26);
 }

 VAR_33 -= VAR_26;
 FUNC_3(VAR_33, 0);
 FUNC_4(VAR_20, VAR_33);

 switch (FUNC_7()) {
 case 2:
  VAR_19->redo();
  return;
 case 1:
  if (!VAR_20) {
   VAR_19->error();
   VAR_19->redo();
   return;
  }
  break;
 case 0:
  if (!VAR_20) {
   VAR_19->redo();
   return;
  }
  VAR_23[VAR_21] = VAR_15;
  VAR_24[FUNC_5(VAR_21)] = VAR_15->size;
  break;
 }

 if (VAR_28) {
  if (VAR_1->flags & VAR_4)
   FUNC_2("Auto-detected floppy type %s in fd%d\n",
          VAR_15->name, VAR_21);
  VAR_23[VAR_21] = VAR_15;
  VAR_24[FUNC_5(VAR_21)] = VAR_15->size;
  VAR_28 = 0;
 }

 if (FUNC_0(VAR_0) != VAR_3 ||
     VAR_29->kernel_data == FUNC_6(VAR_22->bio)) {

  VAR_19->done(1);
 } else if (FUNC_0(VAR_0) == VAR_3) {
  VAR_18 = VAR_29->track;
  VAR_16 = VAR_21;
  FUNC_3(VAR_17, VAR_33 + VAR_25);
 }
 VAR_19->redo();
}
