
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int genFunc_t ;
struct TYPE_8__ {int (* Error ) (int ,char*,int,int ) ;} ;
struct TYPE_7__ {TYPE_1__* shader; } ;
struct TYPE_6__ {float* sinTable; float* triangleTable; float* squareTable; float* sawToothTable; float* inverseSawToothTable; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;






 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static float *FUNC_1( genFunc_t VAR_4 )
{
 switch ( VAR_4 )
 {
 case 130:
  return VAR_3.sinTable;
 case 128:
  return VAR_3.triangleTable;
 case 129:
  return VAR_3.squareTable;
 case 131:
  return VAR_3.sawToothTable;
 case 133:
  return VAR_3.inverseSawToothTable;
 case 132:
 default:
  break;
 }

 VAR_1.Error( VAR_0, "TableForFunc called with invalid function '%d' in shader '%s'", VAR_4, VAR_2.shader->name );
 return ((void*)0);
}
