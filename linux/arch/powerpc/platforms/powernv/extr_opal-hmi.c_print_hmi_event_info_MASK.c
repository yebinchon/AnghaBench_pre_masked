
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OpalHMIEvent {scalar_t__ version; int severity; scalar_t__ disposition; size_t type; int tfmr; int hmer; } ;


 size_t FUNC_0 (char const**) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;




 char const* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char const*,struct OpalHMIEvent*) ;
 int FUNC_4 (char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_5(struct OpalHMIEvent *VAR_9)
{
 const char *VAR_10, *VAR_11, *VAR_12;
 static const char *VAR_13[] = {
  "Malfunction Alert",
  "Processor Recovery done",
  "Processor recovery occurred again",
  "Processor recovery occurred for masked error",
  "Timer facility experienced an error",
  "TFMR SPR is corrupted",
  "UPS (Uninterrupted Power System) Overflow indication",
  "An XSCOM operation failure",
  "An XSCOM operation completed",
  "SCOM has set a reserved FIR bit to cause recovery",
  "Debug trigger has set a reserved FIR bit to cause recovery",
  "A hypervisor resource error occurred",
  "CAPP recovery process is in progress",
 };


 if (VAR_9->version < VAR_3) {
  FUNC_2("HMI Interrupt, Unknown event version %d !\n",
   VAR_9->version);
  return;
 }
 switch (VAR_9->severity) {
 case 129:
  VAR_10 = VAR_1;
  VAR_11 = "Harmless";
  break;
 case 128:
  VAR_10 = VAR_2;
  VAR_11 = "";
  break;
 case 131:
  VAR_10 = VAR_0;
  VAR_11 = "Severe";
  break;
 case 130:
 default:
  VAR_10 = VAR_0;
  VAR_11 = "Fatal";
  break;
 }

 FUNC_4("%s%s Hypervisor Maintenance interrupt [%s]\n",
  VAR_10, VAR_11,
  VAR_9->disposition == VAR_5 ?
  "Recovered" : "Not recovered");
 VAR_12 = VAR_9->type < FUNC_0(VAR_13) ?
   VAR_13[VAR_9->type]
   : "Unknown";
 FUNC_4("%s Error detail: %s\n", VAR_10, VAR_12);
 FUNC_4("%s	HMER: %016llx\n", VAR_10, FUNC_1(VAR_9->hmer));
 if ((VAR_9->type == VAR_7) ||
  (VAR_9->type == VAR_8))
  FUNC_4("%s	TFMR: %016llx\n", VAR_10,
      FUNC_1(VAR_9->tfmr));

 if (VAR_9->version < VAR_4)
  return;


 if (VAR_9->type == VAR_6)
  FUNC_3(VAR_10, VAR_9);
}
