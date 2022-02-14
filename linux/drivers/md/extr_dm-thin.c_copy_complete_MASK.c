
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_new_mapping {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_1(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct dm_thin_new_mapping *VAR_4 = VAR_3;

 VAR_4->status = VAR_1 || VAR_2 ? VAR_0 : 0;
 FUNC_0(VAR_4);
}
