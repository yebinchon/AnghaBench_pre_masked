
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ smca; } ;
struct TYPE_3__ {int (* misc ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_6, u32 VAR_7, u32 VAR_8,
        unsigned int VAR_9, unsigned int VAR_10,
        unsigned int VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0;

 if ((VAR_9 >= FUNC_0(VAR_4, VAR_11)) || (VAR_10 >= VAR_2))
  return VAR_12;

 if (VAR_3.smca)
  return FUNC_1(VAR_9, VAR_10, VAR_11);


 switch (VAR_10) {
 case 0:
  VAR_12 = VAR_5.misc(VAR_9);
  break;
 case 1:
  VAR_13 = ((VAR_7 & VAR_0) >> 21);
  if (VAR_13)
   VAR_12 = VAR_1 + VAR_13;
  break;
 default:
  VAR_12 = ++VAR_6;
 }
 return VAR_12;
}
