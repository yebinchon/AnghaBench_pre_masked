
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
typedef size_t ssize_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct index_state*,struct object_id*,void*,size_t,int,char const*,unsigned int) ;
 int FUNC_5 (void*,size_t) ;
 size_t FUNC_6 (int,char*,size_t) ;
 char* FUNC_7 (size_t) ;
 void* FUNC_8 (int *,size_t,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct index_state *VAR_3,
        struct object_id *VAR_4, int VAR_5, size_t VAR_6,
        enum object_type VAR_7, const char *VAR_8,
        unsigned VAR_9)
{
 int VAR_10;

 if (!VAR_6) {
  VAR_10 = FUNC_4(VAR_3, VAR_4, "", VAR_6, VAR_7, VAR_8, VAR_9);
 } else if (VAR_6 <= VAR_2) {
  char *VAR_11 = FUNC_7(VAR_6);
  ssize_t VAR_12 = FUNC_6(VAR_5, VAR_11, VAR_6);
  if (VAR_12 < 0)
   VAR_10 = FUNC_2(FUNC_0("read error while indexing %s"),
       VAR_8 ? VAR_8 : "<unknown>");
  else if (VAR_12 != VAR_6)
   VAR_10 = FUNC_1(FUNC_0("short read while indexing %s"),
        VAR_8 ? VAR_8 : "<unknown>");
  else
   VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_11, VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_3(VAR_11);
 } else {
  void *VAR_13 = FUNC_8(((void*)0), VAR_6, VAR_1, VAR_0, VAR_5, 0);
  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9);
  FUNC_5(VAR_13, VAR_6);
 }
 return VAR_10;
}
