
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct intel_timeline {int dummy; } ;
struct __igt_sync {char* member_0; int member_1; int member_2; int member_3; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct intel_timeline*,scalar_t__,struct __igt_sync const*,char*) ;
 int FUNC_2 (struct intel_timeline*) ;
 int FUNC_3 (struct intel_timeline*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 const struct __igt_sync VAR_4[] = {
  { "unset", 0, 0, 0 },
  { "new", 0, 0, 1 },
  { "0a", 0, 1, 1 },
  { "1a", 1, 0, 1 },
  { "1b", 1, 1, 1 },
  { "0b", 0, 1, 0 },
  { "2a", 2, 0, 1 },
  { "4", 4, 0, 1 },
  { "INT_MAX", VAR_1, 0, 1 },
  { "INT_MAX-1", VAR_1-1, 1, 0 },
  { "INT_MAX+1", (u32)VAR_1+1, 0, 1 },
  { "INT_MAX", VAR_1, 1, 0 },
  { "UINT_MAX", VAR_2, 0, 1 },
  { "wrap", 0, 0, 1 },
  { "unwrap", VAR_2, 1, 0 },
  {},
 }, *VAR_5;
 struct intel_timeline VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_3(&VAR_6, 0);
 for (VAR_5 = VAR_4; VAR_5->name; VAR_5++) {
  for (VAR_7 = 1; VAR_7 < 64; VAR_7++) {
   for (VAR_8 = -1; VAR_8 <= (VAR_7 > 1); VAR_8++) {
    u64 VAR_10 = FUNC_0(VAR_7) + VAR_8;

    VAR_9 = FUNC_1(&VAR_6, VAR_10, VAR_5, "1");
    if (VAR_9)
     goto out;
   }
  }
 }
 FUNC_2(&VAR_6);

 FUNC_3(&VAR_6, 0);
 for (VAR_7 = 1; VAR_7 < 64; VAR_7++) {
  for (VAR_8 = -1; VAR_8 <= (VAR_7 > 1); VAR_8++) {
   u64 VAR_11 = FUNC_0(VAR_7) + VAR_8;

   for (VAR_5 = VAR_4; VAR_5->name; VAR_5++) {
    VAR_9 = FUNC_1(&VAR_6, VAR_11, VAR_5, "2");
    if (VAR_9)
     goto out;
   }
  }
 }

out:
 FUNC_2(&VAR_6);
 return VAR_9;
}
