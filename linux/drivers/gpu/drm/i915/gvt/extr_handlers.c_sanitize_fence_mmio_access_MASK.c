
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int pv_notified; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_vgpu*,int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (void*,int ,unsigned int) ;
 unsigned int FUNC_3 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_2,
  unsigned int VAR_3, void *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = FUNC_3(VAR_2);

 if (VAR_3 >= VAR_6) {
  FUNC_1("access oob fence reg %d/%d\n",
        VAR_3, VAR_6);





  if (!VAR_2->pv_notified)
   FUNC_0(VAR_2,
     VAR_1);

  FUNC_2(VAR_4, 0, VAR_5);
  return -VAR_0;
 }
 return 0;
}
