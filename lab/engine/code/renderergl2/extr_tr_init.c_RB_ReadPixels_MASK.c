
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int * (* Hunk_AllocateTempMemory ) (scalar_t__) ;} ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int * FUNC_1 (intptr_t,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int,int,int,int,int ,int ,int *) ;
 TYPE_1__ VAR_3 ;
 int * FUNC_4 (scalar_t__) ;

byte *FUNC_5(int VAR_4, int VAR_5, int VAR_6, int VAR_7, size_t *VAR_8, int *VAR_9)
{
 byte *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 GLint VAR_14;

 FUNC_2(VAR_0, &VAR_14);

 VAR_13 = VAR_6 * 3;
 VAR_12 = FUNC_0(VAR_13, VAR_14);


 VAR_10 = VAR_3.Hunk_AllocateTempMemory(VAR_12 * VAR_7 + *VAR_8 + VAR_14 - 1);

 VAR_11 = FUNC_1((intptr_t) VAR_10 + *VAR_8, VAR_14);

 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_1, VAR_2, VAR_11);

 *VAR_8 = VAR_11 - VAR_10;
 *VAR_9 = VAR_12 - VAR_13;

 return VAR_10;
}
