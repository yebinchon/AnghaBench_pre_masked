
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sgl; } ;
struct hsi_msg {TYPE_1__ sgt; } ;


 int VAR_0 ;
 struct hsi_msg* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hsi_msg*) ;
 void* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void*,unsigned int) ;

__attribute__((used)) static inline struct hsi_msg *FUNC_5(unsigned int VAR_1)
{
 struct hsi_msg *VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_0(1, VAR_0);
 if (!VAR_2)
  goto out;
 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_3) {
  FUNC_1(VAR_2);
  goto out;
 }
 FUNC_4(VAR_2->sgt.sgl, VAR_3, VAR_1);

 FUNC_3(VAR_3);

 return VAR_2;
out:
 return ((void*)0);
}
