
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int x86; void** x86_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct cpuinfo_x86*,int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct cpuinfo_x86 *VAR_9)
{
 u32 VAR_10, VAR_11;


 if (FUNC_1(0xC0000000) >= 0xC0000001) {
  u32 VAR_12 = FUNC_2(0xC0000001);


  if ((VAR_12 & (VAR_2 | VAR_0)) == VAR_2) {
   FUNC_4(VAR_4, VAR_10, VAR_11);

   VAR_10 |= VAR_1;
   FUNC_6(VAR_4, VAR_10, VAR_11);
   FUNC_3("CPU: Enabled ACE h/w crypto\n");
  }


  if ((VAR_12 & (VAR_7 | VAR_6)) == VAR_7) {
   FUNC_4(VAR_4, VAR_10, VAR_11);

   VAR_10 |= VAR_5;
   FUNC_6(VAR_4, VAR_10, VAR_11);
   FUNC_3("CPU: Enabled h/w RNG\n");
  }





  VAR_9->x86_capability[VAR_3] = FUNC_2(0xC0000001);
 }

 if (VAR_9->x86 >= 0x6)
  FUNC_5(VAR_9, VAR_8);

 FUNC_0(VAR_9);
}
