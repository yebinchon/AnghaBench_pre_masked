
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct object_id const object_id ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct object_id const*) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (struct object_id const*,struct object_id const*) ;
 char* FUNC_4 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_5 (char*,unsigned long,int ,struct object_id const*) ;
 scalar_t__ FUNC_6 (unsigned long) ;

int FUNC_7(struct object_id *VAR_2,
         const struct object_id *VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 enum object_type VAR_10, VAR_11;
 int VAR_12;


 if (!FUNC_1(VAR_3))
  VAR_5 = FUNC_4(VAR_3, &VAR_11, &VAR_8);
 if (!VAR_5 || !VAR_8 || VAR_11 != VAR_0) {
  FUNC_0(VAR_5);
  return 0;
 }
 if (!FUNC_1(VAR_2))
  VAR_4 = FUNC_4(VAR_2, &VAR_10, &VAR_7);
 if (!VAR_4 || !VAR_7 || VAR_10 != VAR_0) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_5);
  FUNC_3(VAR_2, VAR_3);
  return 0;
 }


 if (VAR_4[VAR_7 - 1] == '\n')
  VAR_7--;


 VAR_9 = VAR_7 + 2 + VAR_8;
 VAR_6 = (char *) FUNC_6(VAR_9);
 FUNC_2(VAR_6, VAR_4, VAR_7);
 VAR_6[VAR_7] = '\n';
 VAR_6[VAR_7 + 1] = '\n';
 FUNC_2(VAR_6 + VAR_7 + 2, VAR_5, VAR_8);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);


 VAR_12 = FUNC_5(VAR_6, VAR_9, VAR_1, VAR_2);
 FUNC_0(VAR_6);
 return VAR_12;
}
