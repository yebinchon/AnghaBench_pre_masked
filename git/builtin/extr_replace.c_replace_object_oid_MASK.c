
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_transaction {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id*,struct object_id*,struct strbuf*,int) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int ,struct object_id*,int *) ;
 struct ref_transaction* FUNC_4 (struct strbuf*) ;
 scalar_t__ FUNC_5 (struct ref_transaction*,struct strbuf*) ;
 int FUNC_6 (struct ref_transaction*) ;
 scalar_t__ FUNC_7 (struct ref_transaction*,int ,struct object_id*,struct object_id*,int ,int *,struct strbuf*) ;
 int FUNC_8 (struct strbuf*) ;
 int VAR_1 ;
 char* FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_2,
          struct object_id *VAR_3,
          const char *VAR_4,
          struct object_id *VAR_5,
          int VAR_6)
{
 struct object_id VAR_7;
 enum object_type VAR_8, VAR_9;
 struct strbuf VAR_10 = VAR_0;
 struct ref_transaction *VAR_11;
 struct strbuf VAR_12 = VAR_0;
 int VAR_13 = 0;

 VAR_8 = FUNC_3(VAR_1, VAR_3, ((void*)0));
 VAR_9 = FUNC_3(VAR_1, VAR_5, ((void*)0));
 if (!VAR_6 && VAR_8 != VAR_9)
  return FUNC_2(FUNC_0("Objects must be of the same type.\n"
          "'%s' points to a replaced object of type '%s'\n"
          "while '%s' points to a replacement object of "
          "type '%s'."),
        VAR_2, FUNC_9(VAR_8),
        VAR_4, FUNC_9(VAR_9));

 if (FUNC_1(VAR_3, &VAR_7, &VAR_10, VAR_6)) {
  FUNC_8(&VAR_10);
  return -1;
 }

 VAR_11 = FUNC_4(&VAR_12);
 if (!VAR_11 ||
     FUNC_7(VAR_11, VAR_10.buf, VAR_5, &VAR_7,
       0, ((void*)0), &VAR_12) ||
     FUNC_5(VAR_11, &VAR_12))
  VAR_13 = FUNC_2("%s", VAR_12.buf);

 FUNC_6(VAR_11);
 FUNC_8(&VAR_10);
 return VAR_13;
}
