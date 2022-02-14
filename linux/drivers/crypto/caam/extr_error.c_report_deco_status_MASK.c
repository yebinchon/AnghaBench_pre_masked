
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct device {int dummy; } ;
typedef int err_err_code ;
struct TYPE_3__ {scalar_t__ value; char* error_text; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct device*,char*,int const,char const*,char*,scalar_t__,char const*,char*) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6, const u32 VAR_7,
         const char *VAR_8)
{
 u8 VAR_9 = VAR_7 & VAR_1;
 u8 VAR_10 = (VAR_7 & VAR_2) >>
    VAR_3;
 char *VAR_11;
 const char *VAR_12 = "unidentified error value 0x";
 char VAR_13[3] = { 0 };
 int VAR_14;

 if (VAR_7 & VAR_4)
  VAR_11 = "jump tgt desc idx";
 else
  VAR_11 = "desc idx";

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++)
  if (VAR_5[VAR_14].value == VAR_9)
   break;

 if (VAR_14 != FUNC_0(VAR_5) && VAR_5[VAR_14].error_text)
  VAR_12 = VAR_5[VAR_14].error_text;
 else
  FUNC_2(VAR_13, sizeof(VAR_13), "%02x", VAR_9);

 FUNC_1(VAR_6, "%08x: %s: %s %d: %s%s\n",
  VAR_7, VAR_8, VAR_11, VAR_10, VAR_12, VAR_13);

 return -VAR_0;
}
