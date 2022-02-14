
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline enum v4l2_field
FUNC_0(enum v4l2_field VAR_4, v4l2_std_id VAR_5)
{
 return (VAR_4 != VAR_0) ? VAR_4 :
  ((VAR_5 & VAR_3) ?
   VAR_1 : VAR_2);
}
