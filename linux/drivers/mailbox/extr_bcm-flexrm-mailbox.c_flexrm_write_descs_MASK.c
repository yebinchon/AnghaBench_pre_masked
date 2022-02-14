
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcm_message {int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct brcm_message*,int ,int ,void*,int ,void*,void*) ;
 void* FUNC_2 (struct brcm_message*,int ,int ,void*,int ,void*,void*) ;

__attribute__((used)) static void *FUNC_3(struct brcm_message *VAR_2, u32 VAR_3,
    u32 VAR_4, void *VAR_5, u32 VAR_6,
    void *VAR_7, void *VAR_8)
{
 if (!VAR_2 || !VAR_5 || !VAR_7 || !VAR_8)
  return FUNC_0(-VAR_0);

 if ((VAR_5 < VAR_7) || (VAR_8 <= VAR_5))
  return FUNC_0(-VAR_1);

 switch (VAR_2->type) {
 case 128:
  return FUNC_2(VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6,
            VAR_7, VAR_8);
 case 129:
  return FUNC_1(VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6,
            VAR_7, VAR_8);
 default:
  return FUNC_0(-VAR_0);
 };
}
