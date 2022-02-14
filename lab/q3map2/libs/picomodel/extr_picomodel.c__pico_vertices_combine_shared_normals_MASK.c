
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef float* picoVec3_t ;
struct TYPE_15__ {float** member_0; size_t* member_1; } ;
typedef TYPE_2__ picoSmoothVertices_t ;
typedef size_t picoIndex_t ;
struct TYPE_14__ {size_t* data; } ;
struct TYPE_16__ {TYPE_1__ indices; } ;
typedef TYPE_3__ UniqueIndices ;
struct TYPE_17__ {size_t* data; size_t* last; } ;
typedef TYPE_4__ IndexArray ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_2__*) ;
 size_t FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 size_t FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (float*,float*,float*) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,size_t) ;
 int FUNC_9 (TYPE_4__*,size_t) ;
 int VAR_0 ;

void FUNC_10(picoVec3_t* VAR_1, picoIndex_t* VAR_2, picoVec3_t* VAR_3, picoIndex_t VAR_4) {
 UniqueIndices VAR_5;
 IndexArray VAR_6;
 picoSmoothVertices_t VAR_7 = { VAR_1, VAR_2 };
 FUNC_1(&VAR_5, VAR_0, &VAR_7);
 FUNC_3(&VAR_5, VAR_4);
 FUNC_9(&VAR_6, VAR_4);

 {
  picoIndex_t VAR_8 = 0;
  for (; VAR_8 < VAR_4; ++VAR_8)
  {
   size_t VAR_9 = FUNC_4(&VAR_5);
   picoIndex_t VAR_10 = FUNC_2(&VAR_5, VAR_8);
   if ((size_t)VAR_10 != VAR_9) {
    float* VAR_11 = VAR_3[VAR_5.indices.data[VAR_10]];
    FUNC_5(VAR_11, VAR_3[VAR_8], VAR_11);
   }
   FUNC_8(&VAR_6, VAR_10);
  }
 }

 {
  picoIndex_t VAR_12 = 0;
  picoIndex_t* VAR_13 = VAR_6.data;
  for (; VAR_13 != VAR_6.last; ++VAR_13)
  {
   if (*VAR_13 <= VAR_12) {
    FUNC_6(VAR_3[VAR_5.indices.data[*VAR_13]], VAR_3[VAR_13 - VAR_6.data]);
   }
   else
   {
    VAR_12 = *VAR_13;
   }
  }
 }

 FUNC_0(&VAR_5);
 FUNC_7(&VAR_6);
}
