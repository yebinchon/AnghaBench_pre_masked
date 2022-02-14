
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__* ramc; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_4, VAR_5 = 0;
 u32 VAR_6, VAR_7 = 0;

 if (VAR_3.data.ramc[1]) {
  VAR_7 = FUNC_0(1, VAR_2);
  VAR_5 = VAR_7 & ~VAR_0;
  VAR_5 |= VAR_1;
 }

 VAR_6 = FUNC_0(0, VAR_2);
 VAR_4 = VAR_6 & ~VAR_0;
 VAR_4 |= VAR_1;


 FUNC_1(0, VAR_2, VAR_4);
 if (VAR_3.data.ramc[1])
  FUNC_1(1, VAR_2, VAR_5);

 FUNC_2();

 FUNC_1(0, VAR_2, VAR_6);
 if (VAR_3.data.ramc[1])
  FUNC_1(1, VAR_2, VAR_7);
}
