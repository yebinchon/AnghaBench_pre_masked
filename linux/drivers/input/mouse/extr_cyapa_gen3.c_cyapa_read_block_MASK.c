
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct cyapa {scalar_t__ smbus; } ;
typedef int ssize_t ;
struct TYPE_4__ {size_t cmd; size_t len; } ;
struct TYPE_3__ {size_t cmd; size_t len; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct cyapa*,size_t,size_t,size_t*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct cyapa*,size_t,size_t,size_t*) ;

ssize_t FUNC_2(struct cyapa *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5;
 size_t VAR_6;

 if (VAR_2->smbus) {
  VAR_5 = VAR_1[VAR_3].cmd;
  VAR_6 = VAR_1[VAR_3].len;
  return FUNC_1(VAR_2, VAR_5, VAR_6, VAR_4);
 }
 VAR_5 = VAR_0[VAR_3].cmd;
 VAR_6 = VAR_0[VAR_3].len;
 return FUNC_0(VAR_2, VAR_5, VAR_6, VAR_4);
}
