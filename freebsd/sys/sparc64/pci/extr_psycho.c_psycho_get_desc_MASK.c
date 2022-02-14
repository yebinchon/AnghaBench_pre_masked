
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psycho_desc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct psycho_desc* FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static const struct psycho_desc *
FUNC_3(device_t VAR_2)
{
 const struct psycho_desc *VAR_3;

 VAR_3 = FUNC_2(VAR_1, FUNC_1(VAR_2));
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_2(VAR_0,
      FUNC_0(VAR_2));
 return (VAR_3);
}
