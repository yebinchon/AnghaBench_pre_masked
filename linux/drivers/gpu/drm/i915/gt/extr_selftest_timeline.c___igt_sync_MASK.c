
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_timeline {int dummy; } ;
struct __igt_sync {scalar_t__ expected; int seqno; scalar_t__ set; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_timeline*,int ,int ) ;
 int FUNC_1 (struct intel_timeline*,int ,int ) ;
 int FUNC_2 (char*,char const*,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct intel_timeline *VAR_1,
        u64 VAR_2,
        const struct __igt_sync *VAR_3,
        const char *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_1, VAR_2, VAR_3->seqno) != VAR_3->expected) {
  FUNC_2("%s: %s(ctx=%llu, seqno=%u) expected passed %s but failed\n",
         VAR_4, VAR_3->name, VAR_2, VAR_3->seqno, FUNC_3(VAR_3->expected));
  return -VAR_0;
 }

 if (VAR_3->set) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3->seqno);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
