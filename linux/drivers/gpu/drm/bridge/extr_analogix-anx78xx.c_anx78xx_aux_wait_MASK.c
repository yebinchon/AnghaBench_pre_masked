
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct anx78xx*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct anx78xx *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_7 = VAR_5 + FUNC_2(VAR_0) + 1;

 while (!FUNC_1(VAR_6)) {
  if (FUNC_4(VAR_5, VAR_7)) {
   if (!FUNC_1(VAR_6)) {
    FUNC_0("Timed out waiting AUX to finish\n");
    return -VAR_1;
   }

   break;
  }

  FUNC_5(1000, 2000);
 }


 VAR_9 = FUNC_3(VAR_6->map[VAR_2], VAR_3,
     &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0("Failed to read from AUX channel: %d\n", VAR_9);
  return VAR_9;
 }

 if (VAR_8 & VAR_4) {
  FUNC_0("Failed to wait for AUX channel (status: %02x)\n",
     VAR_8);
  return -VAR_1;
 }

 return 0;
}
