
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int sgt; } ;
typedef int gfp_t ;


 int FUNC_0 (struct hsi_msg*) ;
 struct hsi_msg* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int) ;

struct hsi_msg *FUNC_4(unsigned int VAR_0, gfp_t VAR_1)
{
 struct hsi_msg *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 if (!VAR_0)
  return VAR_2;

 VAR_3 = FUNC_2(&VAR_2->sgt, VAR_0, VAR_1);
 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
