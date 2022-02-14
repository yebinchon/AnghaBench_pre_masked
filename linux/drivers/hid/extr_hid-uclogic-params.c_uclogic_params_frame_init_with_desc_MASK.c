
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_params_frame {size_t desc_size; unsigned int id; int * desc_ptr; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int const*,size_t,int ) ;
 int FUNC_1 (struct uclogic_params_frame*,int ,int) ;

__attribute__((used)) static int FUNC_2(
     struct uclogic_params_frame *VAR_3,
     const __u8 *VAR_4,
     size_t VAR_5,
     unsigned int VAR_6)
{
 __u8 *VAR_7;

 if (VAR_3 == ((void*)0) || (VAR_4 == ((void*)0) && VAR_5 != 0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->desc_ptr = VAR_7;
 VAR_3->desc_size = VAR_5;
 VAR_3->id = VAR_6;
 return 0;
}
