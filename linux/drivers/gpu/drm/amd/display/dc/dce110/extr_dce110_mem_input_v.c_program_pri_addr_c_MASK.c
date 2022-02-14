
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ctx; } ;
struct dce_mem_input {TYPE_1__ base; } ;
struct TYPE_5__ {int high_part; int low_part; } ;
typedef TYPE_2__ PHYSICAL_ADDRESS_LOC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dce_mem_input *VAR_8,
 PHYSICAL_ADDRESS_LOC VAR_9)
{
 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;

 VAR_11 = VAR_9.high_part &
VAR_5;

 FUNC_1(VAR_10, VAR_11,
  VAR_4,
  VAR_1);

 FUNC_0(
  VAR_8->base.ctx,
  VAR_7,
  VAR_10);

 VAR_11 = 0;
 VAR_10 = 0;
 VAR_11 = VAR_9.low_part >>
 VAR_3;

 FUNC_1(VAR_10, VAR_11,
  VAR_2,
  VAR_0);

 FUNC_0(
  VAR_8->base.ctx,
  VAR_6,
  VAR_10);
}
