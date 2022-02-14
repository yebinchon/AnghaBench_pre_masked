
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,size_t) ;
 scalar_t__ FUNC_3 (struct index_state*,char const*,void*,size_t,struct strbuf*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (void*,size_t,int ,struct object_id*) ;
 void* FUNC_7 (struct strbuf*,size_t*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void*,size_t,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_10(struct index_state *VAR_7,
       struct object_id *VAR_8, void *VAR_9, size_t VAR_10,
       enum object_type VAR_11,
       const char *VAR_12, unsigned VAR_13)
{
 int VAR_14, VAR_15 = 0;
 int VAR_16 = VAR_13 & VAR_1;

 if (!VAR_11)
  VAR_11 = VAR_2;




 if ((VAR_11 == VAR_2) && VAR_12) {
  struct strbuf VAR_17 = VAR_6;
  if (FUNC_3(VAR_7, VAR_12, VAR_9, VAR_10, &VAR_17,
       FUNC_5(VAR_13))) {
   VAR_9 = FUNC_7(&VAR_17, &VAR_10);
   VAR_15 = 1;
  }
 }
 if (VAR_13 & VAR_0) {
  if (VAR_11 == VAR_5)
   FUNC_2(VAR_9, VAR_10);
  if (VAR_11 == VAR_3)
   FUNC_0(VAR_9, VAR_10);
  if (VAR_11 == VAR_4)
   FUNC_1(VAR_9, VAR_10);
 }

 if (VAR_16)
  VAR_14 = FUNC_9(VAR_9, VAR_10, FUNC_8(VAR_11), VAR_8);
 else
  VAR_14 = FUNC_6(VAR_9, VAR_10, FUNC_8(VAR_11), VAR_8);
 if (VAR_15)
  FUNC_4(VAR_9);
 return VAR_14;
}
