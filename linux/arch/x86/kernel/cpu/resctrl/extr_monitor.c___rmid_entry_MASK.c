
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rmid_entry {size_t rmid; } ;


 int FUNC_0 (int) ;
 struct rmid_entry* VAR_0 ;

__attribute__((used)) static inline struct rmid_entry *FUNC_1(u32 VAR_1)
{
 struct rmid_entry *VAR_2;

 VAR_2 = &VAR_0[VAR_1];
 FUNC_0(VAR_2->rmid != VAR_1);

 return VAR_2;
}
