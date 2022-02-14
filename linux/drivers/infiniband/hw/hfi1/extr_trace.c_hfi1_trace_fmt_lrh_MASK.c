
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* u8 ;
typedef char const* u32 ;
typedef char const* u16 ;
struct trace_seq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,int ,char const*,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(struct trace_seq *VAR_3, bool VAR_4,
          u8 VAR_5, bool VAR_6, bool VAR_7, u8 VAR_8,
          u8 VAR_9, const char *VAR_10, u8 VAR_11,
          u8 VAR_12, u8 VAR_13, u8 VAR_14, u16 VAR_15,
          u16 VAR_16, u16 VAR_17, u32 VAR_18, u32 VAR_19)
{
 const char *VAR_20 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, VAR_2, VAR_16, VAR_13, VAR_18, VAR_19);

 if (VAR_4)
  FUNC_1(VAR_3, VAR_0,
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_12, VAR_13, VAR_17, VAR_15);

 else
  FUNC_1(VAR_3, VAR_1,
     VAR_9, VAR_10, VAR_11, VAR_14);
 FUNC_2(VAR_3, 0);

 return VAR_20;
}
