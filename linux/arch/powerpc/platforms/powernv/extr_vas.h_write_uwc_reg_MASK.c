
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vas_window {void* uwc_map; } ;
typedef int s32 ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct vas_window*,char*,void*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct vas_window *VAR_0, char *VAR_1,
   s32 VAR_2, u64 VAR_3)
{
 void *VAR_4;

 VAR_4 = VAR_0->uwc_map + VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);

 FUNC_0(VAR_4, VAR_3);
}
