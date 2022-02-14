
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hideep_ts {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (struct hideep_ts*) ;
 int FUNC_5 (struct hideep_ts*,int,int const*,size_t) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct hideep_ts *VAR_5, u32 VAR_6,
          const __be32 *VAR_7, size_t VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return -VAR_0;

 VAR_6 &= ~(VAR_2 - 1);

 FUNC_1(0);
 FUNC_1(1);


 FUNC_2(VAR_3 | VAR_6, 0xFFFFFFFF);

 FUNC_1(0);

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return -VAR_0;


 FUNC_1(1);

 VAR_9 = FUNC_3(VAR_7[0]);
 FUNC_2(VAR_4 | VAR_6, VAR_9);

 FUNC_5(VAR_5, VAR_1 | VAR_4,
    VAR_7, VAR_8);

 VAR_9 = FUNC_3(VAR_7[VAR_8 - 1]);
 FUNC_2(124, VAR_9);

 FUNC_1(0);

 FUNC_6(1000, 1100);

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10)
  return -VAR_0;

 FUNC_0();

 return 0;
}
