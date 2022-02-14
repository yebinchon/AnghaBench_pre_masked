
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
struct amdgpu_device {int *** reg_offset; } ;
struct TYPE_28__ {int * instance; } ;
struct TYPE_27__ {int * instance; } ;
struct TYPE_26__ {int * instance; } ;
struct TYPE_25__ {int * instance; } ;
struct TYPE_24__ {int * instance; } ;
struct TYPE_23__ {int * instance; } ;
struct TYPE_22__ {int * instance; } ;
struct TYPE_21__ {int * instance; } ;
struct TYPE_20__ {int * instance; } ;
struct TYPE_19__ {int * instance; } ;
struct TYPE_18__ {int * instance; } ;
struct TYPE_17__ {int * instance; } ;
struct TYPE_16__ {int * instance; } ;
struct TYPE_15__ {int * instance; } ;


 TYPE_14__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_13__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_12__ VAR_5 ;
 TYPE_11__ VAR_6 ;
 size_t VAR_7 ;
 TYPE_10__ VAR_8 ;
 size_t VAR_9 ;
 TYPE_9__ VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 TYPE_8__ VAR_13 ;
 size_t VAR_14 ;
 TYPE_7__ VAR_15 ;
 size_t VAR_16 ;
 TYPE_6__ VAR_17 ;
 size_t VAR_18 ;
 TYPE_5__ VAR_19 ;
 size_t VAR_20 ;
 TYPE_4__ VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 TYPE_3__ VAR_25 ;
 size_t VAR_26 ;
 TYPE_2__ VAR_27 ;
 size_t VAR_28 ;
 TYPE_1__ VAR_29 ;
 size_t VAR_30 ;

int FUNC_0(struct amdgpu_device *VAR_31)
{
 int VAR_32;

 for (VAR_32 = 0 ; VAR_32 < VAR_12 ; ++VAR_32) {
  VAR_31->reg_offset[VAR_9][VAR_32] = (uint32_t *)(&(VAR_8.instance[VAR_32]));
  VAR_31->reg_offset[VAR_11][VAR_32] = (uint32_t *)(&(VAR_10.instance[VAR_32]));
  VAR_31->reg_offset[VAR_14][VAR_32] = (uint32_t *)(&(VAR_13.instance[VAR_32]));
  VAR_31->reg_offset[VAR_1][VAR_32] = (uint32_t *)(&(VAR_0.instance[VAR_32]));
  VAR_31->reg_offset[VAR_20][VAR_32] = (uint32_t *)(&(VAR_19.instance[VAR_32]));
  VAR_31->reg_offset[VAR_16][VAR_32] = (uint32_t *)(&(VAR_15.instance[VAR_32]));
  VAR_31->reg_offset[VAR_18][VAR_32] = (uint32_t *)(&(VAR_17.instance[VAR_32]));
  VAR_31->reg_offset[VAR_30][VAR_32] = (uint32_t *)(&(VAR_29.instance[VAR_32]));
  VAR_31->reg_offset[VAR_7][VAR_32] = (uint32_t *)(&(VAR_6.instance[VAR_32]));
  VAR_31->reg_offset[VAR_4][VAR_32] = (uint32_t *)(&(VAR_5.instance[VAR_32]));
  VAR_31->reg_offset[VAR_22][VAR_32] = (uint32_t *)(&(VAR_21.instance[VAR_32]));
  VAR_31->reg_offset[VAR_23][VAR_32] = (uint32_t *)(&(VAR_8.instance[VAR_32]));
  VAR_31->reg_offset[VAR_24][VAR_32] = (uint32_t *)(&(VAR_8.instance[VAR_32]));
  VAR_31->reg_offset[VAR_26][VAR_32] = (uint32_t *)(&(VAR_25.instance[VAR_32]));
  VAR_31->reg_offset[VAR_28][VAR_32] = (uint32_t *)(&(VAR_27.instance[VAR_32]));
  VAR_31->reg_offset[VAR_3][VAR_32] = (uint32_t *)(&(VAR_2.instance[VAR_32]));
 }

 return 0;
}
