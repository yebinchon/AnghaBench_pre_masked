
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {char* x86_model_id; unsigned char x86_model; unsigned char x86_stepping; int x86_cache_size; int cpuid_level; } ;


 int VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 char* VAR_4 ;
 unsigned char VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (struct cpuinfo_x86*,int) ;
 char* VAR_16 ;
 char* VAR_17 ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_18 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct cpuinfo_x86*,int ) ;
 int FUNC_11 (struct cpuinfo_x86*,int ) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,int ) ;
 scalar_t__ FUNC_14 (struct cpuinfo_x86*,int) ;

__attribute__((used)) static void FUNC_15(struct cpuinfo_x86 *VAR_19)
{
 unsigned char VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 char *VAR_24 = VAR_19->x86_model_id;
 const char *VAR_25 = ((void*)0);





 FUNC_2(VAR_19, 0*32+31);


 if (FUNC_14(VAR_19, 1*32+24)) {
  FUNC_2(VAR_19, 1*32+24);
  FUNC_11(VAR_19, VAR_13);
 }

 FUNC_3(&VAR_20, &VAR_23);

 FUNC_1(VAR_19);

 VAR_5 = VAR_21 = VAR_20 >> 4;
 VAR_22 = VAR_20 & 0xf;


 VAR_19->x86_model = (VAR_23 >> 4) + 1;
 VAR_19->x86_stepping = VAR_23 & 0xf;







 switch (VAR_21) {
  unsigned char VAR_26;

 case 0:
  VAR_25 = VAR_3[VAR_22 & 7];
  break;

 case 1:
  VAR_25 = (VAR_22 & 8) ? VAR_1[VAR_22 & 5]
   : VAR_2[VAR_22 & 3];
  break;

 case 2:
  VAR_4[2] = VAR_16[VAR_22 & 5];
  VAR_25 = VAR_4+2;
  break;

 case 3:
  VAR_4[1] = ' ';
  VAR_4[2] = VAR_16[VAR_22 & 5];
  if (VAR_23 > 0x21) {
   VAR_4[0] = 'L';
   VAR_25 = VAR_4;
   (VAR_19->x86_model)++;
  } else
   VAR_25 = VAR_4+1;

  FUNC_11(VAR_19, VAR_14);

  FUNC_10(VAR_19, VAR_12);
  break;

 case 4:
 case 11:
  VAR_19->x86_cache_size = 16;


  if (VAR_19->cpuid_level == 2) {

   FUNC_9(VAR_0, FUNC_5(VAR_0) | 1);







   if ((0x30 <= VAR_23 && VAR_23 <= 0x6f) ||
     (0x80 <= VAR_23 && VAR_23 <= 0x8f))
    FUNC_4();
   return;
  } else {
   VAR_4[2] = (VAR_22 & 1) ? '3' : '4';
   VAR_25 = VAR_4+2;
   VAR_19->x86_model = (VAR_23 & 0x20) ? 1 : 2;
  }
  break;

 case 5:
  if (VAR_23 > 7) {
   VAR_21++;

   FUNC_9(VAR_0, FUNC_5(VAR_0)|1);
  } else {

   FUNC_10(VAR_19, VAR_12);
  }
  VAR_26 = (!(VAR_22 & 7) || VAR_22 & 1) ? 2 : 0;
  VAR_4[VAR_26] = VAR_17[VAR_22 & 7];
  VAR_25 = VAR_4+VAR_26;
  if (((VAR_23 & 0x0f) > 4) || ((VAR_23 & 0xf0) == 0x20))
   (VAR_19->x86_model)++;

  FUNC_11(VAR_19, VAR_14);
  break;

 case 0xf:
  switch (VAR_22) {
  case 0xd:
   VAR_21 = 0;
   VAR_25 = VAR_3[!!FUNC_0(VAR_15)];
   break;

  case 0xe:
   VAR_21 = 0;
   VAR_25 = VAR_2[0];
   break;
  }
  break;

 default:
  VAR_21 = 7;
  break;
 }
 FUNC_13(VAR_24, VAR_6[VAR_21 & 7]);
 if (VAR_25)
  FUNC_12(VAR_24, VAR_25);
 return;
}
