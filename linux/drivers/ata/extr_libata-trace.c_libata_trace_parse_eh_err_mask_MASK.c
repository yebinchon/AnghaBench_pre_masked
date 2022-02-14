
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
 unsigned int VAR_10 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,char) ;

const char *
FUNC_3(struct trace_seq *VAR_11, unsigned int VAR_12)
{
 const char *VAR_13 = FUNC_0(VAR_11);

 FUNC_1(VAR_11, "%x", VAR_12);
 if (VAR_12) {
  FUNC_1(VAR_11, "{ ");
  if (VAR_12 & VAR_1)
   FUNC_1(VAR_11, "DEV ");
  if (VAR_12 & VAR_3)
   FUNC_1(VAR_11, "HSM ");
  if (VAR_12 & VAR_10)
   FUNC_1(VAR_11, "TIMEOUT ");
  if (VAR_12 & VAR_5)
   FUNC_1(VAR_11, "MEDIA ");
  if (VAR_12 & VAR_0)
   FUNC_1(VAR_11, "ATA_BUS ");
  if (VAR_12 & VAR_2)
   FUNC_1(VAR_11, "HOST_BUS ");
  if (VAR_12 & VAR_9)
   FUNC_1(VAR_11, "SYSTEM ");
  if (VAR_12 & VAR_4)
   FUNC_1(VAR_11, "INVALID ");
  if (VAR_12 & VAR_8)
   FUNC_1(VAR_11, "OTHER ");
  if (VAR_12 & VAR_7)
   FUNC_1(VAR_11, "NODEV_HINT ");
  if (VAR_12 & VAR_6)
   FUNC_1(VAR_11, "NCQ ");
  FUNC_2(VAR_11, '}');
 }
 FUNC_2(VAR_11, 0);

 return VAR_13;
}
