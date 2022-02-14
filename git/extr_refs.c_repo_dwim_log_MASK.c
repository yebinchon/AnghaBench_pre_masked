
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;
struct repository {int dummy; } ;
struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 struct ref_store* FUNC_1 (struct repository*) ;
 int FUNC_2 (struct object_id*,struct object_id*) ;
 char** VAR_2 ;
 scalar_t__ FUNC_3 (struct ref_store*,char const*) ;
 char* FUNC_4 (struct ref_store*,char const*,int ,struct object_id*,int *) ;
 int FUNC_5 (struct strbuf*,char const*,int,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* FUNC_9 (struct repository*,char const**,int*) ;
 int VAR_3 ;
 char* FUNC_10 (char const*) ;

int FUNC_11(struct repository *VAR_4, const char *VAR_5, int VAR_6,
    struct object_id *VAR_7, char **VAR_8)
{
 struct ref_store *VAR_9 = FUNC_1(VAR_4);
 char *VAR_10 = FUNC_9(VAR_4, &VAR_5, &VAR_6);
 const char **VAR_11;
 int VAR_12 = 0;
 struct strbuf VAR_13 = VAR_1;

 *VAR_8 = ((void*)0);
 for (VAR_11 = VAR_2; *VAR_11; VAR_11++) {
  struct object_id VAR_14;
  const char *VAR_15, *VAR_16;

  FUNC_7(&VAR_13);
  FUNC_5(&VAR_13, *VAR_11, VAR_6, VAR_5);
  VAR_15 = FUNC_4(VAR_9, VAR_13.buf,
           VAR_0,
           &VAR_14, ((void*)0));
  if (!VAR_15)
   continue;
  if (FUNC_3(VAR_9, VAR_13.buf))
   VAR_16 = VAR_13.buf;
  else if (FUNC_8(VAR_15, VAR_13.buf) &&
    FUNC_3(VAR_9, VAR_15))
   VAR_16 = VAR_15;
  else
   continue;
  if (!VAR_12++) {
   *VAR_8 = FUNC_10(VAR_16);
   FUNC_2(VAR_7, &VAR_14);
  }
  if (!VAR_3)
   break;
 }
 FUNC_6(&VAR_13);
 FUNC_0(VAR_10);
 return VAR_12;
}
