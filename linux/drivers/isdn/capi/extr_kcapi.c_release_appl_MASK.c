
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct capi_ctr {int (* release_appl ) (struct capi_ctr*,int ) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct capi_ctr*) ;
 int FUNC_2 (struct capi_ctr*,int ) ;

__attribute__((used)) static void FUNC_3(struct capi_ctr *VAR_0, u16 VAR_1)
{
 FUNC_0("applid %#x", VAR_1);

 VAR_0->release_appl(VAR_0, VAR_1);
 FUNC_1(VAR_0);
}
