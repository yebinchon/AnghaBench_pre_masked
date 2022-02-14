
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int (* Hunk_FreeTempMemory ) (int *) ;} ;


 int * FUNC_0 (int,int,int,int,size_t*,int*) ;
 int FUNC_1 (char*,int ,int,int,int *,int) ;
 int FUNC_2 (int *,size_t) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int *) ;

void FUNC_4(int VAR_3, int VAR_4, int VAR_5, int VAR_6, char *VAR_7)
{
 byte *VAR_8;
 size_t VAR_9 = 0, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_9, &VAR_11);
 VAR_10 = (VAR_5 * 3 + VAR_11) * VAR_6;


 if(VAR_0.deviceSupportsGamma)
  FUNC_2(VAR_8 + VAR_9, VAR_10);

 FUNC_1(VAR_7, VAR_1->integer, VAR_5, VAR_6, VAR_8 + VAR_9, VAR_11);
 VAR_2.Hunk_FreeTempMemory(VAR_8);
}
