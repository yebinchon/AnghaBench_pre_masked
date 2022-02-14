
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_11__ {double fraction; scalar_t__ entityNum; } ;
typedef TYPE_4__ trace_t ;
typedef int qboolean ;
struct TYPE_9__ {scalar_t__ number; } ;
struct TYPE_8__ {int absmax; int absmin; } ;
struct TYPE_12__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_10__ {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,double,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,int ,int ,scalar_t__*,int ,int ) ;
 int VAR_4 ;

qboolean FUNC_4 (gentity_t *VAR_5, vec3_t VAR_6) {
 vec3_t VAR_7;
 trace_t VAR_8;
 vec3_t VAR_9;
 vec3_t VAR_10 = {-15, -15, -15};
 vec3_t VAR_11 = {15, 15, 15};



 FUNC_0 (VAR_5->r.absmin, VAR_5->r.absmax, VAR_9);
 FUNC_2 (VAR_9, 0.5, VAR_9);

 FUNC_1(VAR_9, VAR_7);
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0 || VAR_8.entityNum == VAR_5->s.number)
  return VAR_3;



 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_11[0];
 VAR_7[1] += VAR_11[1];
 VAR_7[2] += VAR_11[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_11[0];
 VAR_7[1] += VAR_10[1];
 VAR_7[2] += VAR_11[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_10[0];
 VAR_7[1] += VAR_11[1];
 VAR_7[2] += VAR_11[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_10[0];
 VAR_7[1] += VAR_10[1];
 VAR_7[2] += VAR_11[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_11[0];
 VAR_7[1] += VAR_11[1];
 VAR_7[2] += VAR_10[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_11[0];
 VAR_7[1] += VAR_10[1];
 VAR_7[2] += VAR_10[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_10[0];
 VAR_7[1] += VAR_11[1];
 VAR_7[2] += VAR_10[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 FUNC_1(VAR_9, VAR_7);
 VAR_7[0] += VAR_10[0];
 VAR_7[1] += VAR_10[1];
 VAR_7[2] += VAR_10[2];
 FUNC_3(&VAR_8, VAR_6, VAR_4, VAR_4, VAR_7, VAR_0, VAR_1);

 if (VAR_8.fraction == 1.0)
  return VAR_3;

 return VAR_2;
}
