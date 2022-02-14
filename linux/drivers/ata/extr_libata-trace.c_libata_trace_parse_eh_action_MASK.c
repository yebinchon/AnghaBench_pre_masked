
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,char) ;

const char *
FUNC_3(struct trace_seq *VAR_5, unsigned int VAR_6)
{
 const char *VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_5, "%x", VAR_6);
 if (VAR_6) {
  FUNC_1(VAR_5, "{ ");
  if (VAR_6 & VAR_3)
   FUNC_1(VAR_5, "REVALIDATE ");
  if (VAR_6 & (VAR_4 | VAR_1))
   FUNC_1(VAR_5, "RESET ");
  else if (VAR_6 & VAR_4)
   FUNC_1(VAR_5, "SOFTRESET ");
  else if (VAR_6 & VAR_1)
   FUNC_1(VAR_5, "HARDRESET ");
  if (VAR_6 & VAR_0)
   FUNC_1(VAR_5, "ENABLE_LINK ");
  if (VAR_6 & VAR_2)
   FUNC_1(VAR_5, "PARK ");
  FUNC_2(VAR_5, '}');
 }
 FUNC_2(VAR_5, 0);

 return VAR_7;
}
