
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 scalar_t__ FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_10)
{
 u64 VAR_11, VAR_12;
 u32 VAR_13;

 if (VAR_10->icode != VAR_9)
  return;
 if (FUNC_2(VAR_10))
  return;


 VAR_13 = FUNC_0(VAR_10);
 if (!FUNC_1(VAR_10))
  VAR_13 = 0x2d;

 if (VAR_13 <= 0x12) {







  VAR_11 =
        0xaull << VAR_4
      | 0x9ull << VAR_5
      | 0x9ull << VAR_6;




  VAR_12 = 6ull << VAR_8;
 } else if (VAR_13 <= 0x18) {


  VAR_11 =
        0x9ull << VAR_4
      | 0x8ull << VAR_5
      | 0x8ull << VAR_6;
  VAR_12 = 7ull << VAR_8;
 } else if (VAR_13 == 0x19) {


  VAR_11 =
        0xAull << VAR_4
      | 0x9ull << VAR_5
      | 0x9ull << VAR_6;
  VAR_12 = 3ull << VAR_8;
 } else if (VAR_13 == 0x1a) {


  VAR_11 =
        0x9ull << VAR_4
      | 0x8ull << VAR_5
      | 0x8ull << VAR_6;
  VAR_12 = 7ull << VAR_8;
  FUNC_3(VAR_10, VAR_2, 1ull);
 } else {


  VAR_11 =
        0x8ull << VAR_4
      | 0x7ull << VAR_5
      | 0x7ull << VAR_6;
  VAR_12 = 3ull << VAR_8;
 }

 FUNC_3(VAR_10, VAR_3, VAR_11);

 FUNC_3(VAR_10, VAR_0,
    VAR_1);
 FUNC_3(VAR_10, VAR_7, VAR_12);
}
