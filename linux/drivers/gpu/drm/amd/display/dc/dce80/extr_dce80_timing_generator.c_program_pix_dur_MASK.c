
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_3__ {scalar_t__ dmif; } ;
struct TYPE_4__ {TYPE_1__ offsets; } ;


 TYPE_2__* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct timing_generator *VAR_3, uint32_t VAR_4)
{
 uint64_t VAR_5;
 uint32_t VAR_6 = VAR_2
     + FUNC_0(VAR_3)->offsets.dmif;
 uint32_t VAR_7 = FUNC_2(VAR_3->ctx, VAR_6);

 if (VAR_4 == 0)
  return;

 VAR_5 = FUNC_1(10000000000ull, VAR_4);

 FUNC_4(
  VAR_7,
  VAR_5,
  VAR_0,
  VAR_1);

 FUNC_3(VAR_3->ctx, VAR_6, VAR_7);
}
