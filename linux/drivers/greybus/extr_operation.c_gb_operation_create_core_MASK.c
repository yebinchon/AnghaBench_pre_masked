
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_operation {int dummy; } ;
struct gb_connection {int dummy; } ;
typedef int gfp_t ;


 unsigned long VAR_0 ;
 struct gb_operation* FUNC_0 (struct gb_connection*,int ,size_t,size_t,unsigned long,int ) ;
 int FUNC_1 (struct gb_operation*) ;

struct gb_operation *
FUNC_2(struct gb_connection *VAR_1,
    u8 VAR_2, size_t VAR_3,
    size_t VAR_4, unsigned long VAR_5,
    gfp_t VAR_6)
{
 struct gb_operation *VAR_7;

 VAR_5 |= VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2,
            VAR_3, VAR_4,
            VAR_5, VAR_6);
 if (VAR_7)
  FUNC_1(VAR_7);

 return VAR_7;
}
