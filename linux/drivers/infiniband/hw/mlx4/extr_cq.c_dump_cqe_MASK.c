
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 __be32 *VAR_1 = VAR_0;

 FUNC_1("CQE contents %08x %08x %08x %08x %08x %08x %08x %08x\n",
        FUNC_0(VAR_1[0]), FUNC_0(VAR_1[1]), FUNC_0(VAR_1[2]),
        FUNC_0(VAR_1[3]), FUNC_0(VAR_1[4]), FUNC_0(VAR_1[5]),
        FUNC_0(VAR_1[6]), FUNC_0(VAR_1[7]));
}
