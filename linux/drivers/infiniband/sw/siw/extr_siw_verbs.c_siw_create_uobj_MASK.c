
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xa_limit {int dummy; } ;
struct siw_uobj {void* addr; int size; } ;
struct siw_ucontext {int uobj_nextkey; int xa; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct xa_limit FUNC_1 (int ,int ) ;
 int FUNC_2 (struct siw_uobj*) ;
 struct siw_uobj* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,int *,struct siw_uobj*,struct xa_limit,int *,int ) ;

__attribute__((used)) static u32 FUNC_5(struct siw_ucontext *VAR_3, void *VAR_4, u32 VAR_5)
{
 struct siw_uobj *VAR_6;
 struct xa_limit VAR_7 = FUNC_1(0, VAR_2);
 u32 VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return VAR_1;

 if (FUNC_4(&VAR_3->xa, &VAR_8, VAR_6, VAR_7, &VAR_3->uobj_nextkey,
       VAR_0) < 0) {
  FUNC_2(VAR_6);
  return VAR_1;
 }
 VAR_6->size = FUNC_0(VAR_5);
 VAR_6->addr = VAR_4;

 return VAR_8;
}
