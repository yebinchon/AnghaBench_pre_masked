
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int * x86_capability; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (int,void*,void*,void*,void*) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cpuinfo_x86*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int,unsigned int,unsigned int) ;
 int FUNC_7 (struct cpuinfo_x86*,int ) ;
 int FUNC_8 (int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct cpuinfo_x86 *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11 = 0, VAR_12, VAR_13;
 char VAR_14[65];

 FUNC_4(VAR_3);

 FUNC_0(VAR_3);


 VAR_6 = FUNC_2(0x80860000);
 VAR_10 = 0;
 if (VAR_6 >= 0x80860001) {
  FUNC_1(0x80860001, &VAR_7, &VAR_10, &VAR_11, &VAR_12);
  if (VAR_10 != 0x02000000) {
   FUNC_5("CPU: Processor revision %u.%u.%u.%u, %u MHz\n",
    (VAR_10 >> 24) & 0xff,
    (VAR_10 >> 16) & 0xff,
    (VAR_10 >> 8) & 0xff,
    VAR_10 & 0xff,
    VAR_11);
  }
 }
 if (VAR_6 >= 0x80860002) {
  FUNC_1(0x80860002, &VAR_13, &VAR_8, &VAR_9, &VAR_7);
  if (VAR_10 == 0x02000000) {
   FUNC_5("CPU: Processor revision %08X, %u MHz\n",
    VAR_13, VAR_11);
  }
  FUNC_5("CPU: Code Morphing Software revision %u.%u.%u-%u-%u\n",
         (VAR_8 >> 24) & 0xff,
         (VAR_8 >> 16) & 0xff,
         (VAR_8 >> 8) & 0xff,
         VAR_8 & 0xff,
         VAR_9);
 }
 if (VAR_6 >= 0x80860006) {
  FUNC_1(0x80860003,
        (void *)&VAR_14[0],
        (void *)&VAR_14[4],
        (void *)&VAR_14[8],
        (void *)&VAR_14[12]);
  FUNC_1(0x80860004,
        (void *)&VAR_14[16],
        (void *)&VAR_14[20],
        (void *)&VAR_14[24],
        (void *)&VAR_14[28]);
  FUNC_1(0x80860005,
        (void *)&VAR_14[32],
        (void *)&VAR_14[36],
        (void *)&VAR_14[40],
        (void *)&VAR_14[44]);
  FUNC_1(0x80860006,
        (void *)&VAR_14[48],
        (void *)&VAR_14[52],
        (void *)&VAR_14[56],
        (void *)&VAR_14[60]);
  VAR_14[64] = '\0';
  FUNC_5("CPU: %s\n", VAR_14);
 }


 FUNC_6(0x80860004, VAR_4, VAR_5);
 FUNC_8(0x80860004, ~0, VAR_5);
 VAR_3->x86_capability[VAR_0] = FUNC_3(0x00000001);
 FUNC_8(0x80860004, VAR_4, VAR_5);


 FUNC_7(VAR_3, VAR_1);
}
