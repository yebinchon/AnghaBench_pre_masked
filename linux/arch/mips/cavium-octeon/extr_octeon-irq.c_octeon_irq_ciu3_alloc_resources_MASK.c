
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct octeon_ciu3_info {scalar_t__ ciu3_addr; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int VAR_0 ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct octeon_ciu3_info *VAR_4)
{
 u64 VAR_5 = VAR_4->ciu3_addr;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = FUNC_6();
 int VAR_11;

 FUNC_5(VAR_1, VAR_4);





 VAR_6 = VAR_10 * 4 + 1;
 VAR_7 = VAR_10 * 4 + 2;
 VAR_8 = VAR_10 * 4 + 3;
 VAR_9 = VAR_10 * 4 + 4;
 FUNC_5(VAR_2, VAR_6);
 FUNC_5(VAR_3, VAR_7);


 FUNC_7(VAR_5 + FUNC_0(VAR_6), 0);
 FUNC_7(VAR_5 + FUNC_2(VAR_6, 0), 1ull << VAR_10);
 FUNC_7(VAR_5 + FUNC_1(VAR_6), 0);


 FUNC_7(VAR_5 + FUNC_0(VAR_7), 1);
 FUNC_7(VAR_5 + FUNC_2(VAR_7, 0), 1ull << VAR_10);
 FUNC_7(VAR_5 + FUNC_1(VAR_7), 0);


 FUNC_7(VAR_5 + FUNC_0(VAR_8), 2);
 FUNC_7(VAR_5 + FUNC_2(VAR_8, 0), 0);
 FUNC_7(VAR_5 + FUNC_1(VAR_8), 0);

 FUNC_7(VAR_5 + FUNC_0(VAR_9), 0);
 FUNC_7(VAR_5 + FUNC_2(VAR_9, 0), 0);
 FUNC_7(VAR_5 + FUNC_1(VAR_9), 0);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  unsigned int VAR_12 = FUNC_8(VAR_10, VAR_11);

  FUNC_7(VAR_5 + FUNC_4(VAR_12), 2);
  FUNC_7(VAR_5 + FUNC_3(VAR_12), 0);
 }

 return 0;
}
