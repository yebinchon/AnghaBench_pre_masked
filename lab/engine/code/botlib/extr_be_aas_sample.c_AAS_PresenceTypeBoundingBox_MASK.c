
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ vec3_t ;
struct TYPE_8__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(int VAR_4, vec3_t VAR_5, vec3_t VAR_6)
{
 int VAR_7;

 vec3_t VAR_8[3] = {{0, 0, 0}, {-15, -15, -24}, {-15, -15, -24}};
 vec3_t VAR_9[3] = {{0, 0, 0}, { 15, 15, 32}, { 15, 15, 8}};

 if (VAR_4 == VAR_1) VAR_7 = 1;
 else if (VAR_4 == VAR_0) VAR_7 = 2;
 else
 {
  VAR_3.Print(VAR_2, "AAS_PresenceTypeBoundingBox: unknown presence type\n");
  VAR_7 = 2;
 }
 FUNC_0(VAR_8[VAR_7], VAR_5);
 FUNC_0(VAR_9[VAR_7], VAR_6);
}
