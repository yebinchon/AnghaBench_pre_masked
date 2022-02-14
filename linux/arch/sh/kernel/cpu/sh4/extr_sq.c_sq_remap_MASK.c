
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sq_mapping {unsigned long addr; unsigned int size; char const* name; unsigned long sq_addr; } ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sq_mapping*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_8 ;
 struct sq_mapping* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sq_mapping*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,unsigned int,char*,unsigned long,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct sq_mapping*) ;
 scalar_t__ FUNC_9 (int) ;
 unsigned long FUNC_10 (int ) ;

unsigned long FUNC_11(unsigned long VAR_11, unsigned int VAR_12,
         const char *VAR_13, pgprot_t VAR_14)
{
 struct sq_mapping *VAR_15;
 unsigned long VAR_16;
 unsigned int VAR_17;
 int VAR_18, VAR_19;


 VAR_16 = VAR_11 + VAR_12 - 1;
 if (FUNC_9(!VAR_12 || VAR_16 < VAR_11))
  return -VAR_0;

 if (FUNC_9(VAR_11 < FUNC_10(VAR_8)))
  return -VAR_0;

 VAR_11 &= VAR_5;
 VAR_12 = FUNC_0(VAR_16 + 1) - VAR_11;

 VAR_15 = FUNC_4(VAR_10, VAR_3);
 if (FUNC_9(!VAR_15))
  return -VAR_1;

 VAR_15->addr = VAR_11;
 VAR_15->size = VAR_12;
 VAR_15->name = VAR_13;

 VAR_19 = FUNC_2(VAR_9, 0x04000000 >> VAR_6,
           FUNC_3(VAR_15->size));
 if (FUNC_9(VAR_19 < 0)) {
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_15->sq_addr = VAR_4 + (VAR_19 << VAR_6);

 VAR_18 = FUNC_1(VAR_15, VAR_14);
 if (FUNC_9(VAR_18 != 0))
  goto out;

 VAR_17 = (VAR_12 + (VAR_7 - 1)) >> VAR_6;
 FUNC_7("sqremap: %15s  [%4d page%s]  va 0x%08lx   pa 0x%08lx\n",
  FUNC_6(VAR_15->name) ? VAR_15->name : "???",
  VAR_17, VAR_17 == 1 ? " " : "s",
  VAR_15->sq_addr, VAR_15->addr);

 FUNC_8(VAR_15);

 return VAR_15->sq_addr;

out:
 FUNC_5(VAR_10, VAR_15);
 return VAR_18;
}
