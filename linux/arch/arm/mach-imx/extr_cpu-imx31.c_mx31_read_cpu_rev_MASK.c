
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int srev; char* name; int rev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(void)
{
 u32 VAR_4, VAR_5;


 VAR_5 = FUNC_3(FUNC_1(VAR_1 + VAR_2));
 VAR_5 &= 0xff;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
  if (VAR_5 == VAR_3[VAR_4].srev) {
   FUNC_2(VAR_3[VAR_4].name,
      VAR_3[VAR_4].rev);
   return VAR_3[VAR_4].rev;
  }

 FUNC_2("i.MX31", VAR_0);
 return VAR_0;
}
