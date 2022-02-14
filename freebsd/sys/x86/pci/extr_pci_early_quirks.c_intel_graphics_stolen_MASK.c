
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct intel_stolen_ops {int (* size ) (int const,int const,int const) ;int (* base ) (int const,int const,int const) ;} ;
struct TYPE_3__ {scalar_t__ device; struct intel_stolen_ops* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int const,int const,int const,int ,int) ;
 int FUNC_3 (int const,int const,int const) ;
 int FUNC_4 (int const,int const,int const) ;

__attribute__((used)) static void
FUNC_5(void)
{
 const struct intel_stolen_ops *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 int VAR_12;


 const int VAR_13 = 0;
 const int VAR_14 = 2;
 const int VAR_15 = 0;

 if (FUNC_1() == 0)
  return;

 VAR_9 = FUNC_2(VAR_13, VAR_14, VAR_15, VAR_2, 2);
 if (VAR_9 != VAR_4)
  return;

 VAR_11 = FUNC_2(VAR_13, VAR_14, VAR_15, VAR_1, 2);
 if (VAR_11 != VAR_3)
  return;

 VAR_10 = FUNC_2(VAR_13, VAR_14, VAR_15, VAR_0, 2);
 if (VAR_10 == 0xFFFF)
  return;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7); VAR_12++) {
  if (VAR_7[VAR_12].device != VAR_10)
   continue;
  VAR_8 = VAR_7[VAR_12].data;
  VAR_5 = VAR_8->base(VAR_13, VAR_14, VAR_15);
  VAR_6 = VAR_8->size(VAR_13, VAR_14, VAR_15);
  break;
 }




}
