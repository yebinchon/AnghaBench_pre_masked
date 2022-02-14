
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ cpu_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 unsigned int FUNC_2 (int) ;
 int VAR_7 ;
 long FUNC_3 (unsigned int,scalar_t__*) ;
 long FUNC_4 (unsigned int,unsigned long) ;
 TYPE_1__** VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,unsigned int,...) ;
 int FUNC_7 (char*,long,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(int VAR_9)
{
 unsigned int VAR_10;
 unsigned long VAR_11 =
   FUNC_0(FUNC_5(VAR_6));
 long VAR_12;
 uint8_t VAR_13;

 if (VAR_9 < 0 || VAR_9 >= VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9);




 if (VAR_8[VAR_9]->cpu_start || !FUNC_1(VAR_2))
  goto kick;







 VAR_12 = FUNC_3(VAR_10, &VAR_13);
 if (VAR_12 != VAR_3) {
  FUNC_7("OPAL Error %ld querying CPU %d state\n", VAR_12, VAR_9);
  return -VAR_1;
 }





 if (VAR_13 == VAR_5)
  goto kick;




 if (VAR_13 == VAR_4) {
  FUNC_6("OPAL: Starting CPU %d (HW 0x%x)...\n", VAR_9, VAR_10);
  VAR_12 = FUNC_4(VAR_10, VAR_11);
  if (VAR_12 != VAR_3) {
   FUNC_7("OPAL Error %ld starting CPU %d\n", VAR_12, VAR_9);
   return -VAR_1;
  }
 } else {






  FUNC_6("OPAL: CPU %d (HW 0x%x) is unavailable"
    " (status %d)...\n", VAR_9, VAR_10, VAR_13);
  return -VAR_1;
 }

kick:
 return FUNC_8(VAR_9);
}
