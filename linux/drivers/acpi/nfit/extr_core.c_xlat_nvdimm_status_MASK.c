
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm {int dummy; } ;
struct nfit_mem {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfit_mem* FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nvdimm *VAR_6, void *VAR_7, unsigned int VAR_8,
  u32 VAR_9)
{
 struct nfit_mem *VAR_10 = FUNC_0(VAR_6);

 switch (VAR_8) {
 case 129:




  if (FUNC_1(VAR_4, &VAR_10->flags))
   break;

  if (VAR_9 >> 16 & VAR_3)
   return -VAR_1;
  break;
 case 130:
  if (FUNC_1(VAR_4, &VAR_10->flags)
    && VAR_9 == VAR_0)
   return -VAR_1;
  break;
 case 128:
  if (FUNC_1(VAR_5, &VAR_10->flags)
    && VAR_9 == VAR_0)
   return -VAR_1;
  break;
 default:
  break;
 }


 if (VAR_9)
  return -VAR_2;
 return 0;
}
