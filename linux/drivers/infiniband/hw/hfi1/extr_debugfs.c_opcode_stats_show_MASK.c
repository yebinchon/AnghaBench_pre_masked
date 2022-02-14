
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, u8 VAR_2, u64 VAR_3, u64 VAR_4)
{
 if (!VAR_3 && !VAR_4)
  return VAR_0;
 FUNC_0(VAR_1, "%02x %llu/%llu\n", VAR_2,
     (unsigned long long)VAR_3,
     (unsigned long long)VAR_4);

 return 0;
}
