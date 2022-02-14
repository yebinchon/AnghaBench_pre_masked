
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uv_systab {int function; } ;
typedef int s64 ;
typedef enum uv_bios_cmd { ____Placeholder_uv_bios_cmd } uv_bios_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct uv_systab*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 struct uv_systab* VAR_3 ;

__attribute__((used)) static s64 FUNC_5(enum uv_bios_cmd VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7,
   u64 VAR_8, u64 VAR_9)
{
 struct uv_systab *VAR_10 = VAR_3;
 s64 VAR_11;

 if (!VAR_10 || !VAR_10->function)



  return VAR_0;





 if (FUNC_4(FUNC_3(VAR_1)))
  VAR_11 = FUNC_1((void *)FUNC_0(VAR_10->function), (u64)VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  VAR_11 = FUNC_2(VAR_10, VAR_2, (u64)VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 return VAR_11;
}
