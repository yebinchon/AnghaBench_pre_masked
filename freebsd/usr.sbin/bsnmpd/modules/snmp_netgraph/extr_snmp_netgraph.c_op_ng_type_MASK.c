
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_8__ {int integer; } ;
struct TYPE_9__ {int* subs; } ;
struct snmp_value {TYPE_2__ v; TYPE_3__ var; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct ngtype {int index; } ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
typedef int asn_subid_t ;
struct TYPE_7__ {int int1; size_t int2; int * ptr2; } ;


 int VAR_0 ;
 struct ngtype* FUNC_0 (int *,TYPE_3__*,int) ;

 struct ngtype* FUNC_1 (int *,TYPE_3__*,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int,int *) ;
 int FUNC_8 (TYPE_3__*,int,int,int **,size_t*) ;
 int VAR_11 ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,size_t) ;

int
FUNC_11(struct snmp_context *VAR_12, struct snmp_value *VAR_13,
    u_int VAR_14, u_int VAR_15, enum snmp_op VAR_16)
{
 asn_subid_t VAR_17 = VAR_13->var.subs[VAR_14 - 1];
 struct ngtype *VAR_18;
 u_char *VAR_19;
 size_t VAR_20;
 int VAR_21 = 1;
 int VAR_22;

 switch (VAR_16) {

   case 130:
  if ((VAR_22 = FUNC_5()) != 0)
   return (VAR_22);
  if ((VAR_18 = FUNC_1(&VAR_11, &VAR_13->var, VAR_14)) == ((void*)0))
   return (VAR_5);
  FUNC_7(&VAR_13->var, VAR_14, &VAR_18->index);
  break;

   case 131:
  if ((VAR_22 = FUNC_5()) != 0)
   return (VAR_22);
  if ((VAR_18 = FUNC_0(&VAR_11, &VAR_13->var, VAR_14)) == ((void*)0))
   return (VAR_5);
  break;

   case 128:
  if (FUNC_8(&VAR_13->var, VAR_14, VAR_15, &VAR_19, &VAR_20))
   return (VAR_7);
  if (VAR_20 == 0 || VAR_20 >= VAR_1) {
   FUNC_6(VAR_19);
   return (VAR_7);
  }
  if ((VAR_22 = FUNC_5()) != 0) {
   FUNC_6(VAR_19);
   return (VAR_22);
  }
  VAR_18 = FUNC_0(&VAR_11, &VAR_13->var, VAR_14);

  if (VAR_17 != 133) {
   FUNC_6(VAR_19);
   if (VAR_18 != ((void*)0))
    return (VAR_6);
   return (VAR_7);
  }
  if (!FUNC_3(VAR_13->v.integer)) {
   FUNC_6(VAR_19);
   return (VAR_9);
  }
  VAR_12->scratch->int1 = FUNC_2(VAR_13->v.integer);
  VAR_12->scratch->int1 |= (VAR_18 != ((void*)0)) << 1;
  VAR_12->scratch->ptr2 = VAR_19;
  VAR_12->scratch->int2 = VAR_20;

  if (VAR_18 == ((void*)0)) {

   if (VAR_12->scratch->int1 & 1) {

    if (FUNC_9(VAR_19, VAR_20) == -1) {
     FUNC_6(VAR_19);
     if (VAR_10 == VAR_0)
      return (VAR_3);
     else
      return (VAR_2);
    }
   }
  } else {

   if (!(VAR_12->scratch->int1 & 1)) {

    if (FUNC_10(VAR_19, VAR_20) == -1) {
     FUNC_6(VAR_19);
     return (VAR_2);
    }
   }
  }
  return (VAR_4);

   case 129:
  VAR_22 = VAR_4;
  if (!(VAR_12->scratch->int1 & 2)) {

   if (VAR_12->scratch->int1 & 1) {

    if (FUNC_10(VAR_12->scratch->ptr2,
        VAR_12->scratch->int2) == -1)
     VAR_22 = VAR_8;
   }
  } else {

   if (!(VAR_12->scratch->int1 & 1)) {

    if (FUNC_9(VAR_12->scratch->ptr2,
        VAR_12->scratch->int2) == -1)
     VAR_22 = VAR_8;
   }
  }
  FUNC_6(VAR_12->scratch->ptr2);
  return (VAR_22);

   case 132:
  FUNC_6(VAR_12->scratch->ptr2);
  return (VAR_4);

   default:
  FUNC_4();
 }




 switch (VAR_17) {

   case 133:
  VAR_13->v.integer = VAR_21;
  break;

   default:
  FUNC_4();
 }
 return (VAR_4);
}
