
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*) ;
 int FUNC_2 (struct trace_seq*,char) ;

const char *
FUNC_3(struct trace_seq *VAR_8, unsigned char VAR_9)
{
 const char *VAR_10 = FUNC_0(VAR_8);

 FUNC_1(VAR_8, "{ ");
 if (VAR_9 & VAR_0)
  FUNC_1(VAR_8, "BUSY ");
 if (VAR_9 & VAR_3)
  FUNC_1(VAR_8, "DRDY ");
 if (VAR_9 & VAR_2)
  FUNC_1(VAR_8, "DF ");
 if (VAR_9 & VAR_5)
  FUNC_1(VAR_8, "DSC ");
 if (VAR_9 & VAR_4)
  FUNC_1(VAR_8, "DRQ ");
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_8, "CORR ");
 if (VAR_9 & VAR_7)
  FUNC_1(VAR_8, "SENSE ");
 if (VAR_9 & VAR_6)
  FUNC_1(VAR_8, "ERR ");
 FUNC_2(VAR_8, '}');
 FUNC_2(VAR_8, 0);

 return VAR_10;
}
