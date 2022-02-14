
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct siw_sge {scalar_t__ length; int lkey; scalar_t__ laddr; } ;
struct siw_mem {int stag; } ;
struct siw_device {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_access_flags { ____Placeholder_ib_access_flags } ib_access_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_pd*,struct siw_mem*,scalar_t__,int,int) ;
 int FUNC_1 (struct siw_mem*,char*,int) ;
 int FUNC_2 (struct ib_pd*,char*,int) ;
 struct siw_mem* FUNC_3 (struct siw_device*,int) ;
 int FUNC_4 (struct siw_mem*) ;
 struct siw_device* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ib_pd *VAR_3, struct siw_sge *VAR_4, struct siw_mem *VAR_5[],
    enum ib_access_flags VAR_6, u32 VAR_7, int VAR_8)
{
 struct siw_device *VAR_9 = FUNC_5(VAR_3->device);
 struct siw_mem *VAR_10 = ((void*)0);
 int VAR_11 = VAR_0;

 if (VAR_8 + VAR_7 > VAR_4->length) {
  VAR_11 = -VAR_1;
  goto fail;
 }
 if (*VAR_5 == ((void*)0)) {
  VAR_10 = FUNC_3(VAR_9, VAR_4->lkey >> 8);
  if (FUNC_6(!VAR_10)) {
   FUNC_2(VAR_3, "STag unknown: 0x%08x\n", VAR_4->lkey);
   VAR_11 = -VAR_2;
   goto fail;
  }
  *VAR_5 = VAR_10;
 }

 if (FUNC_6((*VAR_5)->stag != VAR_4->lkey)) {
  FUNC_1((*VAR_5), "STag mismatch: 0x%08x\n", VAR_4->lkey);
  VAR_11 = -VAR_2;
  goto fail;
 }
 VAR_11 = FUNC_0(VAR_3, *VAR_5, VAR_4->laddr + VAR_7, VAR_6, VAR_8);
 if (FUNC_6(VAR_11))
  goto fail;

 return 0;

fail:
 if (VAR_10) {
  *VAR_5 = ((void*)0);
  FUNC_4(VAR_10);
 }
 return VAR_11;
}
