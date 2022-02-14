
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int search_query_heap_en_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (scalar_t__*,char const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,void*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,char*) ;
 int FUNC_5 (int,char*,int) ;

int FUNC_6 (const char *VAR_3, int VAR_4) {
  if (VAR_4 < VAR_0) {
    FUNC_0 (VAR_2, VAR_3, VAR_4);
    VAR_2[VAR_4] = 0;
  } else {
    FUNC_4 (VAR_2, "TOO LONG QUERY");
  }

  search_query_heap_en_t VAR_5;
  FUNC_3 (&VAR_5);
  int VAR_6 = FUNC_1 ();
  FUNC_2 (&VAR_5, VAR_6, (void *) VAR_3, VAR_1);
  FUNC_5 (1, "perform_query result = %d\n", VAR_6);
  return VAR_6;
}
