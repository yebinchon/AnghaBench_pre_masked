
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint32_t ;
struct mem_input {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_0 (int ,unsigned long long) ;
 int FUNC_1 (int ,unsigned long long,unsigned long long) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int FUNC_2 (unsigned long long,unsigned long long,int ,int ) ;

void FUNC_3(
 struct mem_input *VAR_7,
 uint32_t VAR_8,
 uint32_t VAR_9,
 uint32_t VAR_10,
 uint32_t VAR_11)
{
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 if (VAR_10 != 0) {
  VAR_12 = VAR_3;
  VAR_13 = FUNC_0(VAR_7->ctx, VAR_12);
  VAR_14 = 1000000000ULL / VAR_10;
  FUNC_2(
   VAR_13,
   VAR_14,
   VAR_0,
   VAR_2);
  FUNC_1(VAR_7->ctx, VAR_12, VAR_13);

  VAR_12 = VAR_5;
  VAR_13 = FUNC_0(VAR_7->ctx, VAR_12);
  VAR_14 = 1000000000ULL / VAR_10;
  FUNC_2(
   VAR_13,
   VAR_14,
   VAR_1,
   VAR_2);
  FUNC_1(VAR_7->ctx, VAR_12, VAR_13);

  VAR_12 = VAR_4;
  VAR_13 = 0x4000800;
  FUNC_1(VAR_7->ctx, VAR_12, VAR_13);

  VAR_12 = VAR_6;
  VAR_13 = 0x4000800;
  FUNC_1(VAR_7->ctx, VAR_12, VAR_13);
 }

}
