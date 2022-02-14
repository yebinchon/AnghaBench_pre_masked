
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int mtrr_type ;
struct TYPE_4__ {unsigned long x86_phys_bits; } ;
struct TYPE_3__ {int (* validate_add_page ) (unsigned long,unsigned long,unsigned int) ;int (* get_free_region ) (unsigned long,unsigned long,int) ;int (* get ) (int,unsigned long*,unsigned long*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int,unsigned long,unsigned long,unsigned int) ;
 int FUNC_11 (unsigned long,unsigned long,unsigned int) ;
 int FUNC_12 (int,unsigned long*,unsigned long*,unsigned int*) ;
 int FUNC_13 (unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_14 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(unsigned long VAR_11, unsigned long VAR_12,
    unsigned int VAR_13, bool VAR_14)
{
 unsigned long VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 mtrr_type VAR_20;

 if (!FUNC_4())
  return -VAR_2;

 VAR_19 = VAR_7->validate_add_page(VAR_11, VAR_12, VAR_13);
 if (VAR_19)
  return VAR_19;

 if (VAR_13 >= VAR_3) {
  FUNC_8("type: %u invalid\n", VAR_13);
  return -VAR_0;
 }


 if ((VAR_13 == VAR_4) && !FUNC_1()) {
  FUNC_8("your processor doesn't support write-combining\n");
  return -VAR_1;
 }

 if (!VAR_12) {
  FUNC_8("zero sized request\n");
  return -VAR_0;
 }

 if ((VAR_11 | (VAR_11 + VAR_12 - 1)) >>
     (VAR_6.x86_phys_bits - VAR_5)) {
  FUNC_8("base or size exceeds the MTRR width\n");
  return -VAR_0;
 }

 VAR_19 = -VAR_0;
 VAR_18 = -1;


 FUNC_0();


 FUNC_5(&VAR_8);
 for (VAR_17 = 0; VAR_17 < VAR_10; ++VAR_17) {
  VAR_7->get(VAR_17, &VAR_15, &VAR_16, &VAR_20);
  if (!VAR_16 || VAR_11 > VAR_15 + VAR_16 - 1 ||
      VAR_11 + VAR_12 - 1 < VAR_15)
   continue;




  if (VAR_11 < VAR_15 || VAR_11 + VAR_12 - 1 > VAR_15 + VAR_16 - 1) {
   if (VAR_11 <= VAR_15 &&
       VAR_11 + VAR_12 - 1 >= VAR_15 + VAR_16 - 1) {

    if (VAR_13 == VAR_20) {
     VAR_18 = VAR_18 == -1 ? VAR_17 : -2;
     continue;
    } else if (FUNC_14(VAR_13, VAR_20))
     continue;
   }
   FUNC_8("0x%lx000,0x%lx000 overlaps existing 0x%lx000,0x%lx000\n", VAR_11, VAR_12, VAR_15,
    VAR_16);
   goto out;
  }

  if (VAR_20 != VAR_13) {
   if (FUNC_14(VAR_13, VAR_20))
    continue;
   FUNC_8("type mismatch for %lx000,%lx000 old: %s new: %s\n",
    VAR_11, VAR_12, FUNC_3(VAR_20),
    FUNC_3(VAR_13));
   goto out;
  }
  if (VAR_14)
   ++VAR_9[VAR_17];
  VAR_19 = VAR_17;
  goto out;
 }

 VAR_17 = VAR_7->get_free_region(VAR_11, VAR_12, VAR_18);
 if (VAR_17 >= 0) {
  FUNC_10(VAR_17, VAR_11, VAR_12, VAR_13);
  if (FUNC_2(VAR_18 < 0)) {
   VAR_9[VAR_17] = 1;
  } else {
   VAR_9[VAR_17] = VAR_9[VAR_18];
   if (VAR_14)
    VAR_9[VAR_17]++;
   if (FUNC_15(VAR_18 != VAR_17)) {
    FUNC_10(VAR_18, 0, 0, 0);
    VAR_9[VAR_18] = 0;
   }
  }
 } else {
  FUNC_7("no more MTRRs available\n");
 }
 VAR_19 = VAR_17;
 out:
 FUNC_6(&VAR_8);
 FUNC_9();
 return VAR_19;
}
