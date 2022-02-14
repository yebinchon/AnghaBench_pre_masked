
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
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,char) ;

const char *
FUNC_3(struct trace_seq *VAR_10, unsigned int VAR_11)
{
 const char *VAR_12 = FUNC_0(VAR_10);

 FUNC_1(VAR_10, "%x", VAR_11);
 if (VAR_11) {
  FUNC_1(VAR_10, "{ ");
  if (VAR_11 & VAR_0)
   FUNC_1(VAR_10, "ACTIVE ");
  if (VAR_11 & VAR_2)
   FUNC_1(VAR_10, "DMAMAP ");
  if (VAR_11 & VAR_5)
   FUNC_1(VAR_10, "IO ");
  if (VAR_11 & VAR_7)
   FUNC_1(VAR_10, "RESULT_TF ");
  if (VAR_11 & VAR_1)
   FUNC_1(VAR_10, "CLEAR_EXCL ");
  if (VAR_11 & VAR_6)
   FUNC_1(VAR_10, "QUIET ");
  if (VAR_11 & VAR_8)
   FUNC_1(VAR_10, "RETRY ");
  if (VAR_11 & VAR_4)
   FUNC_1(VAR_10, "FAILED ");
  if (VAR_11 & VAR_9)
   FUNC_1(VAR_10, "SENSE_VALID ");
  if (VAR_11 & VAR_3)
   FUNC_1(VAR_10, "EH_SCHEDULED ");
  FUNC_2(VAR_10, '}');
 }
 FUNC_2(VAR_10, 0);

 return VAR_12;
}
