
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int occlusionQuery; } ;
struct TYPE_5__ {int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_4__ {int sunFlareQueryIndex; int * sunFlareQuery; int * sunFlareQueryActive; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static qboolean FUNC_3(void)
{
 GLuint VAR_7 = 0;
 if (!VAR_3.occlusionQuery)
  return VAR_4;

 VAR_6.sunFlareQueryIndex ^= 1;
 if (!VAR_6.sunFlareQueryActive[VAR_6.sunFlareQueryIndex])
  return VAR_4;


 if (0)
 {
  int VAR_8;
  for (VAR_8=0 ; ; ++VAR_8)
  {
   GLint VAR_9 = 0;
   FUNC_0(VAR_6.sunFlareQuery[VAR_6.sunFlareQueryIndex], VAR_1, &VAR_9);
   if (VAR_9)
    break;
  }

  VAR_5.Printf(VAR_2, "Waited %d iterations\n", VAR_8);
 }

 FUNC_1(VAR_6.sunFlareQuery[VAR_6.sunFlareQueryIndex], VAR_0, &VAR_7);
 return VAR_7 > 0;
}
