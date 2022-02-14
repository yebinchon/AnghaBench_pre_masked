
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ext_int_info {int entry; int handler; int code; } ;
typedef int ext_int_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 struct ext_int_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(u16 VAR_4, ext_int_handler_t VAR_5)
{
 struct ext_int_info *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->code = VAR_4;
 VAR_6->handler = VAR_5;
 VAR_8 = FUNC_0(VAR_4);

 FUNC_3(&VAR_3, VAR_7);
 FUNC_1(&VAR_6->entry, &VAR_2[VAR_8]);
 FUNC_4(&VAR_3, VAR_7);
 return 0;
}
