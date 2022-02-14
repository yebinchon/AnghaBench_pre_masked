
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; int options; int ases; int writecombine; void* cputype; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 int FUNC_0 (struct cpuinfo_mips*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int,char*) ;
 int FUNC_3 (struct cpuinfo_mips*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct cpuinfo_mips *VAR_13, unsigned int VAR_14)
{
 switch (VAR_13->processor_id & VAR_9) {
 case 132:
  switch (VAR_13->processor_id & VAR_10) {
  case 131:
  case 130:
   VAR_13->cputype = VAR_0;
   VAR_12[VAR_14] = "ICT Loongson-3";
   FUNC_2(VAR_14, "loongson3a");
   FUNC_3(VAR_13, VAR_6);
   break;
  case 129:
  case 128:
   VAR_13->cputype = VAR_0;
   VAR_12[VAR_14] = "ICT Loongson-3";
   FUNC_2(VAR_14, "loongson3a");
   FUNC_3(VAR_13, VAR_6);
   break;
  }

  FUNC_0(VAR_13);
  VAR_13->options |= VAR_5 | VAR_8 | VAR_7;
  VAR_13->writecombine = VAR_11;
  VAR_13->ases |= (VAR_4 | VAR_1 |
   VAR_2 | VAR_3);
  break;
 default:
  FUNC_1("Unknown Loongson Processor ID!");
  break;
 }
}
