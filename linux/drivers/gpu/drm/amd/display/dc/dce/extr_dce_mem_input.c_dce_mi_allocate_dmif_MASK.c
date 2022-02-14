
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mem_input {int dummy; } ;
struct TYPE_2__ {int single_head_rdreq_dmif_limit; } ;
struct dce_mem_input {TYPE_1__ wa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int const,int) ;
 struct dce_mem_input* FUNC_4 (struct mem_input*) ;
 int const FUNC_5 (int,int,int) ;

__attribute__((used)) static void FUNC_6(
 struct mem_input *VAR_7,
 uint32_t VAR_8,
 uint32_t VAR_9,
 uint32_t VAR_10,
 uint32_t VAR_11)
{
 struct dce_mem_input *VAR_12 = FUNC_4(VAR_7);
 const uint32_t VAR_13 = 10;
 uint32_t VAR_14 = FUNC_5(
   VAR_8,
   VAR_9,
   VAR_10) / VAR_13;

 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;

 VAR_17 = FUNC_0(VAR_2,
   VAR_0, &VAR_16);

 if (VAR_16 == 2)
  return;

 FUNC_1(VAR_2, VAR_17,
   VAR_0, 2);

 FUNC_3(VAR_2,
   VAR_1, 1,
   VAR_13, VAR_14);

 if (VAR_10 != 0) {
  VAR_15 = 1000000000ULL / VAR_10;

  FUNC_2(VAR_3,
   VAR_6, VAR_15);
 }

 if (VAR_12->wa.single_head_rdreq_dmif_limit) {
  uint32_t VAR_18 = (VAR_11 > 1) ? 0 :
    VAR_12->wa.single_head_rdreq_dmif_limit;

  FUNC_2(VAR_5,
    VAR_4, VAR_18);
 }
}
