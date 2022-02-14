
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct gb_operation {int dummy; } ;
struct gb_connection {int dummy; } ;
typedef int gfp_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct gb_operation* FUNC_1 (struct gb_connection*,unsigned long,size_t,size_t,unsigned long,int ) ;
 int FUNC_2 (struct gb_operation*) ;

struct gb_operation *
FUNC_3(struct gb_connection *VAR_3,
     u8 VAR_4, size_t VAR_5,
     size_t VAR_6, unsigned long VAR_7,
     gfp_t VAR_8)
{
 struct gb_operation *VAR_9;

 if (FUNC_0(VAR_4 == VAR_2))
  return ((void*)0);
 if (FUNC_0(VAR_4 & VAR_0))
  VAR_4 &= ~VAR_0;

 if (FUNC_0(VAR_7 & ~VAR_1))
  VAR_7 &= VAR_1;

 VAR_9 = FUNC_1(VAR_3, VAR_4,
            VAR_5, VAR_6,
            VAR_7, VAR_8);
 if (VAR_9)
  FUNC_2(VAR_9);

 return VAR_9;
}
