
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_1(u64 VAR_11, u64 VAR_12, u64 VAR_13, int VAR_14)
{
 int VAR_15 = VAR_8;
 if (!(VAR_12 & ((1UL << 0) | (1UL << 1) | (1UL << 2) | (1UL << 3) | (1UL << 4))) &&
     !(VAR_11 & ((1UL << 10))))
  return VAR_9;

 if (!VAR_14)
  return VAR_15;

 if (VAR_11 & (1UL << 10))
  FUNC_0("%s    Dcache tag parity error on probe\n",
         VAR_10);
 if (VAR_12 & (1UL << 0))
  FUNC_0("%s    Dcache tag parity error - pipe 0\n",
         VAR_10);
 if (VAR_12 & (1UL << 1))
  FUNC_0("%s    Dcache tag parity error - pipe 1\n",
         VAR_10);
 if (VAR_12 & (1UL << 2))
  FUNC_0("%s    ECC error occurred on a store\n",
         VAR_10);
 if (VAR_12 & (1UL << 3))
  FUNC_0("%s    ECC error occurred on a %s load\n",
         VAR_10,
         VAR_13 ? "" : "speculative ");
 if (VAR_12 & (1UL << 4))
  FUNC_0("%s    Dcache second error\n", VAR_10);

 return VAR_15;
}
