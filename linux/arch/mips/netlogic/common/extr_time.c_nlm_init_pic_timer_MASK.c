
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_7__ {int rating; int read; void* mask; } ;
struct TYPE_6__ {scalar_t__ cputype; } ;
struct TYPE_5__ {int picbase; } ;


 void* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,unsigned long long,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 uint64_t VAR_6 = FUNC_2(0)->picbase;
 u32 VAR_7;

 FUNC_3(VAR_6, VAR_1, ~0ULL, 0, 0);
 if (VAR_3.cputype == VAR_0) {
  VAR_2.mask = FUNC_0(32);
  VAR_2.read = VAR_5;
 } else {
  VAR_2.mask = FUNC_0(64);
  VAR_2.read = VAR_4;
 }
 VAR_2.rating = 1000;
 VAR_7 = FUNC_4();
 FUNC_1(&VAR_2, VAR_7);
 FUNC_5("PIC clock source added, frequency %d\n", VAR_7);
}
