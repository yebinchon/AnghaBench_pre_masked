
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union voltage_object_info {int v3; } ;
typedef int u8 ;
typedef int u16 ;
typedef int ATOM_VOLTAGE_OBJECT_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*,int,int *,int *,int *) ;

__attribute__((used)) static ATOM_VOLTAGE_OBJECT_INFO *FUNC_2(void *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_4, VAR_5;
 u16 VAR_6;
 union voltage_object_info *VAR_7;

 VAR_7 = (union voltage_object_info *)
  FUNC_1(VAR_2, VAR_3,
   &VAR_6, &VAR_4, &VAR_5);

 if (VAR_7 != ((void*)0))
  return (ATOM_VOLTAGE_OBJECT_INFO *) &(VAR_7->v3);
 else
  return ((void*)0);
}
