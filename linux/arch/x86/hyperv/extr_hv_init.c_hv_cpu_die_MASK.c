
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hv_reenlightenment_control {scalar_t__ target_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned long) ;
 int * VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_7)
{
 struct hv_reenlightenment_control VAR_8;
 unsigned int VAR_9;
 unsigned long VAR_10;
 void **VAR_11;
 void *VAR_12 = ((void*)0);

 FUNC_3(VAR_10);
 VAR_11 = (void **)FUNC_5(VAR_6);
 VAR_12 = *VAR_11;
 *VAR_11 = ((void*)0);
 FUNC_2(VAR_10);
 FUNC_1((unsigned long)VAR_12);

 if (VAR_4 && VAR_4[VAR_7])
  FUNC_6(VAR_1, 0);

 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_4(VAR_0, *((u64 *)&VAR_8));
 if (VAR_8.target_vp == VAR_5[VAR_7]) {

  VAR_9 = FUNC_0(VAR_2, VAR_7);

  VAR_8.target_vp = VAR_5[VAR_9];
  FUNC_6(VAR_0, *((u64 *)&VAR_8));
 }

 return 0;
}
