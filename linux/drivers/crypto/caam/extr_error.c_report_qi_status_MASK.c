
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
typedef int err_err_code ;
struct TYPE_3__ {scalar_t__ value; char* error_text; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (struct device*,char*,scalar_t__ const,char const*,char const*,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, const u32 VAR_4,
       const char *VAR_5)
{
 u8 VAR_6 = VAR_4 & VAR_1;
 const char *VAR_7 = "unidentified error value 0x";
 char VAR_8[3] = { 0 };
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++)
  if (VAR_2[VAR_9].value == VAR_6)
   break;

 if (VAR_9 != FUNC_0(VAR_2) && VAR_2[VAR_9].error_text)
  VAR_7 = VAR_2[VAR_9].error_text;
 else
  FUNC_2(VAR_8, sizeof(VAR_8), "%02x", VAR_6);

 FUNC_1(VAR_3, "%08x: %s: %s%s\n",
  VAR_4, VAR_5, VAR_7, VAR_8);

 return -VAR_0;
}
