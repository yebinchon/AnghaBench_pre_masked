
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int frequency; unsigned int driver_data; } ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 unsigned int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,int,int,int,...) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(void)
{
 unsigned int VAR_15, VAR_16, VAR_17 = 0;
 unsigned int VAR_18;
 int VAR_19;


 VAR_19 = FUNC_4();
 if (VAR_19 == -1) {
  FUNC_6("Invalid (reserved) multiplier!\n");
  return -VAR_1;
 }
 VAR_6 = FUNC_1(VAR_19);
 if (VAR_6 == 0) {
  FUNC_6("Invalid (reserved) FSB!\n");
  return -VAR_1;
 }



 VAR_11 = VAR_19;

 switch (VAR_5) {
 case 129:
  VAR_12 = 50;
  break;
 case 128:
  VAR_12 = 40;
  break;
 default:
  VAR_12 = 30;
  break;
 }

 FUNC_5("MinMult:%d.%dx MaxMult:%d.%dx\n",
   VAR_12/10, VAR_12%10, VAR_11/10, VAR_11%10);

 VAR_7 = FUNC_0(VAR_11);
 VAR_10 = FUNC_0(VAR_12);
 FUNC_5("FSB:%dMHz  Lowest speed: %s   Highest speed:%s\n", VAR_6,
   FUNC_7(VAR_10/1000),
   FUNC_7(VAR_7/1000));

 if (VAR_10 == VAR_7) {
  FUNC_6("highestspeed == lowest, aborting\n");
  return -VAR_1;
 }
 if (VAR_10 > VAR_7) {
  FUNC_6("nonsense! lowest (%d > %d) !\n",
   VAR_10, VAR_7);
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_14 + 1, sizeof(*VAR_9),
     VAR_4);
 if (!VAR_9)
  return -VAR_3;

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_18 = VAR_13[VAR_16];
  if (VAR_18 == -1)
   continue;
  if (VAR_18 > VAR_11 || VAR_18 < VAR_12)
   continue;
  VAR_9[VAR_17].frequency = FUNC_0(VAR_18);
  VAR_9[VAR_17].driver_data = VAR_16;
  VAR_17++;
 }
 if (VAR_17 <= 1) {
  FUNC_3(VAR_9);
  return -VAR_2;
 }

 for (VAR_16 = 0; VAR_16 < VAR_17 - 1; VAR_16++) {
  unsigned int VAR_20, VAR_21;
  VAR_20 = VAR_9[VAR_16].frequency;
  VAR_21 = VAR_16;
  for (VAR_15 = VAR_16 + 1; VAR_15 < VAR_17; VAR_15++) {
   if (VAR_9[VAR_15].frequency < VAR_20) {
    VAR_20 = VAR_9[VAR_15].frequency;
    VAR_21 = VAR_15;
   }
  }
  if (VAR_21 != VAR_16) {
   FUNC_8(VAR_9[VAR_16].frequency,
        VAR_9[VAR_21].frequency);
   FUNC_8(VAR_9[VAR_16].driver_data,
        VAR_9[VAR_21].driver_data);
  }
 }

 VAR_9[VAR_17].frequency = VAR_0;


 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if (VAR_13[VAR_9[VAR_16].driver_data & 0x1f] == VAR_19) {
   VAR_8 = VAR_16;
   break;
  }
 }
 return 0;
}
