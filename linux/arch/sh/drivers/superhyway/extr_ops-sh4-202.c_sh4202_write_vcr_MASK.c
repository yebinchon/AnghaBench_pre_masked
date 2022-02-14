
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct superhyway_vcr_info {int dummy; } ;


 int FUNC_0 (int,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0, struct superhyway_vcr_info VAR_1)
{
 u64 VAR_2 = *(u64 *)&VAR_1;

 FUNC_0((VAR_2 >> 32) & 0xffffffff, VAR_0);
 FUNC_0(VAR_2 & 0xffffffff, VAR_0 + sizeof(u32));

 return 0;
}
