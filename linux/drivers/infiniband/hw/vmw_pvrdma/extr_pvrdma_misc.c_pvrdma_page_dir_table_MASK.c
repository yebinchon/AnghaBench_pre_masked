
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvrdma_page_dir {int ** tables; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static u64 *FUNC_1(struct pvrdma_page_dir *VAR_0, u64 VAR_1)
{
 return VAR_0->tables[FUNC_0(VAR_1)];
}
