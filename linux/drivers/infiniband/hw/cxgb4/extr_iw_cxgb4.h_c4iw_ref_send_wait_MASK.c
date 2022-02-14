
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct c4iw_wr_wait {int dummy; } ;
struct c4iw_rdev {int dummy; } ;


 int FUNC_0 (struct c4iw_wr_wait*) ;
 int FUNC_1 (struct c4iw_rdev*,struct sk_buff*) ;
 int FUNC_2 (struct c4iw_wr_wait*) ;
 int FUNC_3 (struct c4iw_rdev*,struct c4iw_wr_wait*,int ,int ,char const*) ;
 int FUNC_4 (char*,char const*,struct c4iw_wr_wait*,int ,int ) ;

__attribute__((used)) static inline int FUNC_5(struct c4iw_rdev *VAR_0,
         struct sk_buff *VAR_1,
         struct c4iw_wr_wait *VAR_2,
         u32 VAR_3, u32 VAR_4,
         const char *VAR_5)
{
 int VAR_6;

 FUNC_4("%s wr_wait %p hwtid %u qpid %u\n", VAR_5, VAR_2, VAR_3,
   VAR_4);
 FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (VAR_6) {
  FUNC_2(VAR_2);
  return VAR_6;
 }
 return FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
