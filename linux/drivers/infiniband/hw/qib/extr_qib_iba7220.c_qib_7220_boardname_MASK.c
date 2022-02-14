
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {char* boardname; int majrev; int minrev; int revision; int boardversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qib_devdata*,char*,int,...) ;
 int FUNC_2 (int ,int,char*,int,int,char*,unsigned int,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct qib_devdata *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7->revision, VAR_4,
       VAR_1);

 switch (VAR_8) {
 case 1:
  VAR_7->boardname = "InfiniPath_QLE7240";
  break;
 case 2:
  VAR_7->boardname = "InfiniPath_QLE7280";
  break;
 default:
  FUNC_1(VAR_7, "Unknown 7220 board with ID %u\n", VAR_8);
  VAR_7->boardname = "Unknown_InfiniPath_7220";
  break;
 }

 if (VAR_7->majrev != 5 || !VAR_7->minrev || VAR_7->minrev > 2)
  FUNC_1(VAR_7,
       "Unsupported InfiniPath hardware revision %u.%u!\n",
       VAR_7->majrev, VAR_7->minrev);

 FUNC_2(VAR_7->boardversion, sizeof(VAR_7->boardversion),
   "ChipABI %u.%u, %s, InfiniPath%u %u.%u, SW Compat %u\n",
   VAR_2, VAR_3, VAR_7->boardname,
   (unsigned int)FUNC_0(VAR_7->revision, VAR_5, VAR_0),
   VAR_7->majrev, VAR_7->minrev,
   (unsigned int)FUNC_0(VAR_7->revision, VAR_5, VAR_6));
}
