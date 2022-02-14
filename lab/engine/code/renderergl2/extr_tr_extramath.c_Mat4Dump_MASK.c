
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * mat4_t ;
struct TYPE_2__ {int (* Printf ) (int ,char*,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ) ;

void FUNC_4( const mat4_t VAR_2 )
{
 VAR_1.Printf(VAR_0, "%3.5f %3.5f %3.5f %3.5f\n", VAR_2[ 0], VAR_2[ 4], VAR_2[ 8], VAR_2[12]);
 VAR_1.Printf(VAR_0, "%3.5f %3.5f %3.5f %3.5f\n", VAR_2[ 1], VAR_2[ 5], VAR_2[ 9], VAR_2[13]);
 VAR_1.Printf(VAR_0, "%3.5f %3.5f %3.5f %3.5f\n", VAR_2[ 2], VAR_2[ 6], VAR_2[10], VAR_2[14]);
 VAR_1.Printf(VAR_0, "%3.5f %3.5f %3.5f %3.5f\n", VAR_2[ 3], VAR_2[ 7], VAR_2[11], VAR_2[15]);
}
