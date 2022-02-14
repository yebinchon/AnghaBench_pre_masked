
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int status; int mcgstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const char *FUNC_0(struct mce *VAR_4)
{
 if (VAR_4->status & VAR_3) {
  if (VAR_4->status & VAR_2)
   return "System Fatal error.";
  if (VAR_4->mcgstatus & VAR_0)
   return "Uncorrected, software restartable error.";
  return "Uncorrected, software containable error.";
 }

 if (VAR_4->status & VAR_1)
  return "Deferred error, no action required.";

 return "Corrected error, no action required.";
}
