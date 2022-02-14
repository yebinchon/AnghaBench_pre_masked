
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; TYPE_2__** child; } ;
struct TYPE_6__ {char* key; long n; TYPE_1__ v; int type; } ;
typedef TYPE_2__ kson_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (long*) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;

kson_node_t *FUNC_7(const char *VAR_9, long *VAR_10, int *VAR_11, long *VAR_12)
{
 long *VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19;
 kson_node_t *VAR_20 = 0, *VAR_21;
 const char *VAR_22, *VAR_23;
 size_t *VAR_24;
 FUNC_2(sizeof(size_t) == sizeof(kson_node_t*));
 *VAR_11 = VAR_3;
 for (VAR_22 = VAR_9; *VAR_22; ++VAR_22) {
  while (*VAR_22 && FUNC_4(*VAR_22)) ++VAR_22;
  if (*VAR_22 == 0) break;
  if (*VAR_22 == ',') {
  } else if (*VAR_22 == '[' || *VAR_22 == '{') {
   int VAR_25 = *VAR_22 == '['? -1 : -2;
   if (VAR_14 < 2 || VAR_13[VAR_14-1] != -3) {
    do { if (VAR_14 == VAR_15) { VAR_15 = VAR_15? VAR_15<<1 : 4; VAR_13 = (long*)realloc(VAR_13, sizeof(long) * VAR_15); } VAR_13[VAR_14++] = (VAR_16); } while (0);
    do { if (VAR_16 == VAR_17) { long VAR_26 = VAR_17; VAR_17 = VAR_17? VAR_17<<1 : 4; VAR_20 = (kson_node_t*)FUNC_0(VAR_20, sizeof(kson_node_t) * VAR_17); memset(VAR_20 + VAR_26, 0, sizeof(kson_node_t) * (VAR_17 - VAR_26)); } *(&VAR_21) = &VAR_20[VAR_16++]; } while (0);
    do { if (VAR_14 == VAR_15) { VAR_15 = VAR_15? VAR_15<<1 : 4; VAR_13 = (long*)FUNC_0(VAR_13, sizeof(long) * VAR_15); } VAR_13[VAR_14++] = (VAR_25); } while (0);
   } else VAR_13[VAR_14-1] = VAR_25;
  } else if (*VAR_22 == ']' || *VAR_22 == '}') {
   long VAR_27, VAR_28, VAR_29 = *VAR_22 == ']'? -1 : -2;
   for (VAR_27 = VAR_14 - 1; VAR_27 >= 0 && VAR_13[VAR_27] != VAR_29; --VAR_27);
   if (VAR_27 < 0) {
    *VAR_11 = VAR_1;
    break;
   }
   VAR_28 = VAR_27;
   VAR_21 = &VAR_20[VAR_13[VAR_28-1]];
   VAR_21->key = VAR_21->v.str;
   VAR_21->n = VAR_14 - 1 - VAR_28;
   VAR_21->v.child = (kson_node_t**)FUNC_5(VAR_21->n * sizeof(kson_node_t*));
   VAR_24 = (size_t*)VAR_21->v.child;
   for (VAR_27 = VAR_28 + 1; VAR_27 < VAR_14; ++VAR_27)
    VAR_24[VAR_27 - VAR_28 - 1] = VAR_13[VAR_27];
   VAR_21->type = *VAR_22 == ']'? VAR_5 : VAR_4;
   if ((VAR_14 = VAR_28) == 1) break;
  } else if (*VAR_22 == ':') {
   if (VAR_14 == 0 || VAR_13[VAR_14-1] == -3) {
    *VAR_11 = VAR_2;
    break;
   }
   do { if (VAR_14 == VAR_15) { VAR_15 = VAR_15? VAR_15<<1 : 4; VAR_13 = (long*)FUNC_0(VAR_13, sizeof(long) * VAR_15); } VAR_13[VAR_14++] = (-3); } while (0);
  } else {
   int VAR_30 = *VAR_22;

   if (VAR_14 >= 2 && VAR_13[VAR_14-1] == -3) {
    --VAR_14;
    VAR_21 = &VAR_20[VAR_13[VAR_14-1]];
    VAR_21->key = VAR_21->v.str;
   } else {
    do { if (VAR_14 == VAR_15) { VAR_15 = VAR_15? VAR_15<<1 : 4; VAR_13 = (long*)FUNC_0(VAR_13, sizeof(long) * VAR_15); } VAR_13[VAR_14++] = (VAR_16); } while (0);
    do { if (VAR_16 == VAR_17) { long VAR_31 = VAR_17; VAR_17 = VAR_17? VAR_17<<1 : 4; VAR_20 = (kson_node_t*)FUNC_0(VAR_20, sizeof(kson_node_t) * VAR_17); FUNC_0(VAR_20 + VAR_31, 0, sizeof(kson_node_t) * (VAR_17 - VAR_31)); } *(&VAR_21) = &VAR_20[VAR_16++]; } while (0);
   }

   if (VAR_30 == '\'' || VAR_30 == '"') {
    for (VAR_23 = ++VAR_22; *VAR_23 && *VAR_23 != VAR_30; ++VAR_23)
     if (*VAR_23 == '\\') ++VAR_23;
   } else {
    for (VAR_23 = VAR_22; *VAR_23 && *VAR_23 != ']' && *VAR_23 != '}' && *VAR_23 != ',' && *VAR_23 != ':' && *VAR_23 != '\n'; ++VAR_23)
     if (*VAR_23 == '\\') ++VAR_23;
   }
   VAR_21->v.str = (char*)FUNC_5(VAR_23 - VAR_22 + 1); FUNC_6(VAR_21->v.str, VAR_22, VAR_23 - VAR_22); VAR_21->v.str[VAR_23-VAR_22] = 0;
   VAR_21->type = VAR_30 == '\''? VAR_8 : VAR_30 == '"'? VAR_6 : VAR_7;
   VAR_22 = VAR_30 == '\'' || VAR_30 == '"'? VAR_23 : VAR_23 - 1;
  }
 }
 while (*VAR_22 && FUNC_4(*VAR_22)) ++VAR_22;
 if (VAR_12) *VAR_12 = VAR_22 - VAR_9;
 if (VAR_14 != 1) *VAR_11 = VAR_0;

 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18)
  for (VAR_19 = 0, VAR_21 = &VAR_20[VAR_18], VAR_24 = (size_t*)VAR_21->v.child; VAR_19 < (long)VAR_21->n; ++VAR_19)
   VAR_21->v.child[VAR_19] = &VAR_20[VAR_24[VAR_19]];

 FUNC_3(VAR_13);
 *VAR_10 = VAR_16;
 return VAR_20;
}
