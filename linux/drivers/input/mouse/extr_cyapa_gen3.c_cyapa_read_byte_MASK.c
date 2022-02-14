
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct cyapa {int client; scalar_t__ smbus; } ;
typedef int s32 ;
struct TYPE_4__ {size_t cmd; } ;
struct TYPE_3__ {size_t cmd; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static s32 FUNC_2(struct cyapa *VAR_3, u8 VAR_4)
{
 u8 VAR_5;

 if (VAR_3->smbus) {
  VAR_5 = VAR_2[VAR_4].cmd;
  VAR_5 = FUNC_0(VAR_5, VAR_0);
 } else {
  VAR_5 = VAR_1[VAR_4].cmd;
 }
 return FUNC_1(VAR_3->client, VAR_5);
}
