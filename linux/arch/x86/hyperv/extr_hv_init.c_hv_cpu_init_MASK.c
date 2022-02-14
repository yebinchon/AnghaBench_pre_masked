
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct hv_vp_assist_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hv_vp_assist_page* FUNC_0 (int ,int,int ) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 struct hv_vp_assist_page** VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (struct page*) ;
 size_t FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct hv_vp_assist_page*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_12)
{
 u64 VAR_13;
 struct hv_vp_assist_page **VAR_14 = &VAR_9[FUNC_4()];
 void **VAR_15;
 struct page *VAR_16;

 VAR_15 = (void **)FUNC_5(VAR_11);
 VAR_16 = FUNC_1(VAR_1);
 if (FUNC_6(!VAR_16))
  return -VAR_0;
 *VAR_15 = FUNC_3(VAR_16);

 FUNC_2(VAR_13);

 VAR_10[FUNC_4()] = VAR_13;

 if (VAR_13 > VAR_8)
  VAR_8 = VAR_13;

 if (!VAR_9)
  return 0;
 if (!*VAR_14) {
  *VAR_14 = FUNC_0(VAR_6, VAR_1 | VAR_7,
     VAR_5);
 }

 if (*VAR_14) {
  u64 VAR_17;

  VAR_17 = FUNC_7(*VAR_14);
  VAR_17 = (VAR_17 << VAR_3) |
   VAR_4;

  FUNC_8(VAR_2, VAR_17);
 }

 return 0;
}
