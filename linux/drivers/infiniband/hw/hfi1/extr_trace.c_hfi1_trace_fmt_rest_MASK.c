
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,int ,scalar_t__,char const*,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(struct trace_seq *VAR_4, bool VAR_5, u8 VAR_6,
    u8 VAR_7, bool VAR_8, bool VAR_9, u8 VAR_10,
    u8 VAR_11, u8 VAR_12, u8 VAR_13, const char *VAR_14,
    u8 VAR_15, u16 VAR_16, u32 VAR_17, u32 VAR_18,
    u32 VAR_19, u32 VAR_20)
{
 const char *VAR_21 = FUNC_0(VAR_4);

 if (VAR_5)
  if (VAR_6 == VAR_3)
   FUNC_1(VAR_4, VAR_2,
      VAR_13, VAR_14, VAR_19, VAR_20);
  else
   FUNC_1(VAR_4, VAR_0,
      VAR_13, VAR_14,
      VAR_11, VAR_10, VAR_12, VAR_15, VAR_18, VAR_7, VAR_17);

 else
  FUNC_1(VAR_4, VAR_1,
     VAR_13, VAR_14,
     VAR_11, VAR_10, VAR_12, VAR_15, VAR_16, VAR_9, VAR_8,
     VAR_18, VAR_7, VAR_17);
 FUNC_2(VAR_4, 0);

 return VAR_21;
}
